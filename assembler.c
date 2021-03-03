#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "assembler.h"

int main(int argc, char *argv[])
{
    FILE* input;
    char name[NAME_MAX];
    while (argc > 1) {
        /* copy the name into an array used to add .as. The -4 is for .as\0 in the end of the name. We assume the max length of a file name (including extensions) is 1000, as said in the forums */
        strncpy(name, argv[argc - 1], NAME_MAX-4);
        strcat(name, ".as");
        input = fopen(name, "r");
        /* if the file input exists, assemble it. If not, show an error message and skip it */
        if (input == NULL) {
            printf("Error- no such file as %s", name);
        }
        else {
            assembler(input, argv[argc - 1]);
            fclose(input);
        }
        argc--;
    }
    return 0;
}
