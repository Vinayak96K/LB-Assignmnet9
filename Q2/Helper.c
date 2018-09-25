#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: EvenOddReplace
//  Description: Accepts base address and size of an array and sets each element to 0 if an element is even number otherwise 1 if element is an odd number.
//  Input: int[IN-OUT,IN]
//  Output: NA
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void EvenOddReplace(int *iArr,int iSize)
{
    int iCnt1=0;
    if((iArr==NULL)||(iSize<=0))
    {
        printf("Incorrect Input!\n");
        return;
    }

    for(iCnt1=0;iCnt1<iSize;iCnt1++)
    {
       iArr[iCnt1]=(iArr[iCnt1]%2);        
    }
}