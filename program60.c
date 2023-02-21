#include<stdio.h>
#include<stdlib.h>
void DisplayEvenOddCnt(int Arr[],int iSize)
{
   int iCnt = 0,iEvenCnt = 0,iOddCnt = 0;
   for(iCnt = 0; iCnt <iSize; iCnt++)
   {
      if((Arr[iCnt] % 2)== 0)
      {
         iEvenCnt++;
      }
      else
      {
         iOddCnt++;
      }
   }
   printf("Even numbers are:%d\n",iEvenCnt);
   printf("Odd numbers are:%d\n",iOddCnt);

}
int main()
{
   int *ptr = NULL;
   int iLength = 0, i= 0;
   int iRet = 0;

   printf("Enter number of elements :\n");
   scanf("%d",&iLength);

   ptr = (int *)malloc(iLength * sizeof(int));

   printf("Enter the Elements :\n");

   for(i = 0; i< iLength; i++)
   {
      scanf("%d",&ptr[i]);
   }

   DisplayEvenOddCnt(ptr,iLength);

   free(ptr);

   return 0;
}