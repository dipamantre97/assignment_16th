#include<stdio.h>
int main()
{
	int data,bit;
	printf("enter data\n");
	scanf("%d",&data);
	printf("enter bit\n");
	scanf("%d",&bit);
	printf("to get perticular bit=%d",(data>>bit));
	
}
/* enter data
6
enter bit
2
to get perticular bit=1
*/
