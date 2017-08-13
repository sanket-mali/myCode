//Second program
//temperature conversion
#include<stdio.h>
#define UP 300  //preprocessor directives implementation of #define
int main()
{
	int low=0;
	printf("\ttemperature\n");
	printf("Farenheit\tCelcius\n");
	while(low<=UP)
	{
		printf("%d",low );
		int c=5*(low-32)/9;
		printf("\t\t  %d\n",c );
		low+=20;
	}
	return 1;
}