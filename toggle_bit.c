#include<stdio.h>
int main()
{

int data,bit,result;
printf("enter data");
scanf("%d",&data);
printf("enter nth bit to toggle");
scanf("%d",&bit);
result=data^(1<<bit);
printf("%d",result);
}
/*
enter data5   00000101
enter nth bit to toggle 1    0000111
7
*/




