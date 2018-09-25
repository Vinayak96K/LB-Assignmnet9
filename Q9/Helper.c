#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////
//  Function Name: ArrayDiff
//  Description: Accepts base address and size of an array and returns the difference between the sum of both the arrays.
//  Input: int[IN-OUT,IN,IN-OUT,IN]
//  Output: int[OUT]
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////

int ArrayDiff(int *iArr1,int iSize1,int *iArr2,int iSize2)
{
    int iCnt1,iCnt2,iSum1=0,iSum2=0;

    if((iArr1==NULL)||(iSize1<=0)||(iArr2==NULL)||(iSize2<=0))
    {
        printf("Incorect Input!\n");
        return -1;
    }

    for(iCnt1=0,iCnt2=0;iCnt1<iSize1 || iCnt2<iSize2;iCnt1++,iCnt2++)
    {
        if(iCnt1<iSize1)
        {
            iSum1=iSum1+iArr1[iCnt1];
        }
        if(iCnt2<iSize2)
        {
            iSum2=iSum2+iArr2[iCnt2];
        }
    }

    return (iSum1-iSum2);

}