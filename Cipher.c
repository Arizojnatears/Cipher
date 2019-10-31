#include "Cipher.h"

void input(char *cipher)
{
	unsigned char temp;
	int x = 0;

	while(((temp=getchar())!= '\n') && (x<=CIPHER_MAX_LENGTH))
	{
		temp = getchar();
		if(temp == '\n')
			break;
		if((temp>='0' && temp<='9') && (temp > 'a' && temp < 'z') && temp == ' ')
		{
			cipher[x] = temp;
			x++;
		}
	}
}