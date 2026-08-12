#ifndef ZEPHYR_CORE_DEFINE_H
#define ZEPHYR_CORE_DEFINE_H

////// BOOLS //////
#define TRUE 1
#define FALSE 0

////// SCOPE //////
#define PRIVATE 0
#define PROTECTED 1
#define PUBLIC 2

////// SIDE //////
// TODO: decide if keep these names from the wiki or use BLUFOR OPPFOR GREENFOR
//#define NO_SIDE -1
//#define EAST 0 // (Russian)
//#define WEST 1 // (NATO)
//#define RESISTANCE 2 // Guerilla
//#define CIVILIAN 3
//#define NEUTRAL 4
//#define ENEMY 5
//#define FRIENDLY 6
//#define LOGIC 7

////// UTITILTY //////
#define QUOTE(var1) #var1

////// VERSIONING //////
#include "script_version.hpp"

#define VERSION     MAJOR.MINOR
#define VERSION_STR MAJOR.MINOR.PATCH
#define VERSION_AR  MAJOR,MINOR,PATCH

#define VERSION_CONFIG version = VERSION; versionStr = QUOTE(VERSION_STR); versionAr[] = {VERSION_AR}

#endif
