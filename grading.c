#include<stdio.h>
int main()
{
	int mark;
	printf("Enter the mark : ");
	scanf("%d",&mark);
	printf ("Your Grade : ");
	if(mark>85)
		printf ("A");
	else if(mark>=70 && mark<=84)
		printf("B");
	else if(mark>=55 && mark<=69)
		printf("C");
	else if(mark>=40 && mark<=54)
		printf("D");
	else
		printf("F");
}
