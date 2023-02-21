#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool CheckFrequency(int Arr[],int iSize,int iNo)
{
   int iCnt = 0, iFrequency = 0;
   for(iCnt = 0; iCnt <iSize; iCnt++)
   {
      if(Arr[iCnt]== iNo)
      {
         iFrequency++;
      }
   }
   if(iFrequency >0)
   {
      return true;
   }
   else
   {
      return false;
   }
   
}
int main()
{
   int *ptr = NULL;
   int iLength = 0, i= 0, iValue = 0;
   bool bRet = false;

   printf("Enter number of elements :\n");
   scanf("%d",&iLength);

   ptr = (int *)malloc(iLength * sizeof(int));

   printf("Enter the Elements :\n");

   for(i = 0; i< iLength; i++)
   {
      scanf("%d",&ptr[i]);
   }

   printf("Enter the elements to findout the frequency :\n");
   scanf("%d",&iValue);

   bRet = CheckFrequency(ptr,iLength,iValue);
   if(bRet == true)
   {
      printf("%d is  Occured in Array\n",iValue);
   }
   else
   {
      printf("%d is   not Occured in Array\n",iValue);

   }


   free(ptr);

   return 0;
}