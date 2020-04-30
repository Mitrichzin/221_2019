#pragma once

#include "example.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility> 
/**
 * This is a dummy class to demonstrate features of the boiler plate.
 */
class Dummy {
	public:

  /**
   * Default constructor for Dummy (does nothing).
   */
  Dummy();
  /**
   * Returns a bool.
   * @return Always True.
   */
  bool doSomething();
};

using namespace std;
void print(pair<float, pair<int, int> > a );
vector< pair<float, pair<int, int> > > sortdots(const char* input);
#ifdef ENABLE_DOCTEST_IN_LIBRARY
#include "doctest.h"
TEST_CASE("we can have tests in headers if we want")
{
    Dummy d;
    CHECK(d.doSomething() == true);
}
#endif
