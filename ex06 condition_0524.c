#include <stdio.h>

int main()
{
	int a, x, b = 101, c = 202;
	
	printf("請輸入一個數值: ");
	scanf("%d", &x);   
	// &表位置記號 (把掃進來的數字放到 x 這個變數裡面，若x=0,沒加& 會要求存在 0 這個地址，會當機關閉程式) 
	//scanf("%d", 這裡是要填位置);
	//不能把說名放在scanf,收到資訊容易錯誤，並且說明不會列印出來 
	
	/*	
	printf("a content is %d \n", a);
	printf("a address is %d \n", &a);
	printf("a address Hex is %x \n", &a);
	
	printf("x content is %d \n", x);
	printf("x address is %d \n", &x);
	printf("x address Hex is %x \n", &x);
	
	printf("b content is %d \n", b);
	printf("b address is %d \n", &b);
	printf("b address Hex is %x \n", &b);
	
	printf("c content is %d \n", c);
	printf("c address is %d \n", &c);
	printf("c address Hex is %x \n\n", &c);
	
	system("pause");
	*/ 
//-------------------
	
	a = (x>100) ? b : c;
	printf("a is %d", a);
//-------------------
	printf("\n\n");
	
	if (x>100)
		a = b;
	else 
		a = c;
	printf("a is %d \n", a);


	//system("pause");
	
	return 0;
 } 
