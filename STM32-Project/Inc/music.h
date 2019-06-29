#ifndef MUSIC_H
#define MUSIC_H

#include "melody.h"

typedef struct{
	char*	song_name;
	const u8*		song_melody;
} song_menu;

extern const u8 little_star[];
extern const u8 song_of_joy[];
extern const u8 doll_dance_with_bear[];
extern const u8 happy_birthday[];
extern const u8 two_tigers[];

void music_pause(void);
void music_play(void);
void music_performance(void);
void music_next(void);
void music_last(void);

#endif
