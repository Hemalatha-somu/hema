void main()
{
int n,n1,rem;
int rev=0;
printf("Enter the number:");
scanf("%d",&n);
n1=n;
while(n>0);
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(n1==rev)
printf("\n Palindrome");
else
printf("\n Not palindrome");
}
