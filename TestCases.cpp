#define CATCH_CONFIG_MAIN 

#include "test/catch.hpp"
#include "RangeSort.h"
#include "RangeCheck.h"

// Test 1 : before starting the coding
TEST_CASE("Test 1 : Check range for 2 consecutive current samples") {
  int CurrentSamples[] = {4,5};
  REQUIRE(CheckCurrentSamplesRange(CurrentSamples, 2) == 1);
}
