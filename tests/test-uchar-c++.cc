/* Test of <uchar.h> substitute in C++ mode.
   Copyright (C) 2019-2020 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* Written by Bruno Haible <bruno@clisp.org>, 2019.  */

#define GNULIB_NAMESPACE gnulib
#include <config.h>

#include <uchar.h>

#include "signature.h"


#if GNULIB_TEST_BTOC32
SIGNATURE_CHECK (GNULIB_NAMESPACE::btoc32, wint_t, (int));
#endif

#if GNULIB_TEST_C32TOB
SIGNATURE_CHECK (GNULIB_NAMESPACE::c32tob, int, (wint_t));
#endif

#if GNULIB_TEST_MBRTOC32
SIGNATURE_CHECK (GNULIB_NAMESPACE::mbrtoc32, size_t,
                 (char32_t *, const char *, size_t, mbstate_t *));
#endif

#if GNULIB_TEST_MBSNRTOC32S
SIGNATURE_CHECK (GNULIB_NAMESPACE::mbsnrtoc32s, size_t,
                 (char32_t *, const char **, size_t, size_t, mbstate_t *));

#endif

#if GNULIB_TEST_MBSRTOC32S
SIGNATURE_CHECK (GNULIB_NAMESPACE::mbsrtoc32s, size_t,
                 (char32_t *, const char **, size_t, mbstate_t *));
#endif

#if GNULIB_TEST_MBSTOC32S
SIGNATURE_CHECK (GNULIB_NAMESPACE::mbstoc32s, size_t,
                 (char32_t *, const char *, size_t));
#endif


int
main ()
{
}