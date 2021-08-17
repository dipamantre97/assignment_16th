#include<stdio.h>
int main()
{
int data,bit,result;
printf("enter data");
scanf("%d",&data);
printf("enter nth bit to set");
scanf("%d",&bit);
result=((1<<bit)|data);
printf("%d",result);
return 0;
}
/*
enter data5  // 00000101
enter nth bit to set 1 //0000111  
7
*/
