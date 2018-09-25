#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: EvenOddDiff
//  Description: Accepts base address and size of an array and difference between sum of even and odd elements
//  Input: int[IN-OUT,IN,OUT]
//  Output: NA
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void EvenOddDiff(int *iArr,int iSize,int *Diff)
{
    int iCnt1=0;
    int iEvenSum=0,iOddSum=0;
    if((iArr==NULL)||(iSize<=0))
    {
        printf("Incorrect Input!\n");
        return;
    }

    for(iCnt1=0;iCnt1<iSize;iCnt1++)
    {
            if(iArr[iCnt1]%2==0)
            {
                iEvenSum=iEvenSum+iArr[iCnt1];
            }
            else
            {
                iOddSum=iOddSum+iArr[iCnt1];
            }
    }

    *Diff=iEvenSum-iOddSum;
}