#ifndef _fonts_h
#define _fonts_h

// Font selection descriptors - Add an entry for each new font and number sequentially
#define monospac821BT_64pt		0
#define liberationMono_48pt		1

#define FONT_START 0
#define FONT_END   1

struct FontDescriptor
{
	uint8_t	width;		// width in bits
	uint8_t	height; 	// char height in bits
	uint16_t offset;	// offset of char into char array
};

// Font references - add pair of references for each new font
extern const uint8_t monospac821BT_64ptBitmaps[];
extern const FontDescriptor monospac821BT_64ptDescriptors[];

extern const uint8_t liberationMono_48ptBitmaps[];
extern const FontDescriptor liberationMono_48ptDescriptors[];

#endif
