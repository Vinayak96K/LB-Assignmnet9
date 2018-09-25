#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: DisplayDivisible
//  Description: Accepts base address and size of an array along with a number and each element that it divisible by that number.
//  Input: int[IN-OUT,IN]
//  Output: NA
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayDivisible(int *iArr,int iSize,int iNo)
{
    int iCnt1=0;
    if((iArr==NULL)||(iSize<=0))
    {
        printf("Incorrect Input!\n");
        return;
    }

    for(iCnt1=0;iCnt1<iSize;iCnt1++)
    {
       if((iArr[iCnt1]%iNo)==0)
       {
           printf("%d\t",iArr[iCnt1]);
       }      
    }
    printf("\n");
}