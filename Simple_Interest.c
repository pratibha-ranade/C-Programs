/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    int p,n;
    float r,si;
    scanf ( "%d %d %f", &p, &n, &r ) ;
    /* Formula to calculate simple interest */    
    si = p*n*r/100;
    printf("%f\n",si);
    return 0;
}
