#include <stdio.h>

void calculateCubes(int*ptr) 
{
    printf("%d",(*ptr)*(*ptr)*(*ptr));
}

int main()
{
    int row,col;
    int i,j;
    
    printf("Enter array size\t: ");
    scanf("%d",&row);
    printf("Enter number of columns\t: ");
    scanf("%d",&col);
    
    int array[row][col];
    
    printf("Enter array elements\t:\n");
    for(i=0; i<row; i++) 
    {
        for(j=0; j<col; j++) 
	{
            printf("a[%d][%d] = ", i,j);
            scanf("%d",&array[i][j]);
        }
    }
    
    printf("\nCubes of all elements\t: \n");
    for(i=0; i<row; i++) 
     {
        for(j=0; j<col; j++) 
	{
            calculateCubes(&array[i][j]);
        }
     }
}
