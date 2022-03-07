#include <stdio.h>
#include "RangeCheck.h"

int CheckCurrentSamplesRange (int *CurrentSamples , int NumOfSamples)
{
  int DifferenceBetweenSamples = 0;
  int NumConsecutiveRange = 0;
  int index = 0;
  for(index = 0; index < NumOfSamples; index++)
  {
    DifferenceBetweenSamples = CurrentSamples[index + 1] - CurrentSamples[index];
    if((DifferenceBetweenSamples == 0) || (DifferenceBetweenSamples == 1))
    {
      NumConsecutiveRange ++;
    }
  }
  return NumConsecutiveRange;
}
