#include<stdio.h>
int main()
{
int data,bit,result;
printf("enter data\n");
scanf("%d",&data);
printf("enter nth bit for clear:");
scanf("%d",&bit);
result=data & (~(1<<bit));
printf("%d",result);
}

/*
enter data
7    00000111
enter nth bit for clear:0    // 0000110
6
*/
