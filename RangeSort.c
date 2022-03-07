#include <stdio.h>
#include "RangeSort.h"

void SortInputArray(int Array[], int NumOfElements)
{
    int Index1, KeyValue, Index2;
    for (Index1 = 1; Index1 < NumOfElements; Index1++)
    {
        KeyValue = Array[Index1];
        Index2 = Index1 - 1;
        while (Index2 >= 0 && Array[Index2] > KeyValue)
        {
            Array[Index2 + 1] = Array[Index2];
            Index2 = Index2 - 1;
        }
        Array[Index2 + 1] = KeyValue;
    }
}
