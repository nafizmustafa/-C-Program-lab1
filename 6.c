#include <stdio.h>
int main()
{
	int i,j;
	scanf("%d %d",&i,&j);
	if( i>0 && j>0)
	  printf("First Quadrant.\n");
	else if( i<0 && j>0)
	  printf("Second Quadrant.\n");
	else if( i<0 && j<0)
	  printf("Third Quadrant.\n");
	else if( i>0 && j<0)
	  printf(")Fourth Quadrant.\n");
	else if( i==0 && j==0)
	  printf("origin.\n");
}
