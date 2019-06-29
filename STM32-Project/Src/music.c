#include "music.h"

u8 pause_symbol = 0;
u8 song_num = 0;

const song_menu song[]=
{
	{"little star",						little_star},
	{"song of joy", 					song_of_joy},
	{"doll dance with bear",	doll_dance_with_bear},
	{"happy birthday",				happy_birthday},
	{"two tigers",						two_tigers}
};

const u8 little_star[]=
{
		1,1,5,5,6,6,5,0,
		4,4,3,3,2,2,1,0,
		5,5,4,4,3,3,2,0,
		5,5,4,4,3,3,2,0,
		1,1,5,5,6,6,5,0,
		4,4,3,3,2,2,1
};

const u8 song_of_joy[] =	
	{
		3,3,4,5,
		5,4,3,2,
		1,1,2,3,
		3,2,2,0,
		3,3,4,5,
		5,4,3,2,
		1,1,2,3,
		2,1,1
	};
	
const u8 doll_dance_with_bear[] =	
	{
		1,2,3,4,5,5,5,4,3,4,4,4,3,2,1,3,5,0,
		1,2,3,4,5,5,5,4,3,4,4,4,3,2,1,3,1,0,
		6,6,6,5,4,5,5,5,4,3,4,4,4,3,2,1,3,5,0,
		6,6,6,5,4,5,5,5,4,3,4,4,4,3,2,1,3,1
	};
	
const u8 happy_birthday[] =
	{
		5,5,6,5,1,7,0,
		5,5,6,5,2,1,0,
		5,5,5,3,1,7,6,0,
		4,4,3,1,2,1
	};

const u8 two_tigers[] =	
	{
		1,2,3,1,0,
		1,2,3,1,0,
		3,4,5,0,
		3,4,5,0,
		5,6,5,4,5,4,0,
		5,6,5,4,5,4,0,
		5,6,5,4,5,4,0,
		7,6,7,0,
		7,6,7
	};

void music_stop()
{
	count = 0;
	pause_symbol = 1;
}

void music_pause()
{
	pause_symbol = 1;
}

void music_play()
{
	pause_symbol = 0;
}

void music_performance(void)
{
	if(!pause_symbol)		music_play_a_melody(song[song_num].song_melody);
}

void music_next(void)
{
	if(song_num == 4)
		song_num = 0;
	else
		song_num++;
	
	count = 0;
}

void music_last(void)
{
	if(song_num == 0)
		song_num = 4;
	else
		song_num--;
	
	count = 0;
}

