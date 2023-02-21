#include<stdio.h>
void DisplayReverse(int iNo)
{
  int iCnt = 0;
  printf("____________________________\n");
  for(iCnt = iNo; iCnt>0; iCnt--)
  {
     printf("%d\t",iCnt);
  }
  printf("\n____________________________\n");

}
int main()
{
  int iValue = 0;
  printf("Enter the Number");
  scanf("%d",&iValue);
  DisplayReverse(iValue);
  return 0;
}