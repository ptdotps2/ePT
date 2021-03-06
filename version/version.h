#define STR_HELPER(x) #x
#define STR(x) STR_HELPER(x)

#define PROJECT_NAME "EvilRick"
#define PROJECT_SITE ""
#define PROJECT_COPYRIGHT "Copyright 2021-2021, ePT Developers"
#define APP_VER_MAJOR 
#define APP_VER_MINOR 
#define APP_VER_REV   
#define APP_VER_BUILD 
#define BUILD_COMMIT_ID ""
/* #undef BUILD_REMARK */
#define PROJECT_VERSION STR(APP_VER_MAJOR) "." STR(APP_VER_MINOR) "." STR(APP_VER_REV)
#define PROJECT_VERSION_BUILD_NO STR(APP_VER_BUILD)

#ifdef BUILD_REMARK
#define PROJECT_VERSION_LONG PROJECT_VERSION "." PROJECT_VERSION_BUILD_NO "-" BUILD_COMMIT_ID "-" BUILD_REMARK
#else
#define PROJECT_VERSION_LONG PROJECT_VERSION "." PROJECT_VERSION_BUILD_NO "-" BUILD_COMMIT_ID
#endif

#define PROJECT_DESCRIPTION PROJECT_NAME " v. " PROJECT_VERSION_LONG
