#ifndef HANDLEASSEMBLER
#define HANDLEASSEMBLER

// returns 1 if the string is a valid double. If not, returns 0.
int valid_string_to_double(char *);

/*
 * strips the white space from beggining and end of string (for example turns "      hello    abcd  " into "hello    abcd").
 * result is stored in dest.
 * MAKE SURE DEST HAS ENOUGH SPACE TO STORE S!!!!!
*/
char* strip(char *, char *);

#endif // HANDLEASSMEBLER