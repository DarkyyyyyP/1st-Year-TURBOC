#include<stdio.h>
#include<conio.h>
void main()
{
	int *a;
	clrscr();
	scanf("%d",a);
	printf("Character, Decimal, float");
	printf("%c %d %f", *a, *a, (float)*a);
	getch();
}
