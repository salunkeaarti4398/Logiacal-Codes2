#include<stdio.h>
void Display(int iNo)
{   
    int iCnt = 0;
    
    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        printf("*\t");
    }
    
    printf("\n");

}

int main()
{
    int iValue = 0;
    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}