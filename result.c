#include<stdio.h>
main()
{
	int sub1,sub2,sub3;
	float average;
	 printf("Enter maths marks:");
	 scanf("%d",&sub1);
	 
	 printf("Enter english marks:");
	 scanf("%d",&sub2);
	 
	 printf("Enter science marks:");
	 scanf("%d",&sub3);
	 
	 average=(sub1+sub2+sub3)/3.0;
	 printf("average marks:%.2f\n",average);
}