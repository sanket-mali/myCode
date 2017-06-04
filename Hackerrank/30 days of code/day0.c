#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
   char inputString[105],c;
    int i=0,j=0;
    scanf ("%[^\n]%c", inputString);
    printf("Hello, World.\n");
   while(j<strlen(inputString))
   {
       printf("%c",inputString[j]);
       j++;
   }
   return 0;
}
