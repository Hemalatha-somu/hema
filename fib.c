void main()
{
int n,c;
int a=0;b=1;
printf("\n Enter the number:");
scanf("%d",&n);
printf("%d\n%d",a,b);
for(i=2;i<=n;i++)
{
c=a+b;
printf("\n %d",c);
a=b;
b=c;
}
}
