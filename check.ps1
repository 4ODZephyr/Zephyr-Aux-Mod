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

if(Test-Path "./meta/tools/hemtt/hemtt.exe")
{
	./meta/tools/hemtt/hemtt.exe check
}
else
{
	hemtt check
}

if($LASTEXITCODE -eq 0)
{
	Write-Output "Check passed"
	Pause-If-FromExplorer
	exit $LASTEXITCODE
}
else
{
	Write-Error "Check failed, see HEMTT output for details"
	Pause-If-FromExplorer
	exit $LASTEXITCODE
}
