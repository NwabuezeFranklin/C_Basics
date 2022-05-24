#include<stdio.h>
/**
 * No Days off
 * Arrays as Functions
 * simple sum of elements
 */
int SOE(int* a,  int count)
{
    int i = 0;
    int sum;
    for (i = 0; i < count; i++)
    {
        sum += a[i];
    }
    return sum;    
}
int main(void)
{
    int a[] = {5, 6, 7, 8, 9};
    int count = sizeof(a)/ sizeof(a[0]);
    int summer = SOE(a, count);
    printf("%d sum of elements", summer);
}