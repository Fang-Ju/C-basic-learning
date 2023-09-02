#include <stdio.h>

int main()
{
	int n1=2, n2=3;
	int ans;
	
	printf("2大於3嗎 ? --> %d \n", 2>3);
	ans = (n1>n2);    // n1 是否大於 n2 ?    // 加()是詢問的意思 
	printf("2大於3嗎 ? --> %d \n", ans);
	printf("2大於3嗎 ? --> %d \n", n1>n2);
	
//----------------------------
	printf("\n\n");
	
	printf("2小於等於3嗎 ? --> %d \n", 2<=3);
	ans = (n1<=n2);    // n1 是否小於等於 n2 ? 
	printf("2小於等於3嗎 ? --> %d \n", ans);
	printf("2小於等於3嗎 ? --> %d \n", n1<=n2);
	
	
//----------------------------
	printf("\n\n");
	
	printf("2等於3嗎 ? --> %d \n", 2==3);
	ans = (n1==n2);    // n1 是否等於 n2 ?
	printf("2等於3嗎 ? --> %d \n", ans);
	printf("2等於3嗎 ? --> %d \n", n1==n2);
		
//----------------------------
	printf("\n\n");
	
	printf("2等於3嗎 ? --> %d \n", n1=n2);    //錯誤語法 
	ans = (n1=n2);    // n1 是否等於 n2 ?     //錯誤語法 
	printf("2等於3嗎 ? --> %d \n", ans);
	printf("n1 is %d, n2 is %d \n", n1, n2);
	
	return 0;
 } 
