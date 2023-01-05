using System;

class MathematicsX
{
    public
        int Frequency(int[] iArr, int iNo)
        {
            int iCount = 0;

            for(int j = 0; j < iArr.Length; j++)
            {
                if(iArr[j] == iNo)
                {
                    iCount += 1;
                }
            }

            return iCount;
        }
}

class main
{
    public static void Main(string[] args)
    {
        Console.WriteLine("Enter Count of Elements");
        int iSize = Convert.ToInt32(Console.ReadLine());

        int[] iElements = new int[iSize];

        if(iElements.Length == 0)
        {
            Console.WriteLine("Unable to allocate memory");
            return;
        }

        Console.WriteLine("Enter Element to find its Frequency");
        int iValue = Convert.ToInt32(Console.ReadLine());

        Console.WriteLine("Enter "+iSize+" Elements");

        for(int i = 0; i < iSize; i++)
        {
            iElements[i] = Convert.ToInt32(Console.ReadLine());
        }

        MathematicsX mobj = new MathematicsX();

        Console.WriteLine("Frequency of "+iValue+" = "+mobj.Frequency(iElements,iValue));
    }
}