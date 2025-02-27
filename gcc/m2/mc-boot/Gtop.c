/* do not edit automatically generated by mc from top.  */
/* top.mod main top level program module for mc.

Copyright (C) 2015-2022 Free Software Foundation, Inc.
Contributed by Gaius Mulley <gaius@glam.ac.uk>.

This file is part of GNU Modula-2.

GNU Modula-2 is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GNU Modula-2 is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU Modula-2; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

#include "config.h"
#include "system.h"
#   if !defined (PROC_D)
#      define PROC_D
       typedef void (*PROC_t) (void);
       typedef struct { PROC_t proc; } PROC;
#   endif

#   include "GmcOptions.h"
#   include "GmcComp.h"
#   include "GM2RTS.h"
#   include "GmcStream.h"
#   include "Glibc.h"


/*
   wrapRemoveFiles - call removeFiles and return 0.
*/

static int wrapRemoveFiles (void);

/*
   init - translate the source file after handling all the
          program arguments.
*/

static void init (void);

/*
   wrapRemoveFiles - call removeFiles and return 0.
*/

static int wrapRemoveFiles (void);

/*
   init - translate the source file after handling all the
          program arguments.
*/

static void init (void);


/*
   wrapRemoveFiles - call removeFiles and return 0.
*/

static int wrapRemoveFiles (void)
{
  mcStream_removeFiles ();
  return 0;
  /* static analysis guarentees a RETURN statement will be used before here.  */
  __builtin_unreachable ();
}


/*
   init - translate the source file after handling all the
          program arguments.
*/

static void init (void)
{
  if ((libc_atexit ((libc_exitP_C) wrapRemoveFiles)) != 0)
    {
      libc_perror ((const char *) "atexit failed", 13);
    }
  M2RTS_ExitOnHalt (1);
  mcComp_compile (mcOptions_handleOptions ());
}

extern "C" void _M2_top_init (__attribute__((unused)) int argc,__attribute__((unused)) char *argv[],__attribute__((unused)) char *envp[])
{
  init ();
}

extern "C" void _M2_top_finish (__attribute__((unused)) int argc,__attribute__((unused)) char *argv[],__attribute__((unused)) char *envp[])
{
}
