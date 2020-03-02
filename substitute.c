#include "substitute.h"
#include <stdio.h>
#include <string.h>

int doSubstitute(char *pattern, char *string)
{
    
    char buff[1024];
    int strlength;
    int ptrnlen;
    char *patternPointer;

//
    while (fgets(buff, 1024, stdin) != NULL)
    {
     
        strlength = strlen(string);   
        ptrnlen = strlen(pattern); 

     
        if (ptrnlen == 0) {
            return -1;
        }

        else
        {
            for (int i = 0; i < strlength; i++)
            {
                patternPointer = strstr(buff, pattern); 
                if (patternPointer != NULL)
                {
                    strncpy(patternPointer, string, strlength);
                }
            }

            fputs(buff, stdout);
        }
    }
    return 0;
}
