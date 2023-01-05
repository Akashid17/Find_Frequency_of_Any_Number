
def Frequency(iArr, iNo):

    iCount = 0

    for y in range(0,len(iArr)):
        if iArr[y] == iNo:
            iCount += 1

    return iCount

def main():

    print("Enter Count of Elements")

    iSize = int(input())

    iElements = [0]*iSize

    if len(iElements) == 0:
        print("Unable to allocate memory")
        return

    print("Enter Elements to find its Frequency")

    iValue = int(input())

    print("Enter ",iSize," Elements")

    for x in range(0,iSize):
        iElements[x] = int(input())

    iResult = Frequency(iElements,iValue)

    print("Count of ",iValue," = ",iResult)

if __name__ == "__main__":
    main()