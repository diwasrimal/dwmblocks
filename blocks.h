/* 
 * Modify this file to change what commands output to your statusbar, and recompile using the make command.
*/

static const Block blocks[] = {

  /*Icon*/	/*Command*/		          /*Update Interval*/	  /*Update Signal*/
  {" ",     "todo-count",                 0,                       6     },
  {"",      "volume",                     0,                       5     },
  {"",      "battery",                    2,                       4     },
  {"",      "internet",                   5,                       3     },
  {"",      "clock-date",                 0,                       2     },
  {"",      "clock-time",                 20,                      1     },
};

// sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
