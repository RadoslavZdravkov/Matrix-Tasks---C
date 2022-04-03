#include <stdio.h>
#include <stdlib.h>

#define R printf("----------\n")

int main()
{
    int n=0;
    printf("Enter matrix[n][n] size: ");
    scanf("%d",&n);
    R;
    int matrix[n][n];
    printf("Enter matrix %d elements: ",n*n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    R;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    //Елементи от главен диагонал
    printf("GLAVEN DIAGONAL: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",matrix[i][i]);
    }
    printf("\n");
    R;
    //Елементи от обратен диагонал
    printf("OBRATEN DIAGONAL: \n");
    for(int i=0,j=n-1;i<n,j>=0;i++,j--)
    {
        printf("%d ",matrix[i][j]);
    }
    printf("\n");
    R;
    //Елементи над главния диагонал
    printf("NAD GLAVEN DIAGONAL: \n");
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            printf("%d ",matrix[i][j]);
        }
    }
    printf("\n");
    R;
    //Елементи над главния диагонал
    printf("POD GLAVEN DIAGONAL: \n");
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("%d ",matrix[i][j]);
        }
    }
    //Елементи над обратния диагонал
    printf("\n");
    R;
    printf("NAD OBRATEN DIAGONAL: \n");
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            printf("%d ",matrix[i][j]);
        }
    }
    //Елементи под обратния диагонал
    printf("\n");
    R;
    printf("POD OBRATEN DIAGONAL: \n");
    for(int i=1;i<n-1;i++)
    {
        for(int j=n-1;j<n-i-1;j++)
        {
            printf("%d ",matrix[i][j]);
        }
    }
    return 0;
}
