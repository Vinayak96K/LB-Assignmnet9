#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: ArrayCompare
//  Description: Accepts base address and size of two array and returns TRUE if both are equal otherwise returns FALSE.
//  Input: int[IN-OUT,IN,IN-OUT,IN]
//  Output: BOOL[OUT]
//  Author: Vinayak Mahendra Patil
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ArrayCompare(int *iArr1,int iSize1,int *iArr2,int iSize2)
{
    int iCnt1,iCnt2;

    if((iArr1==NULL)||(iSize1<=0)||(iArr2==NULL)||(iSize2<=0)||(iSize1!=iSize2))
    {
        printf("Incorect Input!\n");
        return ERR;
    }

    for(iCnt1=0;iCnt1<iSize1;iCnt1++)
    {
        if(iArr1[iCnt1]!=iArr2[iCnt1])
        {
            break;
        }
    }

    if(iCnt1<iSize1)
    {
        return FALSE;
    }
    else if(iCnt1==iSize1)
    {
        return TRUE;
    }
    
}