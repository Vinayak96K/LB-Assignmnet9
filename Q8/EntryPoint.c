#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    int *ptr=NULL;
    int *ptr2;
    int iLenght1=0,iLenght2=0;
    int iCnt;
    BOOL bRet=TRUE;
    printf("Enter size of 1st array:");
    scanf("%d",&iLenght1);

    ptr=(int *) calloc(iLenght1,sizeof(int));
    if(ptr==NULL)
    {
        printf("Unable to alocate memory.\n");
        return -1;
    }
    printf("Enter %d elements:",iLenght1);
    for(iCnt=0;iCnt<iLenght1;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }


    ptr2=(int *) calloc(iLenght1,sizeof(int));
    if(ptr2==NULL)
    {
        printf("Unable to alocate memory.\n");
        return -1;
    }
    printf("Enter %d elements:",iLenght1);
    for(iCnt=0;iCnt<iLenght1;iCnt++)
    {
        scanf("%d",&ptr2[iCnt]);
    }

    bRet=ArrayCompare(ptr,iLenght1,ptr2,iLenght1);

    if(bRet==TRUE)
    {
        printf("Arrays are equal!\n");
    }
    else if(bRet==FALSE)
    {
        printf("Arrays are not equal!\n");
    }
    else
    {
        printf("ERROR:Incorrect Input!\n");
    }

    free(ptr);
    free(ptr2);
    return 0;
}
