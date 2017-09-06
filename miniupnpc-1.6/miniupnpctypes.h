/* $Id: miniupnpctypes.h,v 1.1.1.1 2011/10/12 01:12:48 ysnas Exp $ */
/* Miniupnp project : http://miniupnp.free.fr/ or http://miniupnp.tuxfamily.org
 * Author : Thomas Bernard
 * Copyright (c) 2011 Thomas Bernard
 * This software is subject to the conditions detailed in the
 * LICENCE file provided within this distribution */
#ifndef __MINIUPNPCTYPES_H__
#define __MINIUPNPCTYPES_H__

#if (defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901L)
#define UNSIGNED_INTEGER unsigned long long
#define STRTOUI	strtoull
#else
#define UNSIGNED_INTEGER unsigned int
#define STRTOUI	strtoul
#endif

#endif

