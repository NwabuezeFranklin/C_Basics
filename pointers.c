#include<stdio.h>
/**
 * No days off
 */
int main(void)
{
    int i[4] ={10, 70, 95, 94};
    int *p;
    p = &i;
    {
        printf("Printing from pointer the addresses: %d\n", p);
        printf("Printing from pointer the values: %d\n", *p);
    }
    //The Loop
    printf("------------------------\n");
    int j = 0;
    for(; j <= 3; j++)
    {
        printf("Printing from pointer the other values: %d\n", *(p+j));
        printf("Printing from pointer the other addresses: %d\n", p+j);
        
    }

}