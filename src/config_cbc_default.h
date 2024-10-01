
/***************************************************************************/
/*           HERE DEFINE THE PROJECT SPECIFIC PUBLIC MACROS                */
/*    These are only in effect in a setting that doesn't use configure     */
/***************************************************************************/

/* Version number of project */
<<<<<<< HEAD:Cbc/src/config_cbc_default.h
#define CBC_VERSION "2.9.7"
=======
#define CBC_VERSION "trunk"
>>>>>>> a5f753c8b5f736f3b84efee8bb82e7ca76f2f66f:src/config_cbc_default.h

/* Major Version number of project */
#define CBC_VERSION_MAJOR 9999

/* Minor Version number of project */
#define CBC_VERSION_MINOR 9999

/* Release Version number of project */
<<<<<<< HEAD:Cbc/src/config_cbc_default.h
#define CBC_VERSION_RELEASE 7
=======
#define CBC_VERSION_RELEASE 9999

#ifndef CBCLIB_EXPORT
#if defined(_WIN32) && defined(DLL_EXPORT)
#define CBCLIB_EXPORT __declspec(dllimport)
#else
#define CBCLIB_EXPORT
#endif
#endif

/* vi: softtabstop=2 shiftwidth=2 expandtab tabstop=2
*/
>>>>>>> a5f753c8b5f736f3b84efee8bb82e7ca76f2f66f:src/config_cbc_default.h
