//
// Created by 祈Inory on 2022/11/13.
//
// cradle from ch01
#ifndef LET_S_BUILD_A_COMPILER_CRADLE_H
#define LET_S_BUILD_A_COMPILER_CRADLE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Lookahead Character
extern char Look;

// Boolean type
enum BOOL {
    FALSE   = 0,
    TRUE    = 1
};

// Read New Character From Input Stream
void GetChar();

// Report an Error
void Error(char* pStr);

// Report Error and Halt
void Abort(char* pStr);

// Report What Was Expected
void Expected(char* pStr);

// Match a Specific Input Character
void Match(char c);

// Recognize an Alpha Character
BOOL IsAlpha(char c);

// Recognize a Decimal Digit
BOOL IsDigit(char c);

// Get an Identifier
void GetName(char* pName);



#endif //LET_S_BUILD_A_COMPILER_CRADLE_H
