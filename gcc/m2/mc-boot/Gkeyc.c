/* do not edit automatically generated by mc from keyc.  */
/* keyc maintains the C name scope and avoids C/C++ name conflicts.
   Copyright (C) 2016-2022 Free Software Foundation, Inc.

This file is part of GNU Modula-2.

GNU Modula-2 is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GNU Modula-2 is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License along
with gm2; see the file COPYING.  If not, write to the Free Software
Foundation, 51 Franklin Street, Fifth Floor,
Boston, MA 02110-1301, USA.  */

#include "config.h"
#include "system.h"
#   if !defined (PROC_D)
#      define PROC_D
       typedef void (*PROC_t) (void);
       typedef struct { PROC_t proc; } PROC;
#   endif

#   if !defined (TRUE)
#      define TRUE (1==1)
#   endif

#   if !defined (FALSE)
#      define FALSE (1==0)
#   endif

#   include "GStorage.h"
#   include "Gmcrts.h"
#if defined(__cplusplus)
#   undef NULL
#   define NULL 0
#endif
#define _keyc_H
#define _keyc_C

#   include "GmcPretty.h"
#   include "GStorage.h"
#   include "GDynamicStrings.h"
#   include "GsymbolKey.h"
#   include "GnameKey.h"
#   include "GmcOptions.h"
#   include "GM2RTS.h"

#if !defined (decl_node_D)
#  define decl_node_D
   typedef void *decl_node;
#endif

typedef struct keyc__T1_r keyc__T1;

typedef keyc__T1 *keyc_scope;

struct keyc__T1_r {
                    decl_node scoped;
                    symbolKey_symbolTree symbols;
                    keyc_scope next;
                  };

static keyc_scope stack;
static keyc_scope freeList;
static symbolKey_symbolTree keywords;
static symbolKey_symbolTree macros;
static unsigned int initializedCP;
static unsigned int initializedGCC;
static unsigned int seenIntMin;
static unsigned int seenUIntMin;
static unsigned int seenLongMin;
static unsigned int seenULongMin;
static unsigned int seenCharMin;
static unsigned int seenUCharMin;
static unsigned int seenIntMax;
static unsigned int seenUIntMax;
static unsigned int seenLongMax;
static unsigned int seenULongMax;
static unsigned int seenCharMax;
static unsigned int seenUCharMax;
static unsigned int seenLabs;
static unsigned int seenAbs;
static unsigned int seenFabs;
static unsigned int seenFabsl;
static unsigned int seenSize_t;
static unsigned int seenSSize_t;
static unsigned int seenUnistd;
static unsigned int seenSysTypes;
static unsigned int seenThrow;
static unsigned int seenFree;
static unsigned int seenMalloc;
static unsigned int seenStorage;
static unsigned int seenProc;
static unsigned int seenTrue;
static unsigned int seenFalse;
static unsigned int seenNull;
static unsigned int seenMemcpy;
static unsigned int seenException;
static unsigned int seenComplex;
static unsigned int seenM2RTS;
static unsigned int seenStrlen;
static unsigned int seenCtype;

/*
   useUnistd - need to use unistd.h call using open/close/read/write require this header.
*/

extern "C" void keyc_useUnistd (void);

/*
   useThrow - use the throw function.
*/

extern "C" void keyc_useThrow (void);

/*
   useStorage - indicate we have used storage.
*/

extern "C" void keyc_useStorage (void);

/*
   useFree - indicate we have used free.
*/

extern "C" void keyc_useFree (void);

/*
   useMalloc - indicate we have used malloc.
*/

extern "C" void keyc_useMalloc (void);

/*
   useProc - indicate we have used proc.
*/

extern "C" void keyc_useProc (void);

/*
   useTrue - indicate we have used TRUE.
*/

extern "C" void keyc_useTrue (void);

/*
   useFalse - indicate we have used FALSE.
*/

extern "C" void keyc_useFalse (void);

/*
   useNull - indicate we have used NULL.
*/

extern "C" void keyc_useNull (void);

/*
   useMemcpy - indicate we have used memcpy.
*/

extern "C" void keyc_useMemcpy (void);

/*
   useIntMin - indicate we have used INT_MIN.
*/

extern "C" void keyc_useIntMin (void);

/*
   useUIntMin - indicate we have used UINT_MIN.
*/

extern "C" void keyc_useUIntMin (void);

/*
   useLongMin - indicate we have used LONG_MIN.
*/

extern "C" void keyc_useLongMin (void);

/*
   useULongMin - indicate we have used ULONG_MIN.
*/

extern "C" void keyc_useULongMin (void);

/*
   useCharMin - indicate we have used CHAR_MIN.
*/

extern "C" void keyc_useCharMin (void);

/*
   useUCharMin - indicate we have used UCHAR_MIN.
*/

extern "C" void keyc_useUCharMin (void);

/*
   useIntMax - indicate we have used INT_MAX.
*/

extern "C" void keyc_useIntMax (void);

/*
   useUIntMax - indicate we have used UINT_MAX.
*/

extern "C" void keyc_useUIntMax (void);

/*
   useLongMax - indicate we have used LONG_MAX.
*/

extern "C" void keyc_useLongMax (void);

/*
   useULongMax - indicate we have used ULONG_MAX.
*/

extern "C" void keyc_useULongMax (void);

/*
   useCharMax - indicate we have used CHAR_MAX.
*/

extern "C" void keyc_useCharMax (void);

/*
   useUCharMax - indicate we have used UChar_MAX.
*/

extern "C" void keyc_useUCharMax (void);

/*
   useSize_t - indicate we have used size_t.
*/

extern "C" void keyc_useSize_t (void);

/*
   useSSize_t - indicate we have used ssize_t.
*/

extern "C" void keyc_useSSize_t (void);

/*
   useLabs - indicate we have used labs.
*/

extern "C" void keyc_useLabs (void);

/*
   useAbs - indicate we have used abs.
*/

extern "C" void keyc_useAbs (void);

/*
   useFabs - indicate we have used fabs.
*/

extern "C" void keyc_useFabs (void);

/*
   useFabsl - indicate we have used fabsl.
*/

extern "C" void keyc_useFabsl (void);

/*
   useException - use the exceptions module, mcrts.
*/

extern "C" void keyc_useException (void);

/*
   useComplex - use the complex data type.
*/

extern "C" void keyc_useComplex (void);

/*
   useM2RTS - indicate we have used M2RTS in the converted code.
*/

extern "C" void keyc_useM2RTS (void);

/*
   useStrlen - indicate we have used strlen in the converted code.
*/

extern "C" void keyc_useStrlen (void);

/*
   useCtype - indicate we have used the toupper function.
*/

extern "C" void keyc_useCtype (void);

/*
   genDefs - generate definitions or includes for all
             macros and prototypes used.
*/

extern "C" void keyc_genDefs (mcPretty_pretty p);

/*
   genConfigSystem - generate include files for config.h and system.h
                     within the GCC framework.
*/

extern "C" void keyc_genConfigSystem (mcPretty_pretty p);

/*
   enterScope - enter a scope defined by, n.
*/

extern "C" void keyc_enterScope (decl_node n);

/*
   leaveScope - leave the scope defined by, n.
*/

extern "C" void keyc_leaveScope (decl_node n);

/*
   cname - attempts to declare a symbol with name, n, in the
           current scope.  If there is no conflict with the
           target language then NIL is returned, otherwise
           a mangled name is returned as a String.
           If scopes is FALSE then only the keywords and
           macros are detected for a clash (all scoping
           is ignored).
*/

extern "C" DynamicStrings_String keyc_cname (nameKey_Name n, unsigned int scopes);

/*
   cnamen - attempts to declare a symbol with name, n, in the
            current scope.  If there is no conflict with the
            target language then NIL is returned, otherwise
            a mangled name is returned as a Name
            If scopes is FALSE then only the keywords and
            macros are detected for a clash (all scoping
            is ignored).
*/

extern "C" nameKey_Name keyc_cnamen (nameKey_Name n, unsigned int scopes);

/*
   cp - include C++ keywords and standard declarations to avoid.
*/

extern "C" void keyc_cp (void);

/*
   checkGccConfigSystem - issues the GCC include config.h, include system.h
                          instead of the standard host include.
*/

static void checkGccConfigSystem (mcPretty_pretty p);

/*
   checkCtype -
*/

static void checkCtype (mcPretty_pretty p);

/*
   checkAbs - check to see if the abs family, size_t or ssize_t have been used.
*/

static void checkAbs (mcPretty_pretty p);

/*
   checkLimits -
*/

static void checkLimits (mcPretty_pretty p);

/*
   checkFreeMalloc -
*/

static void checkFreeMalloc (mcPretty_pretty p);

/*
   checkStorage -
*/

static void checkStorage (mcPretty_pretty p);

/*
   checkProc -
*/

static void checkProc (mcPretty_pretty p);

/*
   checkTrue -
*/

static void checkTrue (mcPretty_pretty p);

/*
   checkFalse -
*/

static void checkFalse (mcPretty_pretty p);

/*
   checkNull -
*/

static void checkNull (mcPretty_pretty p);

/*
   checkMemcpy -
*/

static void checkMemcpy (mcPretty_pretty p);

/*
   checkM2RTS -
*/

static void checkM2RTS (mcPretty_pretty p);

/*
   checkException - check to see if exceptions were used.
*/

static void checkException (mcPretty_pretty p);

/*
   checkThrow - check to see if the throw function is used.
*/

static void checkThrow (mcPretty_pretty p);

/*
   checkUnistd - check to see if the unistd.h header file is required.
*/

static void checkUnistd (mcPretty_pretty p);

/*
   checkComplex - check to see if the type complex was used.
*/

static void checkComplex (mcPretty_pretty p);

/*
   checkSysTypes - emit header for sys/types.h if necessary.
*/

static void checkSysTypes (mcPretty_pretty p);

/*
   fixNullPointerConst - fixup for NULL on some C++11 systems.
*/

static void fixNullPointerConst (mcPretty_pretty p);

/*
   new -
*/

static keyc_scope new_ (decl_node n);

/*
   mangle1 - returns TRUE if name is unique if we add _
             to its end.
*/

static unsigned int mangle1 (nameKey_Name n, DynamicStrings_String *m, unsigned int scopes);

/*
   mangle2 - returns TRUE if name is unique if we prepend _
             to, n.
*/

static unsigned int mangle2 (nameKey_Name n, DynamicStrings_String *m, unsigned int scopes);

/*
   mangleN - keep adding '_' to the end of n until it
             no longer clashes.
*/

static unsigned int mangleN (nameKey_Name n, DynamicStrings_String *m, unsigned int scopes);

/*
   clash - returns TRUE if there is a clash with name, n,
           in the current scope or C keywords or C macros.
*/

static unsigned int clash (nameKey_Name n, unsigned int scopes);

/*
   initCP - add the extra keywords and standard definitions used by C++.
*/

static void initCP (void);

/*
   add -
*/

static void add (symbolKey_symbolTree s, const char *a_, unsigned int _a_high);

/*
   initMacros - macros and library function names to avoid.
*/

static void initMacros (void);

/*
   initKeywords - keywords to avoid.
*/

static void initKeywords (void);

/*
   init -
*/

static void init (void);


/*
   checkGccConfigSystem - issues the GCC include config.h, include system.h
                          instead of the standard host include.
*/

static void checkGccConfigSystem (mcPretty_pretty p)
{
  if (mcOptions_getGccConfigSystem ())
    {
      if (! initializedGCC)
        {
          initializedGCC = TRUE;
          mcPretty_print (p, (const char *) "#include \"config.h\"\\n", 21);
          mcPretty_print (p, (const char *) "#include \"system.h\"\\n", 21);
        }
    }
}


/*
   checkCtype -
*/

static void checkCtype (mcPretty_pretty p)
{
  if (seenCtype)
    {
      checkGccConfigSystem (p);
      if (mcOptions_getGccConfigSystem ())
        {
          /* GCC header files use a safe variant.  */
          mcPretty_print (p, (const char *) "#include <safe-ctype.h>\\n", 25);
        }
      else
        {
          mcPretty_print (p, (const char *) "#include <ctype.h>\\n", 20);
        }
    }
}


/*
   checkAbs - check to see if the abs family, size_t or ssize_t have been used.
*/

static void checkAbs (mcPretty_pretty p)
{
  if (((((seenLabs || seenAbs) || seenFabs) || seenFabsl) || seenSize_t) || seenSSize_t)
    {
      checkGccConfigSystem (p);
      if (! (mcOptions_getGccConfigSystem ()))
        {
          mcPretty_print (p, (const char *) "#include <stdlib.h>\\n", 21);
        }
    }
}


/*
   checkLimits -
*/

static void checkLimits (mcPretty_pretty p)
{
  if ((((((((((((((seenMemcpy || seenIntMin) || seenUIntMin) || seenLongMin) || seenULongMin) || seenCharMin) || seenUCharMin) || seenUIntMin) || seenIntMax) || seenUIntMax) || seenLongMax) || seenULongMax) || seenCharMax) || seenUCharMax) || seenUIntMax)
    {
      checkGccConfigSystem (p);
      if (! (mcOptions_getGccConfigSystem ()))
        {
          mcPretty_print (p, (const char *) "#include <limits.h>\\n", 21);
        }
    }
}


/*
   checkFreeMalloc -
*/

static void checkFreeMalloc (mcPretty_pretty p)
{
  if (seenFree || seenMalloc)
    {
      checkGccConfigSystem (p);
      if (! (mcOptions_getGccConfigSystem ()))
        {
          mcPretty_print (p, (const char *) "#include <stdlib.h>\\n", 21);
        }
    }
}


/*
   checkStorage -
*/

static void checkStorage (mcPretty_pretty p)
{
  if (seenStorage)
    {
      mcPretty_print (p, (const char *) "#   include \"", 13);
      mcPretty_prints (p, mcOptions_getHPrefix ());
      mcPretty_print (p, (const char *) "Storage.h\"\\n", 12);
    }
}


/*
   checkProc -
*/

static void checkProc (mcPretty_pretty p)
{
  if (seenProc)
    {
      mcPretty_print (p, (const char *) "#   if !defined (PROC_D)\\n", 26);
      mcPretty_print (p, (const char *) "#      define PROC_D\\n", 22);
      mcPretty_print (p, (const char *) "       typedef void (*PROC_t) (void);\\n", 39);
      mcPretty_print (p, (const char *) "       typedef struct { PROC_t proc; } PROC;\\n", 46);
      mcPretty_print (p, (const char *) "#   endif\\n\\n", 13);
    }
}


/*
   checkTrue -
*/

static void checkTrue (mcPretty_pretty p)
{
  if (seenTrue)
    {
      mcPretty_print (p, (const char *) "#   if !defined (TRUE)\\n", 24);
      mcPretty_print (p, (const char *) "#      define TRUE (1==1)\\n", 27);
      mcPretty_print (p, (const char *) "#   endif\\n\\n", 13);
    }
}


/*
   checkFalse -
*/

static void checkFalse (mcPretty_pretty p)
{
  if (seenFalse)
    {
      mcPretty_print (p, (const char *) "#   if !defined (FALSE)\\n", 25);
      mcPretty_print (p, (const char *) "#      define FALSE (1==0)\\n", 28);
      mcPretty_print (p, (const char *) "#   endif\\n\\n", 13);
    }
}


/*
   checkNull -
*/

static void checkNull (mcPretty_pretty p)
{
  if (seenNull)
    {
      checkGccConfigSystem (p);
      if (! (mcOptions_getGccConfigSystem ()))
        {
          mcPretty_print (p, (const char *) "#include <stddef.h>\\n", 21);
        }
    }
}


/*
   checkMemcpy -
*/

static void checkMemcpy (mcPretty_pretty p)
{
  if (seenMemcpy || seenStrlen)
    {
      checkGccConfigSystem (p);
      if (! (mcOptions_getGccConfigSystem ()))
        {
          mcPretty_print (p, (const char *) "#include <string.h>\\n", 21);
        }
    }
}


/*
   checkM2RTS -
*/

static void checkM2RTS (mcPretty_pretty p)
{
  if (seenM2RTS)
    {
      mcPretty_print (p, (const char *) "#   include \"", 13);
      mcPretty_prints (p, mcOptions_getHPrefix ());
      mcPretty_print (p, (const char *) "M2RTS.h\"\\n", 10);
    }
}


/*
   checkException - check to see if exceptions were used.
*/

static void checkException (mcPretty_pretty p)
{
  if (seenException)
    {
      mcPretty_print (p, (const char *) "#   include \"Gmcrts.h\"\\n", 24);
    }
}


/*
   checkThrow - check to see if the throw function is used.
*/

static void checkThrow (mcPretty_pretty p)
{
  if (seenThrow)
    {
      /* print (p, '#   include "sys/cdefs.h"
      ') ;  */
      mcPretty_print (p, (const char *) "#ifndef __cplusplus\\n", 21);
      mcPretty_print (p, (const char *) "extern void throw (unsigned int);\\n", 35);
      mcPretty_print (p, (const char *) "#endif\\n", 8);
    }
}


/*
   checkUnistd - check to see if the unistd.h header file is required.
*/

static void checkUnistd (mcPretty_pretty p)
{
  if (seenUnistd)
    {
      checkGccConfigSystem (p);
      if (! (mcOptions_getGccConfigSystem ()))
        {
          mcPretty_print (p, (const char *) "#include <unistd.h>\\n", 21);
        }
    }
}


/*
   checkComplex - check to see if the type complex was used.
*/

static void checkComplex (mcPretty_pretty p)
{
  if (seenComplex)
    {
      checkGccConfigSystem (p);
      if (! (mcOptions_getGccConfigSystem ()))
        {
          mcPretty_print (p, (const char *) "#   include <complex.h>\\n", 25);
        }
    }
}


/*
   checkSysTypes - emit header for sys/types.h if necessary.
*/

static void checkSysTypes (mcPretty_pretty p)
{
  if (seenSysTypes)
    {
      checkGccConfigSystem (p);
      if (! (mcOptions_getGccConfigSystem ()))
        {
          mcPretty_print (p, (const char *) "#   include <sys/types.h>\\n", 27);
        }
    }
}


/*
   fixNullPointerConst - fixup for NULL on some C++11 systems.
*/

static void fixNullPointerConst (mcPretty_pretty p)
{
  if (seenNull)
    {
      mcPretty_print (p, (const char *) "#if defined(__cplusplus)\\n", 26);
      mcPretty_print (p, (const char *) "#   undef NULL\\n", 16);
      mcPretty_print (p, (const char *) "#   define NULL 0\\n", 19);
      mcPretty_print (p, (const char *) "#endif\\n", 8);
    }
}


/*
   new -
*/

static keyc_scope new_ (decl_node n)
{
  keyc_scope s;

  if (freeList == NULL)
    {
      Storage_ALLOCATE ((void **) &s, sizeof (keyc__T1));
    }
  else
    {
      s = freeList;
      freeList = freeList->next;
    }
  return s;
  /* static analysis guarentees a RETURN statement will be used before here.  */
  __builtin_unreachable ();
}


/*
   mangle1 - returns TRUE if name is unique if we add _
             to its end.
*/

static unsigned int mangle1 (nameKey_Name n, DynamicStrings_String *m, unsigned int scopes)
{
  (*m) = DynamicStrings_KillString ((*m));
  (*m) = DynamicStrings_InitStringCharStar (nameKey_keyToCharStar (n));
  (*m) = DynamicStrings_ConCatChar ((*m), '_');
  return ! (clash (nameKey_makekey (DynamicStrings_string ((*m))), scopes));
  /* static analysis guarentees a RETURN statement will be used before here.  */
  __builtin_unreachable ();
}


/*
   mangle2 - returns TRUE if name is unique if we prepend _
             to, n.
*/

static unsigned int mangle2 (nameKey_Name n, DynamicStrings_String *m, unsigned int scopes)
{
  (*m) = DynamicStrings_KillString ((*m));
  (*m) = DynamicStrings_InitStringCharStar (nameKey_keyToCharStar (n));
  (*m) = DynamicStrings_ConCat (DynamicStrings_InitString ((const char *) "_", 1), DynamicStrings_Mark ((*m)));
  return ! (clash (nameKey_makekey (DynamicStrings_string ((*m))), scopes));
  /* static analysis guarentees a RETURN statement will be used before here.  */
  __builtin_unreachable ();
}


/*
   mangleN - keep adding '_' to the end of n until it
             no longer clashes.
*/

static unsigned int mangleN (nameKey_Name n, DynamicStrings_String *m, unsigned int scopes)
{
  (*m) = DynamicStrings_KillString ((*m));
  (*m) = DynamicStrings_InitStringCharStar (nameKey_keyToCharStar (n));
  for (;;)
  {
    (*m) = DynamicStrings_ConCatChar ((*m), '_');
    if (! (clash (nameKey_makekey (DynamicStrings_string ((*m))), scopes)))
      {
        return TRUE;
      }
  }
  ReturnException ("../../gcc-git-devel-modula2/gcc/m2/mc/keyc.def", 20, 1);
  __builtin_unreachable ();
}


/*
   clash - returns TRUE if there is a clash with name, n,
           in the current scope or C keywords or C macros.
*/

static unsigned int clash (nameKey_Name n, unsigned int scopes)
{
  if (((symbolKey_getSymKey (macros, n)) != NULL) || ((symbolKey_getSymKey (keywords, n)) != NULL))
    {
      return TRUE;
    }
  return scopes && ((symbolKey_getSymKey (stack->symbols, n)) != NULL);
  /* static analysis guarentees a RETURN statement will be used before here.  */
  __builtin_unreachable ();
}


/*
   initCP - add the extra keywords and standard definitions used by C++.
*/

static void initCP (void)
{
  add (keywords, (const char *) "delete", 6);
  add (keywords, (const char *) "try", 3);
  add (keywords, (const char *) "catch", 5);
  add (keywords, (const char *) "operator", 8);
  add (keywords, (const char *) "complex", 7);
  add (keywords, (const char *) "export", 6);
  add (keywords, (const char *) "public", 6);
}


/*
   add -
*/

static void add (symbolKey_symbolTree s, const char *a_, unsigned int _a_high)
{
  char a[_a_high+1];

  /* make a local copy of each unbounded array.  */
  memcpy (a, a_, _a_high+1);

  symbolKey_putSymKey (s, nameKey_makeKey ((const char *) a, _a_high), reinterpret_cast<void *> (DynamicStrings_InitString ((const char *) a, _a_high)));
}


/*
   initMacros - macros and library function names to avoid.
*/

static void initMacros (void)
{
  macros = symbolKey_initTree ();
  add (macros, (const char *) "FILE", 4);
  add (macros, (const char *) "EOF", 3);
  add (macros, (const char *) "stdio", 5);
  add (macros, (const char *) "stdout", 6);
  add (macros, (const char *) "stderr", 6);
  add (macros, (const char *) "write", 5);
  add (macros, (const char *) "read", 4);
  add (macros, (const char *) "exit", 4);
  add (macros, (const char *) "abs", 3);
  add (macros, (const char *) "optarg", 6);
  add (macros, (const char *) "div", 3);
  add (macros, (const char *) "sin", 3);
  add (macros, (const char *) "cos", 3);
  add (macros, (const char *) "tan", 3);
  add (macros, (const char *) "log10", 5);
  add (macros, (const char *) "trunc", 5);
  add (macros, (const char *) "I", 1);
  add (macros, (const char *) "csqrt", 5);
  add (macros, (const char *) "strlen", 6);
  add (macros, (const char *) "strcpy", 6);
  add (macros, (const char *) "free", 4);
  add (macros, (const char *) "malloc", 6);
  add (macros, (const char *) "time", 4);
  add (macros, (const char *) "main", 4);
  add (macros, (const char *) "true", 4);
  add (macros, (const char *) "false", 5);
  add (macros, (const char *) "sigfpe", 6);
}


/*
   initKeywords - keywords to avoid.
*/

static void initKeywords (void)
{
  keywords = symbolKey_initTree ();
  add (keywords, (const char *) "auto", 4);
  add (keywords, (const char *) "break", 5);
  add (keywords, (const char *) "case", 4);
  add (keywords, (const char *) "char", 4);
  add (keywords, (const char *) "const", 5);
  add (keywords, (const char *) "continue", 8);
  add (keywords, (const char *) "default", 7);
  add (keywords, (const char *) "do", 2);
  add (keywords, (const char *) "double", 6);
  add (keywords, (const char *) "else", 4);
  add (keywords, (const char *) "enum", 4);
  add (keywords, (const char *) "extern", 6);
  add (keywords, (const char *) "float", 5);
  add (keywords, (const char *) "for", 3);
  add (keywords, (const char *) "goto", 4);
  add (keywords, (const char *) "if", 2);
  add (keywords, (const char *) "int", 3);
  add (keywords, (const char *) "long", 4);
  add (keywords, (const char *) "register", 8);
  add (keywords, (const char *) "return", 6);
  add (keywords, (const char *) "short", 5);
  add (keywords, (const char *) "signed", 6);
  add (keywords, (const char *) "sizeof", 6);
  add (keywords, (const char *) "static", 6);
  add (keywords, (const char *) "struct", 6);
  add (keywords, (const char *) "switch", 6);
  add (keywords, (const char *) "typedef", 7);
  add (keywords, (const char *) "union", 5);
  add (keywords, (const char *) "unsigned", 8);
  add (keywords, (const char *) "void", 4);
  add (keywords, (const char *) "volatile", 8);
  add (keywords, (const char *) "while", 5);
  add (keywords, (const char *) "and", 3);
  add (keywords, (const char *) "or", 2);
  add (keywords, (const char *) "not", 3);
  add (keywords, (const char *) "throw", 5);
  add (keywords, (const char *) "new", 3);
}


/*
   init -
*/

static void init (void)
{
  seenUnistd = FALSE;
  seenThrow = FALSE;
  seenFree = FALSE;
  seenMalloc = FALSE;
  seenStorage = FALSE;
  seenProc = FALSE;
  seenTrue = FALSE;
  seenFalse = FALSE;
  seenNull = FALSE;
  seenMemcpy = FALSE;
  seenIntMin = FALSE;
  seenUIntMin = FALSE;
  seenLongMin = FALSE;
  seenULongMin = FALSE;
  seenCharMin = FALSE;
  seenUCharMin = FALSE;
  seenUIntMin = FALSE;
  seenIntMax = FALSE;
  seenUIntMax = FALSE;
  seenLongMax = FALSE;
  seenULongMax = FALSE;
  seenCharMax = FALSE;
  seenUCharMax = FALSE;
  seenUIntMax = FALSE;
  seenLabs = FALSE;
  seenAbs = FALSE;
  seenFabs = FALSE;
  seenFabsl = FALSE;
  seenException = FALSE;
  seenComplex = FALSE;
  seenM2RTS = FALSE;
  seenStrlen = FALSE;
  seenCtype = FALSE;
  seenSize_t = FALSE;
  seenSSize_t = FALSE;
  seenSysTypes = FALSE;
  initializedCP = FALSE;
  initializedGCC = FALSE;
  stack = NULL;
  freeList = NULL;
  initKeywords ();
  initMacros ();
}


/*
   useUnistd - need to use unistd.h call using open/close/read/write require this header.
*/

extern "C" void keyc_useUnistd (void)
{
  seenUnistd = TRUE;
}


/*
   useThrow - use the throw function.
*/

extern "C" void keyc_useThrow (void)
{
  seenThrow = TRUE;
}


/*
   useStorage - indicate we have used storage.
*/

extern "C" void keyc_useStorage (void)
{
  seenStorage = TRUE;
}


/*
   useFree - indicate we have used free.
*/

extern "C" void keyc_useFree (void)
{
  seenFree = TRUE;
}


/*
   useMalloc - indicate we have used malloc.
*/

extern "C" void keyc_useMalloc (void)
{
  seenMalloc = TRUE;
}


/*
   useProc - indicate we have used proc.
*/

extern "C" void keyc_useProc (void)
{
  seenProc = TRUE;
}


/*
   useTrue - indicate we have used TRUE.
*/

extern "C" void keyc_useTrue (void)
{
  seenTrue = TRUE;
}


/*
   useFalse - indicate we have used FALSE.
*/

extern "C" void keyc_useFalse (void)
{
  seenFalse = TRUE;
}


/*
   useNull - indicate we have used NULL.
*/

extern "C" void keyc_useNull (void)
{
  seenNull = TRUE;
}


/*
   useMemcpy - indicate we have used memcpy.
*/

extern "C" void keyc_useMemcpy (void)
{
  seenMemcpy = TRUE;
}


/*
   useIntMin - indicate we have used INT_MIN.
*/

extern "C" void keyc_useIntMin (void)
{
  seenIntMin = TRUE;
}


/*
   useUIntMin - indicate we have used UINT_MIN.
*/

extern "C" void keyc_useUIntMin (void)
{
  seenUIntMin = TRUE;
}


/*
   useLongMin - indicate we have used LONG_MIN.
*/

extern "C" void keyc_useLongMin (void)
{
  seenLongMin = TRUE;
}


/*
   useULongMin - indicate we have used ULONG_MIN.
*/

extern "C" void keyc_useULongMin (void)
{
  seenULongMin = TRUE;
}


/*
   useCharMin - indicate we have used CHAR_MIN.
*/

extern "C" void keyc_useCharMin (void)
{
  seenCharMin = TRUE;
}


/*
   useUCharMin - indicate we have used UCHAR_MIN.
*/

extern "C" void keyc_useUCharMin (void)
{
  seenUCharMin = TRUE;
}


/*
   useIntMax - indicate we have used INT_MAX.
*/

extern "C" void keyc_useIntMax (void)
{
  seenIntMax = TRUE;
}


/*
   useUIntMax - indicate we have used UINT_MAX.
*/

extern "C" void keyc_useUIntMax (void)
{
  seenUIntMax = TRUE;
}


/*
   useLongMax - indicate we have used LONG_MAX.
*/

extern "C" void keyc_useLongMax (void)
{
  seenLongMax = TRUE;
}


/*
   useULongMax - indicate we have used ULONG_MAX.
*/

extern "C" void keyc_useULongMax (void)
{
  seenULongMax = TRUE;
}


/*
   useCharMax - indicate we have used CHAR_MAX.
*/

extern "C" void keyc_useCharMax (void)
{
  seenCharMax = TRUE;
}


/*
   useUCharMax - indicate we have used UChar_MAX.
*/

extern "C" void keyc_useUCharMax (void)
{
  seenUCharMax = TRUE;
}


/*
   useSize_t - indicate we have used size_t.
*/

extern "C" void keyc_useSize_t (void)
{
  seenSize_t = TRUE;
}


/*
   useSSize_t - indicate we have used ssize_t.
*/

extern "C" void keyc_useSSize_t (void)
{
  seenSSize_t = TRUE;
  seenSysTypes = TRUE;
}


/*
   useLabs - indicate we have used labs.
*/

extern "C" void keyc_useLabs (void)
{
  seenLabs = TRUE;
}


/*
   useAbs - indicate we have used abs.
*/

extern "C" void keyc_useAbs (void)
{
  seenAbs = TRUE;
}


/*
   useFabs - indicate we have used fabs.
*/

extern "C" void keyc_useFabs (void)
{
  seenFabs = TRUE;
}


/*
   useFabsl - indicate we have used fabsl.
*/

extern "C" void keyc_useFabsl (void)
{
  seenFabsl = TRUE;
}


/*
   useException - use the exceptions module, mcrts.
*/

extern "C" void keyc_useException (void)
{
  seenException = TRUE;
}


/*
   useComplex - use the complex data type.
*/

extern "C" void keyc_useComplex (void)
{
  seenComplex = TRUE;
}


/*
   useM2RTS - indicate we have used M2RTS in the converted code.
*/

extern "C" void keyc_useM2RTS (void)
{
  seenM2RTS = TRUE;
}


/*
   useStrlen - indicate we have used strlen in the converted code.
*/

extern "C" void keyc_useStrlen (void)
{
  seenStrlen = TRUE;
}


/*
   useCtype - indicate we have used the toupper function.
*/

extern "C" void keyc_useCtype (void)
{
  seenCtype = TRUE;
}


/*
   genDefs - generate definitions or includes for all
             macros and prototypes used.
*/

extern "C" void keyc_genDefs (mcPretty_pretty p)
{
  checkFreeMalloc (p);
  checkProc (p);
  checkTrue (p);
  checkFalse (p);
  checkNull (p);
  checkMemcpy (p);
  checkLimits (p);
  checkAbs (p);
  checkStorage (p);
  checkException (p);
  checkComplex (p);
  checkCtype (p);
  checkUnistd (p);
  checkSysTypes (p);
  checkM2RTS (p);
  checkThrow (p);
  fixNullPointerConst (p);
}


/*
   genConfigSystem - generate include files for config.h and system.h
                     within the GCC framework.
*/

extern "C" void keyc_genConfigSystem (mcPretty_pretty p)
{
  checkGccConfigSystem (p);
}


/*
   enterScope - enter a scope defined by, n.
*/

extern "C" void keyc_enterScope (decl_node n)
{
  keyc_scope s;

  s = new_ (n);
  s->scoped = n;
  s->symbols = symbolKey_initTree ();
  s->next = stack;
  stack = s;
}


/*
   leaveScope - leave the scope defined by, n.
*/

extern "C" void keyc_leaveScope (decl_node n)
{
  keyc_scope s;

  if (n == stack->scoped)
    {
      s = stack;
      stack = stack->next;
      s->scoped = static_cast<decl_node> (NULL);
      symbolKey_killTree (&s->symbols);
      s->next = NULL;
    }
  else
    {
      M2RTS_HALT (-1);
      __builtin_unreachable ();
    }
}


/*
   cname - attempts to declare a symbol with name, n, in the
           current scope.  If there is no conflict with the
           target language then NIL is returned, otherwise
           a mangled name is returned as a String.
           If scopes is FALSE then only the keywords and
           macros are detected for a clash (all scoping
           is ignored).
*/

extern "C" DynamicStrings_String keyc_cname (nameKey_Name n, unsigned int scopes)
{
  DynamicStrings_String m;

  m = static_cast<DynamicStrings_String> (NULL);
  if (clash (n, scopes))
    {
      if (((mangle1 (n, &m, scopes)) || (mangle2 (n, &m, scopes))) || (mangleN (n, &m, scopes)))
        {
          /* avoid dangling else.  */
          if (scopes)
            {
              /* no longer a clash with, m, so add it to the current scope.  */
              n = nameKey_makekey (DynamicStrings_string (m));
              symbolKey_putSymKey (stack->symbols, n, reinterpret_cast<void *> (m));
            }
        }
      else
        {
          /* mangleN must always succeed.  */
          M2RTS_HALT (-1);
          __builtin_unreachable ();
        }
    }
  else if (scopes)
    {
      /* avoid dangling else.  */
      /* no clash, add it to the current scope.  */
      symbolKey_putSymKey (stack->symbols, n, reinterpret_cast<void *> (DynamicStrings_InitStringCharStar (nameKey_keyToCharStar (n))));
    }
  return m;
  /* static analysis guarentees a RETURN statement will be used before here.  */
  __builtin_unreachable ();
}


/*
   cnamen - attempts to declare a symbol with name, n, in the
            current scope.  If there is no conflict with the
            target language then NIL is returned, otherwise
            a mangled name is returned as a Name
            If scopes is FALSE then only the keywords and
            macros are detected for a clash (all scoping
            is ignored).
*/

extern "C" nameKey_Name keyc_cnamen (nameKey_Name n, unsigned int scopes)
{
  DynamicStrings_String m;

  m = static_cast<DynamicStrings_String> (NULL);
  if (clash (n, scopes))
    {
      if (((mangle1 (n, &m, scopes)) || (mangle2 (n, &m, scopes))) || (mangleN (n, &m, scopes)))
        {
          /* avoid dangling else.  */
          n = nameKey_makekey (DynamicStrings_string (m));
          if (scopes)
            {
              /* no longer a clash with, m, so add it to the current scope.  */
              symbolKey_putSymKey (stack->symbols, n, reinterpret_cast<void *> (m));
            }
        }
      else
        {
          /* mangleN must always succeed.  */
          M2RTS_HALT (-1);
          __builtin_unreachable ();
        }
    }
  else if (scopes)
    {
      /* avoid dangling else.  */
      /* no clash, add it to the current scope.  */
      symbolKey_putSymKey (stack->symbols, n, reinterpret_cast<void *> (DynamicStrings_InitStringCharStar (nameKey_keyToCharStar (n))));
    }
  m = DynamicStrings_KillString (m);
  return n;
  /* static analysis guarentees a RETURN statement will be used before here.  */
  __builtin_unreachable ();
}


/*
   cp - include C++ keywords and standard declarations to avoid.
*/

extern "C" void keyc_cp (void)
{
  if (! initializedCP)
    {
      initializedCP = TRUE;
      initCP ();
    }
}

extern "C" void _M2_keyc_init (__attribute__((unused)) int argc,__attribute__((unused)) char *argv[],__attribute__((unused)) char *envp[])
{
  init ();
}

extern "C" void _M2_keyc_finish (__attribute__((unused)) int argc,__attribute__((unused)) char *argv[],__attribute__((unused)) char *envp[])
{
}
