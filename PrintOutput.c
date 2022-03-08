#include <stdio.h>
#include "PrintOutput.h"

#ifdef PRODUCTION_ENVIRONMENT
void PrintOutput(int MinVal, int MaxVal, int NumRange)
{
  printf("\n%d-%d , %d", MinVal, MaxVal, NumRange);
}
#endif


