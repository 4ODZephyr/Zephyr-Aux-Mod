param (
	[switch]$SkipPause = $false
)

& "$PSScriptRoot/build.ps1" -SkipPause $true
if ($LASTEXITCODE -ne 0) {
	Write-Error "Build failed, aborting test."
	if(-not $SkipPause)
	{
		Pause
	}
	exit $LASTEXITCODE
}

if(Test-Path "./meta/tools/hemtt/hemtt.exe")
{
	./meta/tools/hemtt/hemtt.exe launch
}
else
{
	hemtt launch
}

if($LASTEXITCODE -eq 0)
{
	Write-Output "Build successful"
	if(-not $SkipPause)
	{
		Pause
	}
	exit $LASTEXITCODE
}
else
{
	Write-Error "Build failed, see HEMTT output for details"
	if(-not $SkipPause)
	{
		Pause
	}
	exit $LASTEXITCODE
}
