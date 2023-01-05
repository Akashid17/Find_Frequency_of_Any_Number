#include<stdio.h>
#include <stdlib.h>

int Frequency(int iArr[], int iLength, int iNo)
{
    int iCount = 0;

    for(int j = 0; j < iLength; j++)
    {
        if(iArr[j] == iNo)
        {
            iCount += 1;
        }
    }

    return iCount;
}

int main()
{
    int iSize = 0, iValue = 0, iResult = 0;
    int *p = NULL;

    printf("Enter Count of Elements\n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter Element to find its frequency\n");
    scanf("%d",&iValue);

    printf("Enter %d Elements\n",iSize);

    for(int i = 0; i < iSize; i++)
    {
        scanf("%d",&p[i]);
    }

    iResult = Frequency(p,iSize,iValue);

    printf("Frequency of %d = %d\n",iValue,iResult);

    free(p);

    return 0;
}