#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int num1,num2,num3,temp; 

	printf("�п�J�T�ӼƦr,�|�i��ƧǡG");  

	scanf("%d%d%d",&num1,&num2,&num3); 

	if(num1>num2)
	{ 

		temp=num1;  

		num1=num2; 

		num2=temp; 

	}

	if(num1>num3){ 

		temp=num1; 

		num1=num3; 

		num3=temp; 

	}

	if(num2>num3)
	{   

		temp=num2;   

		num2=num3; 

		num3=temp;

	}

	printf("�q�p��j���ƦC�O:%d %d %d\n",num1,num2,num3);

	system("pause");
	
	return 0;
}
