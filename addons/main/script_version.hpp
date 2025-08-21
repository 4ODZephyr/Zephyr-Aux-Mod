//Update to match changelog version on release
#define MAJOR 1
#define MINOR 0
#define PATCH 0
#define BUILD 0

#define VERSION     MAJOR.MINOR
#define VERSION_STR MAJOR.MINOR.PATCH.BUILD
#define VERSION_AR  MAJOR,MINOR,PATCH,BUILD

#define QUOTE(var1) #var1

#define VERSION_CONFIG version = VERSION; versionStr = QUOTE(VERSION_STR); versionAr[] = {VERSION_AR}
