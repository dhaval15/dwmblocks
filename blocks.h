//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		                /*Update Interval*/	/*Update Signal*/

	{"", 		"dwm_brightness",			0,			7},
                             
	{"", 		"dwm_volume",				0,			6},
                             
	{"", 		"dwm_wifi",			        4,			5},
                             
	{"", 		"dwm_memory",				2,			4},
                             
	{"", 		"dwm_battery",				5,			3},
                             
	{"", 		"dwm_time",				60,			2},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
