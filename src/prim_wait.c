
#include "prim_wait.h"
volatile void prim_wait(unsigned int millis)
{
    for(unsigned int i = 0; i < millis; i++)
        for(unsigned int j = 0; j < _PRIM_SECOND; j++);
}
