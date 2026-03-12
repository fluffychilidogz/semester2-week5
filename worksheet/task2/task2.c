/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Bahaeddine Dayya
 * ID: 202003508
 */

#include <stdio.h>
#include <string.h>

int main(void){
	long decimal=0;
	char hex[9];
	
	printf("Enter a hexadecimal:");

	// if input contains invalid hex digit
	// printf("Error: Invalid Hexadecimal\n");

	fgets(hex, 8, stdin); // get 8 bits
	hex[strcspn(hex, "\n")] = 0; // strip whitespace

	for (int i=0; i<strlen(hex);i++)
	{
		int digit = 0;
		if (hex[i] >= 'a' && hex[i] <= 'f')
		{
			digit = hex[i] - 87;
		} else 
		{
			if (hex[i] >= 'A' && hex[i] <= 'F')
		{
			digit = hex[i] - 55;
		} else
		{
			if (hex[i] >= '0' && hex[i] <= '9')
		{
			digit = hex[i] - 48;
		} else
		{
			printf("Error: Invalid Hexadecimal\n");
			return 1;
		}
		}
		}


		long powerer = 1;

		if (!(i == strlen(hex)-1))
		{
			for (int j=strlen(hex)-2-i; j>-1;j--)
			{
				powerer = powerer * 16;
			}
		}

		printf("length: %ld\n", strlen(hex));
		printf("powerer: %ld\n", powerer);
		printf("hex value:%d\n", hex[i]);
		decimal = decimal + powerer*digit;

	}
	
	printf("Success!");
	
	// print the decimal result
	printf("decimal:%ld\n", decimal);
	
	return 0;
}