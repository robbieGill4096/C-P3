//-----------------------------------------------------------------------------
//
// NAME
//  sed253 -- Simplified editor
//
// SYNOPSIS
//  sed253
//  sed253 -s pattern string
//  sed253 -d line1 line2
//
// DESCRIPTION
//  Simplified editor.  Copies lines read from stdin to stdout.  Options:
//
//  -s Substitute every occurrence of pattern with string
//  -d Delete line1 through line2 inclusive
//
// ERRORS
//  Prints usage message and exits abnormally for invalid commands.  Prints an
//  error message and exits abnormally for other issues.
//
// LIMITATIONS
//  Lines of text are limited to a maximum of 1023 chars.
//
// AUTHORS
//  Epoch...................................................................jrc
//
//-----------------------------------------------------------------------------

//Bring in the definitions for our helper functions
#include "copy.h"
#include "delete.h"
#include "substitute.h"
#include <stdio.h>
#include <string.h>
int doCopy(void);
int doDelete(char *,char *);
int doSubstitute(char *,char *);
//Initialize the normal (non-error) exit status

//-----------------------------------------------------------------------------
// main -- the main function
//-----------------------------------------------------------------------------
int main(int argc, char **argv)
{
    char *pattern; //Pointer to the user-supplied pattern
    char *string;
    char *line1;
    char *line2;
    //Check for -s
    if (argc == 4)
    {

        if (strcmp(argv[1], "-s") == 0)
        {

            pattern = argv[2]; //Reference to pattern in args
            string = argv[3];  //references to the
		size_t pattern_length = strlen(pattern);
		size_t string_length = strlen(string);
		
		
//check that pattern isnt larger than 1023

	if (pattern_length >= 1023){
	 return -1;}

	else if (string_length >= 1023){
	 return -1;}
	
	else{

            doSubstitute(pattern, string);
            printf("\n");
        		}
		}

        else if (strcmp(argv[1], "-d") == 0)
        {
            line1 = argv[2]; //Reference to line1 in args
            line2 = argv[3]; //Reference to line2 in args
  
            doDelete(line1, line2);
            printf("\n");
        }
        else
        {
	    printf("usage: sed253 [-s pattern string] [-d line1 line2]");

            return -1;
            
        }
    }
//print contents
    else if (argc == 1)
    {
        doCopy();
        printf("\n");
    }

    else
    {
        return -1;
    }


    return 0;
}
