#include <stdio.h>    // standard input/output libarary
#include <windoWs.h> 

int main()
{
	int letter;
	
	printf("Please input letter: ");
	scanf("%c", &letter);
	
	if (letter == 'd')
		Beep(400, 1000);      // Do=400, Beep(freq, time) 1000ms
	
	if (letter == 'r')
		Beep(450, 1000);      // Re=450, Beep(freq, time) 1000ms

	if (letter == 'm')
		Beep(500, 1000);      // Mi=500, Beep(freq, time) 1000ms
	
	printf("Do .......\n");
	Beep(600, 500);
	printf("Re .......\n");
	Beep(650, 500);
	printf("Mi .......\n");
	Beep(700, 500);
	
	system("pause");
	
	return 0;
 } 
