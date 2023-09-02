#include <stdio.h>

int main()
{
	
	char ch = 'G';
	char letter;
	char chinese[] = "大";      // "台灣好" (也可以，他會自己加到 6 BYITE，一個中文字是2 BYTE) 
	
	printf("in chinese is %s \n", chinese);
	
	
	printf("in ch is %c \n", ch);
	
	letter = ch;
	
	printf("in ch is %c \n\n", letter);	
	
	letter = 'k';
	printf("in ch is %c \n", letter);
	
	
	
	return 0;
 } 
