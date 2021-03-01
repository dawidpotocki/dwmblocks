/* Modify this file to change what commands output to your statusbar, and
 * recompile using the make command. */
static const Block blocks[] = {
	/* icon    command              interval    update signal */
	{  "",     "bar-covid-19",      3600,       19 },
	{  "",     "bar-networking",    10,         0 },
	{  "",     "bar-audio",         2,          1 },
	{  "",     "bar-battery",       10,         0 },
	{  "",     "bar-time",          1,          0 },
};

/* Sets delimeter between status commands. NULL character ('\0') means no
 * delimeter. */
static char delim[] = " | ";
static unsigned int delimLen = 5;

/* vim: ft=c
 */
