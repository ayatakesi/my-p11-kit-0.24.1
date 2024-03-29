/* Manually adapted for Android.

Copyright (C) 2023 Free Software Foundation, Inc.

These modifications are part of GNU Emacs.

GNU Emacs is free software: you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the
Free Software Foundation, either version 3 of the License, or (at your
option) any later version.

GNU Emacs is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU Emacs.  If not, see <https://www.gnu.org/licenses/>. */

/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
#undef AC_APPLE_UNIVERSAL_BUILD

/* Define to 1 if translation of program messages to the user's native
   language is requested. */
#undef ENABLE_NLS

/* File extension for executables */
#undef EXEEXT

/* Define to 1 if you have the `asprintf' function. */
#undef HAVE_ASPRINTF

/* Define to 1 if you have the `basename' function. */
#undef HAVE_BASENAME

/* Define to 1 if you have the Mac OS X function CFLocaleCopyCurrent in the
   CoreFoundation framework. */
#undef HAVE_CFLOCALECOPYCURRENT

/* Define to 1 if you have the Mac OS X function
   CFLocaleCopyPreferredLanguages in the CoreFoundation framework. */
#undef HAVE_CFLOCALECOPYPREFERREDLANGUAGES

/* Define to 1 if you have the Mac OS X function CFPreferencesCopyAppValue in
   the CoreFoundation framework. */
#undef HAVE_CFPREFERENCESCOPYAPPVALUE

/* Define if the GNU dcgettext() function is already present or preinstalled.
   */
#undef HAVE_DCGETTEXT

/* Define to 1 if you have the declaration of `asprintf', and to 0 if you
   don't. */
#undef HAVE_DECL_ASPRINTF

/* Define to 1 if you have the declaration of `program_invocation_short_name',
   and to 0 if you don't. */
#undef HAVE_DECL_PROGRAM_INVOCATION_SHORT_NAME

/* Define to 1 if you have the declaration of `reallocarray', and to 0 if you
   don't. */
#undef HAVE_DECL_REALLOCARRAY

/* Define to 1 if you have the declaration of `vasprintf', and to 0 if you
   don't. */
#undef HAVE_DECL_VASPRINTF

/* Define to 1 if you have the declaration of `__progname', and to 0 if you
   don't. */
#undef HAVE_DECL___PROGNAME

/* Define to 1 if you have the <dlfcn.h> header file. */
#undef HAVE_DLFCN_H

/* Define to 1 if you have the `fdwalk' function. */
#undef HAVE_FDWALK

/* Define to 1 if you have the `getauxval' function. */
#define HAVE_GETAUXVAL 1

/* Define to 1 if you have the `getexecname' function. */
#undef HAVE_GETEXECNAME

/* Define to 1 if you have the `getpeereid' function. */
#undef HAVE_GETPEEREID

/* Define to 1 if you have the `getpeerucred' function. */
#undef HAVE_GETPEERUCRED

/* Define to 1 if you have the `getprogname' function. */
#undef HAVE_GETPROGNAME

/* Define to 1 if you have the `getresuid' function. */
#undef HAVE_GETRESUID

/* Define if the GNU gettext() function is already present or preinstalled. */
#undef HAVE_GETTEXT

/* Whether gmtime_r() is available */
#define HAVE_GMTIME_R 1

/* Define if you have the iconv() function and it works. */
#undef HAVE_ICONV

/* Define to 1 if you have the <inttypes.h> header file. */
#undef HAVE_INTTYPES_H

/* Define to 1 if you have the `issetugid' function. */
#undef HAVE_ISSETUGID

/* Define to 1 if you have the `intl' library (-lintl). */
#undef HAVE_LIBINTL

/* Define to 1 if you have the `pthread' library (-lpthread). */
#define HAVE_LIBPTHREAD 1

/* Define to 1 if you have the <locale.h> header file. */
#undef HAVE_LOCALE_H

/* Define to 1 if the system has the type `locale_t'. */
#undef HAVE_LOCALE_T

/* Define to 1 if you have the `memdup' function. */
#undef HAVE_MEMDUP

/* Define to 1 if you have the <memory.h> header file. */
#undef HAVE_MEMORY_H

/* Define to 1 if you have the `mkdtemp' function. */
#undef HAVE_MKDTEMP

/* Define to 1 if you have the `mkstemp' function. */
#undef HAVE_MKSTEMP

/* Define to 1 if you have the `newlocale' function. */
#undef HAVE_NEWLOCALE

/* Whether program_invocation_short_name available */
#undef HAVE_PROGRAM_INVOCATION_SHORT_NAME

/* Define to 1 if you have the `reallocarray' function. */
#undef HAVE_REALLOCARRAY

/* Define to 1 if you have the `secure_getenv' function. */
#undef HAVE_SECURE_GETENV

/* Define to 1 if you have the `setenv' function. */
#define HAVE_SETENV 1

/* Define to 1 if the system has the type `sighandler_t'. */
#undef HAVE_SIGHANDLER_T

/* Define to 1 if the system has the type `sig_t'. */
#undef HAVE_SIG_T

/* Define to 1 if stdbool.h conforms to C99. */
#define HAVE_STDBOOL_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strerror_l' function. */
#undef HAVE_STRERROR_L

/* Define to 1 if you have the `strerror_r' function. */
#define HAVE_STRERROR_R 1

/* Define to 1 if you have the <strings.h> header file. */
#undef HAVE_STRINGS_H

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strndup' function. */
#undef HAVE_STRNDUP

/* Define to 1 if you have the `strnstr' function. */
#undef HAVE_STRNSTR

/* Define to 1 if `d_type' is a member of `struct dirent'. */
#define HAVE_STRUCT_DIRENT_D_TYPE 1

/* Define to 1 if you have the <sys/resource.h> header file. */
#undef HAVE_SYS_RESOURCE_H

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/un.h> header file. */
#undef HAVE_SYS_UN_H

/* Define to 1 if you have the <ucred.h> header file. */
#undef HAVE_UCRED_H

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `vasprintf' function. */
#undef HAVE_VASPRINTF

/* Define to 1 if you have the `vsnprintf' function. */
#undef HAVE_VSNPRINTF

/* Whether vsock support available */
#undef HAVE_VSOCK

/* Define to 1 if the system has the type `_Bool'. */
#undef HAVE__BOOL

/* Whether __libc_enable_secure available */
#undef HAVE___LIBC_ENABLE_SECURE

/* Whether __progname available */
#undef HAVE___PROGNAME

/* Define to 1 if the system has the type `__sighandler_t'. */
#undef HAVE___SIGHANDLER_T

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#undef LT_OBJDIR

/* Disable glib assertions */
#undef NDEBUG

/* Building for unix */
#define OS_UNIX

/* Building for win32 */
#undef OS_WIN32

/* Maximum RPC protocol version we support */
#define P11_RPC_PROTOCOL_VERSION_MAXIMUM 0

/* Minimum RPC protocol version we support */
#define P11_RPC_PROTOCOL_VERSION_MINIMUM 0

/* the compiler keyword to define thread-local storage */
#define P11_TLS_KEYWORD

/* the number of closures */
#define P11_VIRTUAL_MAX_FIXED 50

/* Name of package */
#define PACKAGE "p11-kit (for Emacs)"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "bug-gnu-emacs@gnu.org"

/* Major version of package */
#define PACKAGE_MAJOR 0

/* Minor version of package */
#define PACKAGE_MINOR 24

/* Teeny version of package.  */
#define PACKAGE_TEENY 1

/* Define to the full name of this package. */
#define PACKAGE_NAME "p11-kit (for Emacs)"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "p11-kit (for Emacs) 0.24.1"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "p11-kit-0.24.1-emacs"

/* Define to the home page for this package. */
#define PACKAGE_URL "https://gnu.org/software/emacs"

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.24.1"

/* File extension for shared libraries */
#define SHLEXT ".so"

/* The size of `unsigned long', as computed by sizeof. */
/* #undef SIZEOF_UNSIGNED_LONG ** DEFINED BY Android.mk ** */

/* Define to 1 if you have the ANSI C header files. */
#undef STDC_HEADERS

/* The trust module input paths */
#define TRUST_PATHS ""

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# undef _ALL_SOURCE
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# undef _GNU_SOURCE
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# undef _POSIX_PTHREAD_SEMANTICS
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# undef _TANDEM_SOURCE
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# undef __EXTENSIONS__
#endif


/* Version number of package */
#undef VERSION

/* Build with libtasn1 and certificate support */
#define WITH_ASN1

/* Print debug output */
#undef WITH_DEBUG

/* Use libffi for building closures */
#undef WITH_FFI

/* Use freebl for hash implementation */
#undef WITH_FREEBL

/* More strict checks */
#undef WITH_STRICT

/* Build with systemd socket activation */
#undef WITH_SYSTEMD

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
#  undef WORDS_BIGENDIAN
# endif
#endif

/* In debug mode */
#undef _DEBUG

/* Define to 1 if on MINIX. */
#undef _MINIX

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
#define _POSIX_1_SOURCE

/* Define to 1 if you need to in order for `stat' and other things to work. */
#define _POSIX_SOURCE

/* Replace getauxval with a version which works.  */
#if __ANDROID_API__ < 18
#define getauxval(type) (0ul)
#endif
