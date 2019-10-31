#include "Cipher.h"

int main()
{
	char cipher[CIPHER_MAX_LENGTH + 1]={0};
	input(cipher);
	replaceLetters(cipher);
	replaceDigits(cipher);
	replaceSpaces(cipher);
	moveLowerCase(cipher);
	reverseString(cipher);
	printf("%s", cipher);
	return 0;
}
