#define CATCH_CONFIG_MAIN 

#include "test/catch.hpp"
#include "RangeSort.h"
#include "RangeCheck.h"

//************************************************
// Go through test cases for the adapted TDD flow :
//************************************************

// Test 1 : before starting the coding
/*
TEST_CASE("Test 1 : Check range for 2 consecutive current samples") {
  int CurrentSamples[] = {4,5};
  REQUIRE(CheckCurrentSamplesRange(CurrentSamples, 2) == 1);
}
*/


// Test 2 : defined CheckCurrentSamplesRange with always return 0 , no change in the test case
/*
TEST_CASE("Test 2 : Check range for 2 consecutive current samples") {
  int CurrentSamples[] = {4,5};
  REQUIRE(CheckCurrentSamplesRange(CurrentSamples, 2) == 1);
}
*/
