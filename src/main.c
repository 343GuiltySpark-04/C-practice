#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "prim_wait.h"

#define ANSI_COLOR_GREEN "\x1b[32m"

int main()
{
    prim_wait(10);
    printf("DONE");
    exit(EXIT_SUCCESS);
}
