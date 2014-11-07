#include<stdio.h>
#include<conio.h>
#define SIZE 3
void main()
{
    int i, j;
    struct person
    {
	  char name[20];
	  int age;
    }
    people[SIZE], temp;
    clrscr();
    // accept values
    for (i = 0; i < SIZE; i++)
    {
		printf("Enter name of person %d: \n", (i + 1));
		scanf("%s", people[i].name);
		printf("Enter age of person %d: \n", (i + 1));
		scanf("%d", &people[i].age);
    }

    // printing the values
    printf("\n");
    for(i = 0; i < SIZE; i++)
    {
		for(j = i + 1; j < SIZE; j++)
		{
			if(people[i].age < people[j].age)
			{
				temp = people[j];
				people[j] = people[i];
				people[i] = temp;
			}
		}
    }

    for (i = SIZE - 1; i >= 0; i--)
    {
		printf("%s at age %d\n", people[i].name, people[i].age);
    }

    getch();
}
