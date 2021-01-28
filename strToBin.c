#include <stdio.h>
#include <string.h>

char message[] = "Hello, world!";

int main()
{
	for(int byte_idx = 0; byte_idx < strlen(message); byte_idx++)
	{
		char msg_byte = message[byte_idx];

		for(int bit_idx = 0; bit_idx < 8; bit_idx++)
		{
			bool msg_bit = msg_byte & (0x80 >> bit_idx);
			printf(msg_bit ? "1" : "0");
		}
		printf("\n");
	}
	return 0;
}
