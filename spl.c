#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter number of rows:",n);
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=2*n-1;j++)
        {
            if(j>=n-(i-1)&&j<=n+(i-1))
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;


}
