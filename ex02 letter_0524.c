#include <stdio.h>

int main()
{
	
	char ch = 'G';
	char letter;
	char chinese[] = "�j";      // "�x�W�n" (�]�i�H�A�L�|�ۤv�[�� 6 BYITE�A�@�Ӥ���r�O2 BYTE) 
	
	printf("in chinese is %s \n", chinese);
	
	
	printf("in ch is %c \n", ch);
	
	letter = ch;
	
	printf("in ch is %c \n\n", letter);	
	
	letter = 'k';
	printf("in ch is %c \n", letter);
	
	
	
	return 0;
 } 
