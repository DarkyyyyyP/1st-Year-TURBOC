#include <stdio.h>
#include <conio.h>

void main ()
{
	int arr[4] = {6,4,2,1};
	int *x, i, diff;
	clrscr();
	x = arr; //Memory
	for (i=0; i<4; i++)
	{
	printf("\nPrinting the #%d element of array: %d\n\n", i+1,*x);
	x++;
	}

	x = &arr[0]; //Decimal Value of arr[0] if with ampersand
				// if without ampersand, memory,
				// Memory of x will be equal to memory of arr[0]
	printf("\nFirst array is %d", *x);


	// x + 1 as a pointer will move to the next arr element
	// x - 1 as a pointer will move the previous arr element




	getch();
}
