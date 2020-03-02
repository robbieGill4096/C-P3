#include "copy.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int doCopy(void)
{

    char buffer[1024];
    while (fgets(buffer, 1023, stdin) != NULL )
    {
        printf("%s", buffer);


    }


    return 0;
}
