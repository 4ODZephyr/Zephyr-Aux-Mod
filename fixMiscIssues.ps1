param (
	[switch]$SkipPrompt = $false
)

function Pause-If-FromExplorer {
    try {
        $ppid = (Get-CimInstance Win32_Process -Filter "ProcessId = $PID").ParentProcessId
        $parent = Get-Process -Id $ppid -ErrorAction SilentlyContinue
        if ($parent -and $parent.ProcessName -in @('explorer', 'Explorer')) {
            Write-Host ''
            Read-Host 'Press Enter to close this window'
        }
    } catch { }
}

if (-not $SkipPrompt)
{
	Write-Output "It is recommended to commit your existing work before running this script"
	$response = Read-Host "Are you sure that you want to run this script? (Y/N)"
	if ($response -ne "y" -or $response -ne "Y")
	{
		Write-Output "exiting without running fixes"
		Pause-If-FromExplorer
		exit
	}
}

Write-Output "Tidying up files"
if(Test-Path "./meta/tools/hemtt/hemtt.exe")
{
	./meta/tools/hemtt/hemtt.exe utils bom
	./meta/tools/hemtt/hemtt.exe ln sort
	./meta/tools/hemtt/hemtt.exe utils fnl
}
else
{
	hemtt utils bom
	hemtt ln sort
	hemtt utils fnl
}

Write-Output "Attempting to fix possible git lfs issues"
git lfs fsck
git lfs fetch --all
git lfs pull

Pause-If-FromExplorer
