/*	SCCS Id: @(#)thoughtglyph.h	3.4	1997/05/01	*/
/* Copyright (c) Izchak Miller, 1989.				  */
/* NetHack may be freely redistributed.  See license for details. */

#ifndef THOUGHTGLYPH_H
#define THOUGHTGLYPH_H

struct thoughtglyph {
	int otyp;
	int mtyp;
	long int thought;
	int insight_level;
	int sanity_level;
	const char * activate_msg;
};

/* thoughts */
#define	ANTI_CLOCKWISE_METAMORPHOSIS	0x0000000000000001L
#define	CLOCKWISE_METAMORPHOSIS			0x0000000000000002L
#define	ARCANE_BULWARK					0x0000000000000004L
#define	DISSIPATING_BULWARK				0x0000000000000008L
#define	SMOLDERING_BULWARK				0x0000000000000010L
#define	FROSTED_BULWARK					0x0000000000000020L
#define	BLOOD_RAPTURE					0x0000000000000040L
#define	CLAWMARK						0x0000000000000080L
#define	CLEAR_DEEPS						0x0000000000000100L
#define	DEEP_SEA						0x0000000000000200L
#define	TRANSPARENT_SEA					0x0000000000000400L
#define	COMMUNION						0x0000000000000800L
#define	CORRUPTION						0x0000000000001000L
#define	EYE_THOUGHT						0x0000000000002000L
#define	FORMLESS_VOICE					0x0000000000004000L
#define	GUIDANCE						0x0000000000008000L
#define	IMPURITY						0x0000000000010000L
#define	MOON							0x0000000000020000L
#define	WRITHE							0x0000000000040000L
#define	RADIANCE						0x0000000000080000L
#define	BEASTS_EMBRACE					0x0000000000100000L

extern struct thoughtglyph thoughtglyphs[];
extern int numthoughtglyphs;

#endif /* THOUGHTGLYPH_H */
