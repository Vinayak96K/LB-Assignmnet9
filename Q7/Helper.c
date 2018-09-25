#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: MaxDigit
//  Description: Accepts base address and size of an array and retuns the digit which occurs maximum times.
//  Input: int[IN-OUT,IN,OUT]
//  Output: int[OUT]
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int MaxDigit(int *iArr,int iSize,int *iCount)
{
    int iCnt1=0,iDigit=0,iMax=0,iVar=0;
    int iBrr[10]={0};
    if((iArr==NULL)||(iSize<=0)||(iCount==NULL))
    {
        printf("Incorrect Input!\n");
        return -1;
    }

    for(iCnt1=0;iCnt1<iSize;iCnt1++)
    {
        iVar=iArr[iCnt1];
        while(iVar!=0)
        {
            iDigit=iVar%10;
            iBrr[iDigit]++;
            iVar=iVar/10;
        }  
    }

    iMax=iBrr[0];

    for(iCnt1=0;iCnt1<10;iCnt1++)
    {
        printf("%d : %d\n",iCnt1,iBrr[iCnt1]);
        if((iBrr[iCnt1])>iMax)
        {
            *iCount=iBrr[iCnt1];
            iMax=iCnt1;
            
        }
    }
    return iMax;
}