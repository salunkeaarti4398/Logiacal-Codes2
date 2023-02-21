#include<stdio.h>
void DisplayTable(int iNo)
{
  int iCnt = 0;
  int iAns = 0;
  printf("________________________________\n");
  printf("Table of %d is : \n",iNo);
  printf("________________________________\n");

  for(iCnt = 1; iCnt<=10; iCnt++)
  {
     iAns = iNo * iCnt;
     printf("%d\n",iAns);
  }
  printf("________________________________\n");

}
int main()
{
  int iNo = 0;

  printf("Enter the number :\n");
  scanf("%d",&iNo);
  DisplayTable(iNo);

  return 0;
}