#include"MyHeader.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: PrintSumDigit
//  Description: Accepts base address and size of an array and prints the sum of number of digits of each element.
//  Input: int[IN OUT,IN]
//  Output: NA
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void PrintSumDigit(int *iArr,int iSize)
{
    int iCnt1=0;
    int iCntDigit1=0,iNum1,iSum=0;

    if(iArr==NULL)
    {
        printf("Incorrect input address!\n");
        return;
    }
    if(iSize<0)
    {
        iSize=-iSize;
    }

    for(iCnt1=0; iCnt1<iSize; iCnt1++)
    {
        
            iNum1=iArr[iCnt1];
            while(iNum1!=0)
            {
                iCntDigit1=iNum1%10;
                iSum=iSum+iCntDigit1;
                iNum1=iNum1/10;
            }
            printf("Digit sum of %d : %d\n",iArr[iCnt1],iSum);
            iSum=0;

    }

}