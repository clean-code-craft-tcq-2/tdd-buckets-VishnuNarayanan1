#define CATCH_CONFIG_MAIN 

#include "test/catch.hpp"
#include "RangeSort.h"
#include "RangeCheck.h"

// First test before starting the coding : to check range of 2 consecutive current samples
TEST_CASE("Test 1 : Check range for 2 consecutive current samples") {
  int CurrentSamples[] = {4,5};
  REQUIRE(CheckCurrentSamplesRange(CurrentSamples, 2) == 1);
}
