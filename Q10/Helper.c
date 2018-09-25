#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: ChkSorted
//  Description: Accepts base address and size of an array and returns true is the array is sorted in increasing order.
//  Input: int[IN-OUT,IN]
//  Output: BOOL[OUT]
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkSorted(int *iArr,int iSize)
{
    int iCnt1=0,iCnt2=0;
    if((iArr==NULL)||(iSize<=0))
    {
        printf("Incorrect Input!\n");
        return ERR;
    }

    for(iCnt1=0;iCnt1<(iSize-1);iCnt1++)
    {
       if((iArr[iCnt1])<(iArr[iCnt1+1]))
       {
        iCnt2++;
       }    
       else
       {
           break;
       }
    }
    if(iCnt1==(iSize-1))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}