#include <stdio.h>

int main()
{
	int a, b;
	int ans;
	
//================= AND ======================
	
	a=0x00;   // 0x ��Q���i�� 
	b=0x00;
	
	ans = a&b;
	printf("a&b is %d \n", ans);
	
	printf("a&b is %d", a&b);
	
//----------------------------
	printf("\n\n");
	
	a=0x08;
	b=0x08;
	
	ans = a&b;
	printf("a&b is %d \n", ans);
	
	printf("a&b is %d", a&b);
		
//----------------------------
	printf("\n\n");
	
	a=0x00;
	b=0x08;
	
	ans = a&b;
	printf("a&b is %d \n", ans);

	printf("a&b is %d", a&b);
	
//================= OR ======================
	printf("\n\n");
	
	a=0x00;
	b=0x00;
	
	ans = a|b;
	printf("a|b is %d \n", ans);
	
	printf("a|b is %d", a|b);
	
//----------------------------
	printf("\n\n");
	
	a=0x08;
	b=0x08;
	
	ans = a|b;
	printf("a|b is %d \n", ans);
	
	printf("a|b is %d", a|b);
		
//----------------------------
	printf("\n\n");
	
	a=0x04;
	b=0x08;
	
	ans = a|b;
	printf("a|b is %d \n", ans);
	
	printf("a|b is %d\n", a|b);
	
	printf("a|b Hex is %x \n", ans);
	
	printf("a|b Hex is %x", a|b);
	
	return 0;
 } 
