#include "stdio.h"
#include "string.h"

/*
 * strips the white space from beggining and end of string (for example turns "      hello    abcd  " into "hello    abcd").
 * result is stored in dest.
 * 
 * MAKE SURE DEST HAS ENOUGH SPACE TO STORE S!!!!!
*/
char* strip(char* s, char *dest) {
	char *retval;
	char *p;
    if (s == NULL)
		return NULL;
    /* copying the string into dest as to not change s. This is because changing s messes up strtok() */
    strcpy(dest, s);
	
    /* init */
	p = dest;
	
    /* skip initial whitespace */
	while (*p && (*p == ' ' || *p == '\t'))
        p++;
    retval = p;
    
    /* find end of token by going back from end */
	/* reach the end */
	while (*p) p++;
	
    /* go back as long as you see white space */
    while (p > retval && (*p == ' ' || *p == '\t' || *p == '\n' || *p == '\0')) p--;
	
    *++p = '\0';
	
    return retval;
}

/*
 * returns 1 if the string is a valid double. If not, returns 0.
*/
int valid_string_to_double(char *s) {
    int itemsread;
    int charsread;
    double d;

    /* scanning the a double into d, the number of items read into itemsread and the number of chars read into charsread */
    itemsread = sscanf(s, "%lf %n", &d, &charsread);

    /* if we didn't read exactly one item 
     * OR if the number of chars we read isn't the number of chars in the string
     * (meaning: there are extra characters in the string, for example: "hi 3.2")
     */
    if (itemsread != 1 || s[charsread] != '\0') {
        // TODO: print error message!!!
        return 0;
    }
    return 1;
}