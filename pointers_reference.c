#include<stdio.h>
/**
 * N0 days off
 */
void func(int *m)
{
    *m = *m + 1;
    
}
int main(void)
{
    int i = 10;
    func(&i);
    {
        printf("%d", i);
    }
}