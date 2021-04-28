#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrix.c"

#define ANSI_COLOR_GREEN   "\x1b[32m"

int main(){

srand(time(0));

int looper = 1;

int count = 0;

while (looper == 1){

    if (count == 3){

srand(time(0));

count = 0;

    }

    int random_out = matrix();

    printf(ANSI_COLOR_GREEN "\t%i", random_out);

    count++;


}




}
