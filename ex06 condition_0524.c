#include <stdio.h>

int main()
{
	int a, x, b = 101, c = 202;
	
	printf("�п�J�@�Ӽƭ�: ");
	scanf("%d", &x);   
	// &���m�O�� (�ⱽ�i�Ӫ��Ʀr��� x �o���ܼƸ̭��A�Yx=0,�S�[& �|�n�D�s�b 0 �o�Ӧa�}�A�|��������{��) 
	//scanf("%d", �o�̬O�n���m);
	//����⻡�W��bscanf,�����T�e�����~�A�åB�������|�C�L�X�� 
	
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
