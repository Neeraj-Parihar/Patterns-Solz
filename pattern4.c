//to print a particular pattern
/*
*********
 *     *
  *   *
   * *
    *
*/
#include<stdio.h>
int main()
{
    int i,j,k,rows;
    printf("ENTER THE VALUE OF ROW:");
    scanf("%d",&rows);
    for(i=5;i<=rows;i--)
    {
        for(j=i;j<rows;j++)
        {
            printf(" ");
        }
        for(k=1;k<=(2*i-1);k++)
        {
            if(i==rows || k==5 || k==(2*i-1))
            {
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
