#include<stdio.h>
#include<stdlib.h>
int CntEven(int Arr[],int iSize)
{
   int iCnt = 0,iEvenCnt = 0;
   for(iCnt = 0; iCnt <iSize; iCnt++)
   {
      if((Arr[iCnt] % 2)== 0)
      {
         iEvenCnt++;
      }
   }
   return iEvenCnt;
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

   iRet = CntEven(ptr,iLength);
   printf("Number of even elements are :%d\n",iRet);

   free(ptr);

   return 0;
}