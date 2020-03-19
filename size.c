#include <stdio.h>
#include<string.h>
int main()
{
    char str[]={'a','b','c','d'};

    int n;

    /* Calculating the size of the array with this formula.
     * n = sizeof(array_name) / sizeof(array_name[0])
     * This is a universal formula to find number of elements in
     * an array, which means it will work for arrays of all data
     * types such as int, char, float etc.
     */
    n = sizeof(str)/sizeof(str[0]);
    printf("%d",n);
    return 0;

   
}
