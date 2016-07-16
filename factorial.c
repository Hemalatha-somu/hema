#include<stdio.h>
#include<conio.h>
void main()
{
int n,fact=1;
printf("\n Enter the number:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
fact=fact*(n-i);
}
printf("\n factorial=%d",fact);
}
