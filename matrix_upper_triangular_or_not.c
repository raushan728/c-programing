#include<stdio.h>
int main()
{
    int rows,cols;
    printf("Enter number of rows, columns of matrix: ");
    scanf("%d %d",&rows,&cols);
    int matrix[rows][cols];
    printf("Enter elements of matrix\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("Elements at position [%d],[%d]: ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Matrix is:\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    int isUpperTriangular=1;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(i>j && matrix[i][j]!=0)
            {
                isUpperTriangular=0;
                break;
            }
        }
    }
    if(isUpperTriangular)
    {
        printf("Matrix is upper triangular\n");
    }
    else
    {
        printf("Matrix is not upper triangular\n");
    }
    return 0;
}