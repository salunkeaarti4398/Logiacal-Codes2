#include<stdio.h>  // ASCII  American Standard Code for Information Interchanged
void Display(int iRow, int iCol)
{   
    int i = 0, j = 0;
    if(iRow<0)
    {
        iRow = -iRow;
    }
    if(iCol<0)
    {
        iCol = -iCol;
    }

    for(i = 1; i<= iRow; i++)
    {
        for(j=1; j<=iCol; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 =0;
    printf("Enter the Number of rows:\n");
    scanf("%d",&iValue1);

    printf("Enter the Number of columns:\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}