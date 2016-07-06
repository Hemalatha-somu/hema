void main()
{
	char ch;
	printf("\n Enter Charcter: ");
	scanf("%c",&ch);
	if(isalpha(ch))
	    printf("\n Alphabet.");
	else if(isdigit(ch))
	    printf("\n Number.");
	else
	   printf("\n neither alphabet nor number."); 
}
