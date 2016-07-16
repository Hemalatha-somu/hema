void main()
{
int n,rem,rev=0;
printf("\nEnter the number:");
scanf("%d",&n);
while(n>0)
{
rem=n%10;
rev=(rev*10)+rem;
n=n/10;
}
printf("\n reverse=%d",rev);
}
