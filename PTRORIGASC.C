#include <stdio.h>
#include <conio.h>
#define MAX 5

void swap(int *a, int *b)
{
	int *temp;
	*temp = *a;
	*a = *b;
	*b = *temp;
}

void main()
{
	int arr[100],x,y,temp;
    clrscr();
	printf("\nEnter the %d elements: ", MAX);
	for(x=0;x < MAX;x++)
	{
		scanf("%d",&arr[x]);
	}
	for(x=0; x < MAX; x++)
	{
		for (y = x; y < MAX; y++)
		{
			if (arr[x] > arr[y]) //ASCENDING, REV IF DESCEND
			{
				swap(&arr[x],&arr[y]);
			}
		}	
	}	
	printf("\nAscending: ");
	for(x=0;x<MAX;x++)
	{
		printf("\t%d",arr[x]);
	}
	
	printf("\nDescending: ");
	for(x=0;x<MAX;x++)
	{
		for(y=x;y<MAX;y++)
		{
			if(arr[x] < arr[y]) //ascending "<" if descend
			{
				swap(&arr[x],&arr[y]);
        	}
        }
    }
	for(x=0;x<MAX;x++)
	{
		printf("\t%d", arr[x]);
	}
	getch();
}
