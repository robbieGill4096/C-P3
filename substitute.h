//-----------------------------------------------------------------------------
//
// NAME
//  substitute.h -- Define prototypes and symbols for using substitute.c
//
//  Reads lines from stdin, performs the requested substition of pattern
//  with string (or leaves the text unchanged if pattern is not found),
//  and writes the possibly updated line to stdout.
//
//  All pattern matching is case sensitive.
//
//-----------------------------------------------------------------------------

// Define function prototypes
#ifdef SUBSTITUTE_H_
#define SUBSTITUTE_H_
int doSubstitute(char *pattern, char *string);  //Returns exit status
#endif
