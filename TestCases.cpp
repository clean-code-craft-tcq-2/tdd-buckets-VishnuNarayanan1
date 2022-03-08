#define CATCH_CONFIG_MAIN 

#include "test/catch.hpp"
#include "Config.h"
#include "RangeSort.h"
#include "RangeCheck.h"

//************************************************
// Go through test cases for the adapted TDD flow :
//************************************************

// Test 1 : before starting the coding : FAILED
/*
TEST_CASE("Test 1 : Check range for 2 consecutive current samples") {
  int CurrentSamples[] = {4,5};
  REQUIRE(CheckCurrentSamplesRange(CurrentSamples, 2) == 1);
}
*/


// Test 2 : defined CheckCurrentSamplesRange with always return 0 , no change in the test case : FAILED
/*
TEST_CASE("Test 2 : Check range for 2 consecutive current samples") {
  int CurrentSamples[] = {4,5};
  REQUIRE(CheckCurrentSamplesRange(CurrentSamples, 2) == 1);
}
*/

// Test 3 : defined CheckCurrentSamplesRange such that it would pass just for the test input {4,5} , no change in the test case : PASSED
/*
TEST_CASE("Test 3 : Check range for 2 consecutive current samples") {
  int CurrentSamples[] = {4,5};
  REQUIRE(CheckCurrentSamplesRange(CurrentSamples, 2) == 1);
}
*/

// Test 4 : with existing defintion of CheckCurrentSamplesRange, increase inputs and validate the expectation : FAILED
/*
TEST_CASE("Test 4 : Check range for 3 current samples with first and last input being consecutive") {
  int CurrentSamples[] = {4,10,5};
  REQUIRE(CheckCurrentSamplesRange(CurrentSamples, 3) == 2);
}
*/

// Test 5 : Since the implementation works only for sorted range, added implementation to sort the array before processing,
//          no change in the test case : FAILED
/*
TEST_CASE("Test 5 : Check range for 3 current samples with first and last input being consecutive") {
  int CurrentSamples[] = {4,10,5};
  REQUIRE(CheckCurrentSamplesRange(CurrentSamples, 3) == 2);
}
*/

// Test 6 : Improved the code by incrementing the range count for separate ranges
//          For example in the following input {4,10,5} , 4 and 5 forms a continuous range but 10 is a standalone number forming separate range.
//          no change in the test case : EXPECTED TO BE PASSED, BUT FAILED : But found a bug : 
//          for loop needs to be run with condition " < NUM_SAMPLES - 1" as we process "SAMPLE + 1" while indexing.

/*
TEST_CASE("Test 6 : Check range for 3 current samples with first and last input being consecutive") {
  int CurrentSamples[] = {4,10,5};
  REQUIRE(CheckCurrentSamplesRange(CurrentSamples, 3) == 2);
}
*/

// Test 7 : Corrected the loop condition bug found in Test 6 , no change in the test case : PASSED

/*
TEST_CASE("Test 7 : Check range for 3 current samples with first and last input being consecutive") {
  int CurrentSamples[] = {4,10,5};
  REQUIRE(CheckCurrentSamplesRange(CurrentSamples, 3) == 2);
}
*/

// Test 8 : Test by passing function pointer to print the output : FAILED (as there is no code yet to print)

TEST_CASE("Test 8 : Check range for 3 current samples with first and last input being consecutive along with the print function") {
  FnPtrPrint FuncPointerPrint = &PrintOutput;
  int CurrentSamples[] = {4,10,5};
  REQUIRE(CheckCurrentSamplesRange(CurrentSamples, 3,FuncPointerPrint) == 2);
}



