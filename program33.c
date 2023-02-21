#include<stdio.h>
int SumNonFactors(int iValue)
{
  int iCnt = 0;
  int iSum = 0;

  for(iCnt = 1; iCnt<iValue; iCnt++)
  {
     if((iValue % iCnt) != 0)
     {
       iSum = iSum + iCnt;
     }
  }
  return iSum;
}
int main()
{
  int iNo = 0;
  int iRet = 0;
  printf("Enter the number :\n");
  scanf("%d",&iNo);
  iRet = SumNonFactors(iNo);
  printf("Addition of non factors are %d\n",iRet);
  return 0;
}