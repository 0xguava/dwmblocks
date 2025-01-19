//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"| ", "nettraf", 1, 0 },
	{"", "mem",	10,		0},
	{"", "bgtns", 10, 10 },
	{"", "volume", 10, 10 },
	{"", "battery", 10, 0 },
	{"", "clock",					5,		0},
	{"", "tup", 60, 0 },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
