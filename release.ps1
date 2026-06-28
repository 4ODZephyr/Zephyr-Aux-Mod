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

& "$PSScriptRoot/prepRelease.ps1"
if ($LASTEXITCODE -ne 0) {
	Write-Error "Release preperation failed, aborting release."
	Pause-If-FromExplorer
	exit $LASTEXITCODE
}
& "$PSScriptRoot/build.ps1"
if ($LASTEXITCODE -ne 0) {
	Write-Error "Build failed, aborting release."
	Pause-If-FromExplorer
	exit $LASTEXITCODE
}

if(Test-Path "./meta/tools/hemtt/hemtt.exe")
{
	./meta/tools/hemtt/hemtt.exe release
}
else
{
	hemtt release
}

if($LASTEXITCODE -eq 0)
{
	Write-Output "Release built"
	Pause-If-FromExplorer
	exit $LASTEXITCODE
}
else
{
	Write-Error "Failed to build release, see HEMTT output for details"
	Pause-If-FromExplorer
	exit $LASTEXITCODE
}
