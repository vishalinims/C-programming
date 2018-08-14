#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int first, diff, terms, value, sum=0, i;
    scanf("%d", &terms);

    scanf("%d %d", &first, &diff);

    /* print the series and add all elements to sum */
    value = first;
    for(i = 0; i < terms; i++) 
    {

        sum += value;
        value = value + diff;
    }

    printf("\n%d\n",sum);
 return 0;
}
