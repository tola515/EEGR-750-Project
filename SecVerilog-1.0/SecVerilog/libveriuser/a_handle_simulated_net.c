/*
 * Copyright (c) 2003 Stephen Williams (steve@picturel.com)
 *
 *    This source code is free software; you can redistribute it
 *    and/or modify it in source code form under the terms of the GNU
 *    General Public License as published by the Free Software
 *    Foundation; either version 2 of the License, or (at your option)
 *    any later version.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with this program; if not, write to the Free Software
 *    Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA
 */
#ifdef HAVE_CVS_IDENT
#ident "$Id: a_handle_simulated_net.c,v 1.1 2003/10/10 02:57:46 steve Exp $"
#endif

# include  <assert.h>
# include  <ctype.h>
# include  <acc_user.h>
# include  <vpi_user.h>
# include  "priv.h"

handle acc_handle_simulated_net(handle obj)
{
      if (pli_trace) {
	    fprintf(pli_trace, "acc_handle_simulated_set: returns argument\n");
	    fflush(pli_trace);
      }

      return obj;
}


/*
 * $Log: a_handle_simulated_net.c,v $
 * Revision 1.1  2003/10/10 02:57:46  steve
 *  Some PLI1 stubs.
 *
 */

