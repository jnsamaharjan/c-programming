#include<stdio.h>
int main()
{
	int num,n,choice,rem,rev=0;
	printf("enter a number:");
	scanf("%d",&num);
	printf("\n enter p for palindrome, enter a for armstrong,enter m for multiple,enter p for prime,enter f for factorial\n\n");
	scanf("%d",&choice);
	switch(choice)
	case 1:
		num=n;
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
		printf("%d is palindrome.",num);
	break;
	case 2:
		num=n;
		sum=0;
		rem=n%10;
		sum=sum+pow(rem,3);
		n=n/10;
		printf("%d is armstrong.",num);
	
		
		
	return 0;
	
}
