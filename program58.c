#include<stdio.h>
#include<stdlib.h>
float Average(int Arr[], int iSize)
{
   int iSum = 0;
   int iCnt = 0;

   for(iCnt = 0; iCnt<=iSize; iCnt++)
   {
        iSum = iSum + Arr[iCnt];
   }
    return (iSum/iSize);
}
int main()
{
   int *ptr = NULL;
   int iLength = 0,i = 0;
   float fRet = 0.0f;

   printf("Enter the Number of Elements :\n");
   scanf("%d",&iLength);

   ptr = (int *)malloc(iLength * sizeof(int));

   printf("Please Enter the Numbers :\n");
   for(i = 0; i< iLength; i++)
   {
         scanf("%d",&ptr[i]);
   }

   fRet = Average(ptr, iLength);
   printf("Average is :%f\n",fRet);

   free(ptr);
   return 0;
}