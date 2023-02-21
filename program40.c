/*Input : 751
Output : 3

Input : 1561
Output : 4

Input : 1
Output : 1

Input : 75
Output : 2 
*/

#include<stdio.h>
int CountDigits(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    while(iNo != 0)
    {
      iDigit = iNo % 10;
      iNo = iNo / 10;
      iCnt++;

    }

     return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please Enter Number\n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("Numbers of digit are : %d\n",iRet);

    return 0;
}