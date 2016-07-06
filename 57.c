#include<stdio.h>
#inclide<conio.h>
void main()
{
int i,arr[10],sum=0;
printf("enter the values");
for(i=0;i<10;i++)
scanf("&d",&arr[i]);
for(i=0;i<10;i++)
{
if(i%2==0)
sum=sum+pow(arr[i],2);
else
sum=sum+pow(arr[i],3);
}
printf("%d",sum);
}
