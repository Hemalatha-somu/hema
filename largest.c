void main()
{
int a,b,c;
printf("\n Enter the numbers:");
scanf("%d %d %d",&a,&b,&c);
if(a>b&&a>c)
printf("%d is largest",a);
elseif(b>c)
printf("%d is largest",b);
else
printf("%d is largest",c);
}
