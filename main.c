#include "parser.h"
#include <stdio.h>

int main() {
    parse("Hello Git & GCC!");
    int lines = count_lines("main.c");
    printf("Line count of main.c: %d\n", lines);
    return 0;
}
