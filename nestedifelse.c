#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter a value of the first number: ");
	scanf("%d",&a);
	printf("Enter a value of the second number: ");
	scanf("%d",&b);
	printf("Enter a value of the third number: ");
	scanf("%d",&c);
	
	
	if(a<b)
	{
		if(a<c)
		{
			printf("minimum number is:%d\n",a);
		}
		else
		{
			printf("minimum number is:%d\n",c);
		}
	}
	else
	{
		if(b<c)
		{
		    printf("minimum number is:%d\n",b);	
		}
		else
		{
			printf("minimum number is:%d\n",c);
		}
	}
}