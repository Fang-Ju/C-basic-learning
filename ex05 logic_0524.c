#include <stdio.h>

int main()
{
	int a, b;
	int ans;
	
//================= AND ======================
	
	a=0;   // 0 = false
	b=0;
	
	ans = a&&b;
	printf("a&&b is %d \n", ans);
	
	printf("a&&b is %d", a&&b);
	
//----------------------------
	printf("\n\n");
	
	a=0;   // 0 = false
	b=1;   // 1 = true
	
	ans = a&&b;
	printf("a&&b is %d \n", ans);
	
	printf("a&&b is %d", a&&b);
		
//----------------------------
	printf("\n\n");
	
	a=1;   // 1 = true
	b=1;   // 1 = true
	
	ans = a&&b;
	printf("a&&b is %d \n", ans);

	printf("a&&b is %d", a&&b);
	
//================= OR ======================
	printf("\n\n");
	
	a=0;   // 0 = false
	b=0;
	
	ans = a||b;
	printf("a||b is %d \n", ans);
	
	printf("a||b is %d", a||b);
	
//----------------------------
	printf("\n\n");
	
	a=0;   // 0 = false
	b=1;   // 1 = true
	
	ans = a||b;
	printf("a||b is %d \n", ans);
	
	printf("a||b is %d", a||b);
		
//----------------------------
	printf("\n\n");
	
	a=1;   // 1 = true
	b=1;   // 1 = true
	
	ans = a||b;
	printf("a||b is %d \n", ans);
	
	printf("a||b is %d", a||b);
	
	return 0;
 } 
