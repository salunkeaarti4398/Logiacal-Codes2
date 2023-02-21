/* Sum of the Digit of given number
Input : 751
Output : 13

Input : 1561
Output : 13

Input : 1
Output : 1

Input : 75
Output : 12 
*/

#include<stdio.h>
int SumDigit(int iNo)
{
    int iDigit = 0,  iSum = 0;

    if(iNo < 0)  // Updater
    {
       iNo = - iNo;
    }

    while(iNo != 0)
    {
      
      iDigit = iNo % 10;
      iSum = iSum + iDigit;
      iNo = iNo / 10;

    }

     return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please Enter Number\n");
    scanf("%d",&iValue);

    iRet = SumDigit(iValue);

    printf("Numbers of digit are : %d\n",iRet);

    return 0;
}