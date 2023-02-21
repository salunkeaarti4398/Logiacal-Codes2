#include<stdio.h>
int Summation(int iValue)
{
  int iSum = 0;
  int iCnt = 0;
  for(iCnt = 1;iCnt<=iValue;iCnt++)
  {
     iSum = iSum + iCnt;
  }

  return iSum;
}
int main()
{
   int iNo = 0;
   int iRet = 0;

   printf("Enter the number you want add \n");
   scanf("%d",&iNo);

   iRet = Summation(iNo);

   printf("Summation is : %d",iRet);

   return 0;
}