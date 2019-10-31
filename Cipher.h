#ifndef SRC_CIPHER_H_
#define SRC_CIPHER_H_

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define CIPHER_MAX_LENGTH 25
#define NINE 57
#define MAX_NUMBER_BEFORE_RESET 9
#define ZERO 0
#define LETTER_CONVERTER 31

void input(char *cipher);
void replaceLetters(char *cipher);
void replaceDigits(char *cipher);
void replaceSpaces(char *cipher);
void moveLowerCase(char *cipher);
void reverseString(char *cipher);


#endif /* SRC_CIPHER_H_ */