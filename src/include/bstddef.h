#pragma once

typedef unsigned char uint8_t;
typedef short int int16_t;
typedef unsigned short int uint16_t;
typedef unsigned int size_t;
typedef unsigned int uint32_t;
typedef unsigned long int uint64_t;

enum class Color
{
	Black = 0x0,
	Blue = 0x1,
	Green = 0x2,
	Cyan = 0x3,
	Red = 0x4,
	Magenta = 0x5,
	Brown = 0x6,
	LightGray = 0x7,
	DarkGray = 0x8,
	LightBlue = 0x9,
	LightGreen = 0xA,
	LightCyan = 0xB,
	LightRed = 0xC,
	Pink = 0xD,
	Yellow = 0xE,
	White = 0xF
};

// refs: https://wiki.osdev.org/PC_Screen_Font
#define PSF_FONT_MAGIC 0x864ab572
typedef struct
{
	uint32_t magic;			/* magic bytes to identify PSF */
	uint32_t version;		/* zero */
	uint32_t headersize;	/* offset of bitmaps in file, 32 */
	uint32_t flags;			/* 0 if there's no unicode table */
	uint32_t numglyph;		/* number of glyphs */
	uint32_t bytesperglyph; /* size of each glyph */
	uint32_t height;		/* height in pixels */
	uint32_t width;			/* width in pixels */
} PSF_font;

extern volatile uint8_t _binary_font_psf_start;
extern volatile uint8_t _binary_font_psf_end;
