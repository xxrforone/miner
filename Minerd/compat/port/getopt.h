#ifndef GETOPT_H
#define GETOPT_H

#ifdef __cplusplus
extern "C" {
#endif

#include <Windows.h>

extern int optind;		/* index of first non-option in argv      */
extern int optopt;		/* single option character, as parsed     */
extern int opterr;		/* flag to enable built-in diagnostics... */
				/* (user may set to zero, to suppress)    */

extern char *optarg;		/* pointer to argument of current option  */

extern int getopt( int, char * const [], const char * );

#ifdef __cplusplus
}
#endif
#endif // GETOPT_H