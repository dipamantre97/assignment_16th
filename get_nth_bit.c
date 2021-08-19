#include<stdio.h>
int main()
{
	int data,bit;
	printf("enter data\n");
	scanf("%d",&data);
	printf("enter bit\n");
	scanf("%d",&bit);
	printf("to get perticular bit=%d",(data>>bit)&1);
	
}
/* enter data
5
enter bit
0
to get perticular bit=1
*/
