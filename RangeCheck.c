#include <stdio.h>
#include "Config.h"
#include "RangeCheck.h"
#include "RangeSort.h"
#include "PrintOutput.h"

int CheckCurrentSamplesRange (int *CurrentSamples , int NumOfSamples, void (*FnPtrToPrint)(int,int,int))
{
  int DifferenceBetweenSamples = 0;
  int NumConsecutiveRange = 0;
  int NumNonConsecutiveNumbers = 0;
  int index = 0;
  SortInputArray(CurrentSamples,NumOfSamples);
  for(index = 0; index < (NumOfSamples - 1); index++)
  {
    DifferenceBetweenSamples = CurrentSamples[index + 1] - CurrentSamples[index];
    if((DifferenceBetweenSamples == 0) || (DifferenceBetweenSamples == 1))
    {
      NumConsecutiveRange++;
    }
    else
    {
      NumNonConsecutiveNumbers++;
    }
  }
  return (NumConsecutiveRange + NumNonConsecutiveNumbers);
}
