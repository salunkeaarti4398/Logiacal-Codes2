#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int IndexOccurance(int Arr[],int iSize,int iNo)
{
   int iCnt = 0;
   for(iCnt = 0; iCnt <iSize; iCnt++)
   {
      if(Arr[iCnt]== iNo)
      {
         break;
      }
   }
   if(iCnt == iSize)
   {
      return -1;
   }
   else
   {
      return iCnt;
   }
}
int main()
{
   int *ptr = NULL;
   int iLength = 0, i= 0, iValue = 0;
   int iRet = 0;

   printf("Enter number of elements :\n");
   scanf("%d",&iLength);

   ptr = (int *)malloc(iLength * sizeof(int));

   printf("Enter the Elements :\n");

   for(i = 0; i< iLength; i++)
   {
      scanf("%d",&ptr[i]);
   }

   printf("Enter the elements to findout the Occurance :\n");
   scanf("%d",&iValue);

   iRet = IndexOccurance(ptr,iLength,iValue);
   if(iRet == -1)
   {
      printf("their is no %d in the Array  ",iValue);
      
   }
   else
   {
      printf("the index of the %d is : %d",iValue,iRet);

   }
   free(ptr);

   return 0;
}