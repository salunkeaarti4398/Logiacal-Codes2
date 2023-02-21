#include<stdio.h>  // ASCII  American Standard Code for Information Interchanged
void Display(int iNo)
{   
    int iCnt = 0;
    char ch = 'A';

    
    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        printf("%c\t",ch);
        ch++;
    }
    
}

int main()
{
    int iValue = 0;
    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}