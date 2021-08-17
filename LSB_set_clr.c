#include<stdio.h>
int main()
{
	int data,bit=0;
	printf("enter data\n");
	scanf("%d",&data);
	if((data>>bit)&1)
	printf("LSB is set");
	else
	printf("LSB is clear");
	
}
/* enter data
5  // 00000101
LSB is set
*/
