#include <stdio.h>

int main()
{
	int n1=2, n2=3;
	int ans;
	
	printf("2�j��3�� ? --> %d \n", 2>3);
	ans = (n1>n2);    // n1 �O�_�j�� n2 ?    // �[()�O�߰ݪ��N�� 
	printf("2�j��3�� ? --> %d \n", ans);
	printf("2�j��3�� ? --> %d \n", n1>n2);
	
//----------------------------
	printf("\n\n");
	
	printf("2�p�󵥩�3�� ? --> %d \n", 2<=3);
	ans = (n1<=n2);    // n1 �O�_�p�󵥩� n2 ? 
	printf("2�p�󵥩�3�� ? --> %d \n", ans);
	printf("2�p�󵥩�3�� ? --> %d \n", n1<=n2);
	
	
//----------------------------
	printf("\n\n");
	
	printf("2����3�� ? --> %d \n", 2==3);
	ans = (n1==n2);    // n1 �O�_���� n2 ?
	printf("2����3�� ? --> %d \n", ans);
	printf("2����3�� ? --> %d \n", n1==n2);
		
//----------------------------
	printf("\n\n");
	
	printf("2����3�� ? --> %d \n", n1=n2);    //���~�y�k 
	ans = (n1=n2);    // n1 �O�_���� n2 ?     //���~�y�k 
	printf("2����3�� ? --> %d \n", ans);
	printf("n1 is %d, n2 is %d \n", n1, n2);
	
	return 0;
 } 
