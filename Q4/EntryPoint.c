#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    int *iPtr=NULL;
    int iLenght=0,iCnt=0,iNum;
    printf("Enter positive integer as size of an array:");
    scanf("%d",&iLenght);
    if(iLenght<=0)
    {
        printf("Positive integer was expected!\n");
        return -1;
    }

    iPtr=(int *) calloc(iLenght,sizeof(int));
    if(iPtr==NULL)
    {
        printf("Unable to allocate memory!\n");
        return -1;
    }

    printf("Enter %d elements:",iLenght);
    for(iCnt=0;iCnt<iLenght;iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    
    }
    printf("Enter a positive integer:");
    scanf("%d",&iNum);
    if(iNum==0)
    {
        printf("Cannot divide by zero!\n");
        return -1;
    }

    DisplayDivisible(iPtr,iLenght,iNum);
    
    free(iPtr);
    return 0;
}
