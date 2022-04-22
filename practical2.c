#include<stdio.h>
int main()
{
	char color;
	printf("Enter a character:");
	scanf("%c",&color);
	switch(color)
	{
		case 'r':
		case'R':
		printf("Red");
		break;
		case'g':
		case'G':
		printf("Green");
		break;
		case'b':
		case'B':
		printf("Blue");
		break;
		default:printf("Black");
		break;
	}
	return 0;
}
