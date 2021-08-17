#include<stdio.h>
int main()
{
	int data,bit=7;
	printf("enter data\n");
	scanf("%d",&data);
	if((data>>bit)&1)
	printf("MSB is set");
	else
	printf("MSB is clear");
	
}
/* enter data
-1
MSB is set
*/
