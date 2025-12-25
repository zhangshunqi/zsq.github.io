#include "parser.h"
#include <stdio.h>

void parse(const char *str) {
    printf("Parsing string: %s\n", str);
}

int count_lines(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) return -1;
    int count = 0;
    char c;
    while ((c = fgetc(file)) != EOF) {
        if (c == '\n') count++;
    }
    fclose(file);
    return count;
}
