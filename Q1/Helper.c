#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: Increase
//  Description: Accepts base address and size of an array and increments each element by 1 if it is divisible ny 3 otherwise increments the element by 2 if it is divisible by 3 and 5.
//  Input: int[IN-OUT,IN]
//  Output: NA
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Increase(int *iArr,int iSize)
{
    int iCnt1=0;
    if((iArr==NULL)||(iSize<=0))
    {
        printf("Incorrect Input!\n");
        return;
    }

    for(iCnt1=0;iCnt1<iSize;iCnt1++)
    {
        if((iArr[iCnt1]%3==0)&&(iArr[iCnt1]%5==0))
        {
            iArr[iCnt1]=iArr[iCnt1]+2;
        }
        else if(iArr[iCnt1]%3==0)
        {
            iArr[iCnt1]++;
        }
        else if (iArr[iCnt1]%5==0)
        {
            iArr[iCnt1]=1;
        }
        
    }
}