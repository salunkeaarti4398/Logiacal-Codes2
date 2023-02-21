#include<stdio.h>
int Factorial(int iValue)
{
  int iFact = 1;
  int iCnt = 0;
  for(iCnt = 1;iCnt<=iValue;iCnt++)
  {
     iFact = iFact * iCnt;
  }

  return iFact;
}
int main()
{
   int iNo = 0;
   int iRet = 0;

   printf("Enter the number \n");
   scanf("%d",&iNo);

   iRet = Factorial(iNo);

   printf("Factorial  of %d is : %d\n",iNo,iRet);

   return 0;
}