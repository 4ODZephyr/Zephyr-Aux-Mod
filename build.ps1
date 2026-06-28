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

& "$PSScriptRoot/check.ps1"
if ($LASTEXITCODE -ne 0) {
	Write-Error "Checks failed, aborting build."
	Pause-If-FromExplorer
	exit $LASTEXITCODE
}

if(Test-Path "./meta/tools/hemtt/hemtt.exe")
{
	./meta/tools/hemtt/hemtt.exe build
}
else
{
	hemtt build
}

if($LASTEXITCODE -eq 0)
{
	Write-Output "Build successful"
	Pause-If-FromExplorer
	exit $LASTEXITCODE
}
else
{
	Write-Error "Build failed, see HEMTT output for details"
	Pause-If-FromExplorer
	exit $LASTEXITCODE
}
