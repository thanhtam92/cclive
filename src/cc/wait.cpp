/* cclive
 * Copyright (C) 2010-2013  Toni Gundogdu <legatvs@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <ccinternal>

#include <iostream>

#ifdef HAVE_UNISTD_H
#include <unistd.h>
#endif

#ifdef _WIN32
#include <windows.h>
#define sleep(n) Sleep(n*1000)
#endif

#include <ccquvi>
#include <ccutil>
#include <cclog>

namespace cc
{

void wait(const int retry_wait)
{
  for (int i=1; i<=retry_wait; ++i)
    {
      if (i % 5 == 0)
        cc::log << i;
      else
        cc::log << ".";

      cc::log << std::flush;
      sleep(1);
    }
  cc::log << std::endl;
}

} // namespace cc

// vim: set ts=2 sw=2 tw=72 expandtab:
