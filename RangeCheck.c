#include <stdio.h>
#include "Config.h"
#include "RangeCheck.h"
#include "RangeSort.h"
#include "PrintOutput.h"

int CheckCurrentSamplesRange (int *CurrentSamples , int NumOfSamples,  void (*FnPtrToPrint)(int,int,int))
{
  int NumConsecutiveRange = 0, ConsecutiveSample = 0, Index = 0, StartRange = 0, NumRanges = 0;
  SortInputArray(CurrentSamples,NumOfSamples);
  StartRange = CurrentSamples[0];
  for(Index = 0; Index < (NumOfSamples - 1); Index++)
  {
    ConsecutiveSample = FindConsecutiveSamples(CurrentSamples[Index+1],CurrentSamples[Index]);
    NumConsecutiveRange = NumConsecutiveRange + ConsecutiveSample;
    if(!ConsecutiveSample)
    {
      FnPtrToPrint(StartRange ,CurrentSamples[Index] , NumConsecutiveRange);
      StartRange = CurrentSamples[Index+1];
      NumConsecutiveRange = 0;
      NumRanges++;
    }
    else if((Index == (NumOfSamples - 2)))
    {
       PrintOutput(StartRange ,CurrentSamples[Index+1] , NumConsecutiveRange); 
       NumRanges++;
    }
  }
  return (NumRanges);
}

int FindConsecutiveSamples(int Sample1,int Sample2)
{
    int DifferenceBetweenSamples = 0, ConsecutiveSample = 0;
    DifferenceBetweenSamples = Sample1 - Sample2;
    if((DifferenceBetweenSamples == 0) || (DifferenceBetweenSamples == 1))
    {
      ConsecutiveSample = 1;
    }   
  return ConsecutiveSample;
}
