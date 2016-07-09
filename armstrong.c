void main()
{
int n,n1,sum=0,rem,count=0;
printf("\n Enter the number:");
scanf("%d",&n);
n1=n;
n2=n;
while(n2>0)
{
n2=n2/10;
count++;
}
while(n>0)
{
rem=n%10;
sum=sum+power(rem,count);
n=n/10;
}
if(n1==sum)
printf("\n armstrong");
else
printf("\n not armstrong");
}
