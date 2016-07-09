void main()
{
int i,n;
printf("\n Enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n!=i)
n=n%i;
if(n==0)
flag=1;
}
if(flag==1)
printf("not prime");
else
printf("prime");
}
