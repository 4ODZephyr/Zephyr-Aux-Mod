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

& "$PSScriptRoot/release.ps1"
if ($LASTEXITCODE -ne 0) {
	Write-Error "Release failed, aborting publish."
	Pause-If-FromExplorer
	exit $LASTEXITCODE
}

Write-Host ''
Write-Host 'HEMTT will use the currently logged in Steam user to upload the mod to the workshop'
Write-Host 'Please make sure that the current Steam user has permissions to upload to this mods Steam workshop page'
Read-Host 'Press Enter to continue'

if(Test-Path "./meta/tools/hemtt/hemtt.exe")
{
	./meta/tools/hemtt/hemtt.exe publish
}
else
{
	hemtt publish
}

if($LASTEXITCODE -eq 0)
{
	Write-Output "Publish successful"
	Pause-If-FromExplorer
	exit $LASTEXITCODE
}
else
{
	Write-Error "Publish failed, see HEMTT output for details"
	Pause-If-FromExplorer
	exit $LASTEXITCODE
}
