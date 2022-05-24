#include<stdio.h>
/**
 * No Days off
 * Arrays as Functions
 * simple sum of elements
 */
 /*void Wouble(int* p, int z, int mult)
{
    int i, sum = 0;
    
    z = sizeof(p)/ sizeof(p[0]);
    
    for (i = 0; i < z; i++)
    {
        mult = p[i] * 2;
    
    }

    

}
*/
int main(void)
{
    int p[] = {70, 9, 8, 6, 4};
    int z = sizeof(p)/ sizeof(p[0]);
    int i;
    int mult;
    
    for ( i = 0; i < z; i++)
    {
        mult = p[i] * 2;
        printf("%d\n", mult);
    }
    
 }