#include<stdio.h>
void DisplayReverse(int iNo)
{
  int iCnt = 0;
  printf("____________________________\n");
  iCnt = iNo;
  while( iCnt>0 )
  {
     printf("%d\t",iCnt);
     iCnt--;
  }
  printf("\n____________________________\n");

}
int main()
{
  int iValue = 0;
  printf("Enter the Number\n");
  scanf("%d",&iValue);
  DisplayReverse(iValue);
  return 0;
}