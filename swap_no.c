#include<stdio.h>
int main()
{
	int a,b;
	printf("enter value of a and b\n");
	scanf("%d %d",&a,&b);
	printf("before swapping a=%db=%d\n",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("before swapping a=%d,b=%d",a,b);
	
}
/*
enter value of a and b
5 7
before swapping a=5b=7
before swapping a=7,b=5
*/
