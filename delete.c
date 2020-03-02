#include "delete.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int lineCounter = 0;
int doDelete(char *line1, char *line2)
{
    int firstLine = atoi(line1); //casting to an int
    int lastLine = atoi(line2);  //casting to an int
  
    char buff[1024];  

    while (fgets(buff, 1024, stdin) != NULL)
    {
	lineCounter++;
        if ((firstLine <= lineCounter) && (lineCounter <= lastLine))
        {

        }
        else
        {
            fputs(buff,stdout);
          
        }
         
        
    }

    return 0;
}
