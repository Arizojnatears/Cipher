#include "Cipher.h"

void input(char *cipher)
{
	unsigned char temp;
	int x = 0;

	while(((temp=getchar())!= '\n') && (x<=CIPHER_MAX_LENGTH))
	{
		if((temp>='0' && temp<='9') || (temp >= 'a' && temp <= 'z') || temp == ' ')
		{
			cipher[x] = temp;
			x++;
		}
	}
}

void replaceLetters(char *cipher)
{
	int x = 0;
	while(*(cipher + x) != ZERO)
	{
		unsigned char temp = cipher[x];

		if(isalpha(cipher[x]) && temp != '\n' && cipher[x] != 'z')
		{
			temp -= LETTER_CONVERTER;
			cipher[x] = temp;
		}
		if(cipher[x] == 'z')
		{
			temp = 'A';
			cipher[x] = temp;
		}
		x++;
	}
}

void replaceDigits(char *cipher)
{
	int x = 0;
	int numberOfLetters = 0;
	while(cipher[x] != 0)
	{
		if(isalpha(cipher[x])) numberOfLetters++;
		x++;
	}

	x = 0;
	while(x <= CIPHER_MAX_LENGTH)
	{
		if(isdigit(cipher[x]))
		{
			cipher[x] = ((numberOfLetters + cipher[x] - '0') % 10) + '0';
		}
		x++;
	}
}
void replaceSpaces(char *cipher)
{
	int x = 0;
	unsigned char temp;

	while(cipher[x] != ZERO)
	{
		if(cipher[x] == ' ')
		{
			temp = 97 +x;
			cipher[x] = temp;
		}
		x++;
	}
}
void moveLowerCase(char *cipher)
{
	char temp[CIPHER_MAX_LENGTH + 1]={0};
	int x = 0;
	int i= 0;

	while(cipher[x] != ZERO)
	{
		if((cipher[x] >= 'A' && cipher[x] <= 'Z') || (cipher[x] >= '0' && cipher[x] <= '9'))
		{
			temp [i] = cipher[x];
			i++;
		}
		x++;
	}
	x = 0;
	while(cipher[x] != ZERO)
	{
		if(cipher[x] >= 'a' && cipher[x] <= 'z')
		{
			temp[i] = cipher[x];
			i++;
		}
		x++;
	}
	x = 0;
	while(cipher[x] != ZERO)
	{
		cipher[x] = temp[x];
		x++;
	}
}
void reverseString(char *cipher)
{
	printf("%s \n", cipher);
	int x = 0;
	int i = strlen(cipher) - 1;
	unsigned char temp[CIPHER_MAX_LENGTH + 1]={0};

	while(cipher[x] != ZERO)
	{
		temp[i] = cipher[x];
		x++;
		i--;
	}
	x = 0;
	while(cipher[x] != ZERO)
	{
		cipher[x] = temp[x];
		x++;
	}

}