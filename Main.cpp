#include <iostream>

using namespace std;

class MathematicsX
{
    public:
        int Frequency(int*,int,int);    
};

int MathematicsX::Frequency(int iArr[], int iLength, int iNo)
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
    int iSize = 0, iValue = 0;
    int *p = NULL;

    cout<<"Enter count of Elements\n";
    cin>>iSize;

    p = new int[iSize];

    if(p == NULL)
    {
        cout<<"Uable to allocate memory\n";
        return -1;
    }

    cout<<"Enter Element to find frequency\n";
    cin>>iValue;

    cout<<"Enter "<<iSize<<" Elements\n";

    for(int i = 0; i < iSize; i++)
    {
        cin>>p[i];
    }

    MathematicsX mobj;

    int iResult = mobj.Frequency(p,iSize,iValue);

    cout<<"Frequency of "<<iValue<<" = "<<iResult<<endl;

    delete []p;

    return 0;
}
