#ifndef FLTYPES_H
#define FLTYPES_H

	/* FlyteStrom Standard Type Definitions */
	//typedef bit				Bit;			/* 1 bit : 0 or 1 */
	typedef char			Char;			/* 8 bit charachter: -127 to +127 */
	typedef unsigned char	Flag;			/* 8 bit - SET or CLEAR: 0 to 1U */
	typedef unsigned char	UnsignedChar;	/* 8 bit : 0 to 255U */
	typedef signed char		SignedChar;		/* 8 bit : -127 to +127 */
	typedef unsigned int	UnsignedInt;	/* 16 bit : 0 to 65535U */
	typedef signed int		SignedInt;		/* 16 bit : -32768 to +32767 */
	typedef unsigned long	UnsignedLong;	/* 32 bit : 0 to 4294967295UL */
	typedef long			SignedLong;		/* 32 bit : -2147483648 to +2147483647 */
	typedef float			Float;			/* 32 bit : +/- 1,176E-38  to +/- 3,402E+38 */
	typedef double			Double;			/* 64 bit : +/- 2,225E-308 to +/- 1,797E+308 */

	#define	SET				1U
	#define CLEAR			0U

///	#define ON				1U
//	#define OFF				0U

	#define LOGIC_HIGH		1U
	#define LOGIC_LOW		0U

	#define NOT_LOGIC_HIGH	0U
	#define NOT_LOGIC_LOW	1U

	#define SUCCESSFUL		1U
	#define FAILED			0U
	#define ERROR_ERROR		2U

	#define REQUIRED		1U
	#define NOT_REQUIRED	0U

	#define AVAILABLE		1U
	#define UNAVAILABLE		0U

	#define LOW_PRIORITY	0U
	#define HIGH_PRIORITY	1U

	#ifndef NULL
		#define NULL			(0)
	#endif

#endif

#ifndef LITERAL_DEF

	#define LITERAL_DEF
	#define TRUE	1U
	#define FALSE	0U

#endif


/****************************************************
*
* Global Variable Naming Notation. Pre - Description.
*		(like Hungarian notation)
*
*****************************************************
*
* b	= bit.
* flag = Flag.
*
* sc	= SignedChar.
* csc	= constant SignedChar.
* st	= string or array of Char.
* cst	= constant string.
*
* uc	= UnsignedChar.
* cuc	= const UnsignedChar.
* ucar	= UnsignedChar array.
* cucar = const UnsignedChar array.
*
* si	= SignedInt.
* csi	= const SignedInt.
* siar	= SignedInt array.
* csiar	= const SignedInt array.
*
* ui	= UnsignedInt.
* cui	= const UnsignedInt.
* uiar	= UnsignedInt array.
* cuiar	= const UnsignedInt array.
*
* sl	= SignedLong.
* csl	= const SignedLong.
* slar	= SignedLong array.
* cslar	= const SignedLong array.
*
* ul	= UnsignedLong.
* cul	= const UnsignedLong.
* ular	= UnsignedLong array.
* cular	= const UnsignedLong array.
*
* f		= Float.
* cf	= const Float.
* far	= Float array.
* cfar	= const Float array.
*
* d		= Double.
* cd	= const Double.
* dar	= Double array.
* cdar	= const Double array.
*
* enum	= Enumeration.
*
*****************************************************/


/* Tasking Compiler Specifics */
/*------------------------------------------------------------------------**
** _bit				1 bit	0 or 1                                        **
** _sfrbit			1 bit	0 or 1                                        **
** _esfrbit			1 bit	0 or 1                                        **
** signed char		1	-128 to +127                                      **
** unsigned char	1	0 to 255U                                         **
** _sfr				2	0 to 65535U                                       **
** _esfr			2	0 to 65535U                                       **
** signed short		2	-32768 to +32767                                  **
** unsigned short	2	0 to 65535U                                       **
** _bitword			2	0 to 65535U                                       **
** signed int		2	-32768 to +32767                                  **
** unsigned int		2	0 to 65535U                                       **
** signed long		4	-2147483648 to +2147483647                        **
** unsigned long	4	0 to 4294967295UL                                 **
** float			4	+/- 1,176E-38  to +/- 3,402E+38                   **
** double			8	+/- 2,225E-308 to +/- 1,797E+308                  **
** long double		8	+/- 2,225E-308 to +/- 1,797E+308                  **
** _near pointer 	2	16 bits (64K) when using -Mt/-Ms                  **
** 14 bits (16K) when using -Mm/-Ml                                       **
** (default data group)                                                   **
** _far pointer		4	14 bits (16K) in any page (16M)                   **
** _huge pointer	4	24 bits (16M)                                     **
** _shuge pointer	4	24 bits (16M), but arithmetic is done 16-bit wide **
**                                                                        **
**                                                                        **
** Copyright © 1998 TASKING, Inc.                                         **
**                                                                        **
**------------------------------------------------------------------------*/
