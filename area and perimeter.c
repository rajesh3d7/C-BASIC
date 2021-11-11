#include<stdio.h>
void main()
{
	int l,w;
	printf("enter the value of l and w :");
	scanf("%d%d", &l,&w);
	printf("area of rectangle is %d\n", l*w);
	printf("perimeter of rectangle is %d", 2*(l+w) );
}
