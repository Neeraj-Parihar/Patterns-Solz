// to print pattern of series
/*
*
**
***
***
*****
****
***
**
*
*/
#include<stdio.h>
int main()
{
    int i,j,k=1;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=k;j++)
        {
            printf("*");
        }
        printf("\n");
        if(i<5)
        {
            k++;
        }
        else k--;
    }
    return 0;
}
