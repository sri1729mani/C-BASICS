#include<stdio.h>
main()
{
	int a;
	printf ("enter the marks");
	scanf("%d",&a);
	if (a>100)
	{
		printf("invalid");
	}
	else if (90<=a && a<=100)
	{
		printf("O grade");
	}
	else if (80<=a && a<90)
	{
		printf("A grade");
	}
	else if(70<=a && a<80)
	{
		printf("B grade");
	}
	else if (60<=a && a<70)
	{
		printf("C grade");
	 } 
	 else if (50<=a && a<60)
	 { 
	    printf("D grade");
	 }
	 else
	 {
	 	printf("FAIL");
	 }
}
