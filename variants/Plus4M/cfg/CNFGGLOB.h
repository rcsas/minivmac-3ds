/*
	Configuration options used by both platform specific
	and platform independent code.

	This file is automatically generated by the build system,
	which tries to know what options are valid in what
	combinations. Avoid changing this file manually unless
	you know what you're doing.
*/

/* adapt to current compiler/host processor */

#define MayInline inline __attribute__((always_inline))
#define MayNotInline __attribute__((noinline))
#define BigEndianUnaligned 0
#define LittleEndianUnaligned 0
#define my_cond_rare(x) (__builtin_expect(x, 0))
#define Have_ASR 1
#define HaveGlbReg 1
#define my_align_8 __attribute__ ((aligned (8)))
#define SmallGlobals 0
#define cIncludeUnused 0
#define UnusedParam(p) (void) p

/* --- integer types ---- */

typedef unsigned char ui3b;
#define HaveRealui3b 1

typedef signed char si3b;
#define HaveRealsi3b 1

typedef unsigned short ui4b;
#define HaveRealui4b 1

typedef short si4b;
#define HaveRealsi4b 1

typedef unsigned long ui5b;
#define HaveRealui5b 1

typedef long si5b;
#define HaveRealsi5b 1

#define HaveRealui6b 0
#define HaveRealsi6b 0

/* --- integer representation types ---- */

typedef ui3b ui3r;
#define ui3beqr 1

typedef si3b si3r;
#define si3beqr 1

typedef ui4b ui4r;
#define ui4beqr 1

typedef si4b si4r;
#define si4beqr 1

typedef ui5b ui5r;
#define ui5beqr 1

typedef si5b si5r;
#define si5beqr 1

#define MySwapUi5r(x) ((ui5r)__builtin_bswap32(x))
#define HaveMySwapUi5r 1

/* capabilities provided by platform specific code */

#define MySoundEnabled 0

#define MySoundRecenterSilence 0
#define kLn2SoundSampSz 3

#define dbglog_HAVE 0

#define NumDrives 6
#define IncludeSonyRawMode 0
#define IncludeSonyGetName 0
#define IncludeSonyNew 0
#define IncludeSonyNameNew 0

#define vMacScreenHeight 342
#define vMacScreenWidth 512
#define vMacScreenDepth 0

#define kROM_Size 0x00020000

#define IncludePbufs 0
#define NumPbufs 4

#define EnableMouseMotion 1

#define IncludeHostTextClipExchange 0
#define EnableAutoSlow 0
#define EmLocalTalk 0
