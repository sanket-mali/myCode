//@author: Sanket Kumar Mali
//complement of the given number
#include<stdio.h>
#include<math.h>

int findComplement(int num) {
    int i=0,j=0;
    while(i<num)
    {
        i+=pow(2.0, j);
        j++;
    }
    return i-num;
}
int main(void)
{
    findComplement(4);
    return 0;
}