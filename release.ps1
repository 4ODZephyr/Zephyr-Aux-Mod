param (
   [switch]$SkipPause = $false
)

& "$PSScriptRoot/prepRelease.ps1" -SkipPause $true
if ($LASTEXITCODE -ne 0) {
	Write-Error "Release preperation failed, aborting release."
	if(-not $SkipPause)
	{
		Pause
	}
	exit $LASTEXITCODE
}
& "$PSScriptRoot/build.ps1" -SkipPause $true
if ($LASTEXITCODE -ne 0) {
	Write-Error "Build failed, aborting release."
	if(-not $SkipPause)
	{
		Pause
	}
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
	if(-not $SkipPause)
	{
		Pause
	}
	exit $LASTEXITCODE
}
else
{
	Write-Error "Failed to build release, see HEMTT output for details"
	if(-not $SkipPause)
	{
		Pause
	}
	exit $LASTEXITCODE
}
