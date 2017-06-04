    
   #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    // Declare second integer, double, and String variables.
    int m;
    double n;
    char o[100];

    scanf("%d",&m);
    scanf("%lf ",&n);
    scanf ("%[^\n]%*c", o);
    // Read and save an integer, double, and String to your variables.
    printf("%d\n",i+m);
    printf("%lf\n",d+n);
    printf("%s ",s);
    printf("%s\n",o);
    // Print the sum of both integer variables on a new line.
   /*char * new_str ;
    if((new_str = malloc(strlen(s)+strlen(o)+1)) != NULL){
    new_str[0] = '\0';   // ensures the memory is an empty string
    strcat(new_str,s);
    strcat(new_str,o);
    } else {
    printf("malloc failed!\n");
    // exit?
}*/
    return 0;
}