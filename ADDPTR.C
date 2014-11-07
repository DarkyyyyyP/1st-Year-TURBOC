#include <stdio.h>
#include <conio.h>
#define MAX 6
void main()
{
  int i,arr[MAX],sum=0;
  clrscr();
  printf("Enter 6 numbers:\n");
  for(i=0;i<MAX;++i)
  {
    scanf("%d", &arr[i]; // (class+i) is equivalent to &class[i] scanf("%d",(arr+i));
    sum += *arr[i]; // *(class+i) is equivalent to class[i] sum += *(arr+i); 
  }
  printf("Sum=%d",sum);
  getch();
}
