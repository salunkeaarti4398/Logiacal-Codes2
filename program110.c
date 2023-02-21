#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(int iNo)
{
    if((iNo >= 0) && (iNo <= 9))
    {
        return true;
    }
    else
    {
        return false;
    }

}


int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Please enter one single Digit\n");
    scanf("%d",&iValue);

    bRet = CheckDigit(iValue);
    if(bRet == true)
    {
        printf("%d is single digit\n",iValue);
    }
    else
    {
        printf("%d is not a single digit\n",iValue);

    }

    return 0;
}