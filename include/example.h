#pragma once

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
#include "example.h"
#include <iostream>
#include <vector>
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <cstdio>
#include <string>
std::string multremoval(const char* file);

#ifdef ENABLE_DOCTEST_IN_LIBRARY
#include "doctest.h"
TEST_CASE("we can have tests in headers if we want")
{
    Dummy d;
    CHECK(d.doSomething() == true);
}
#endif
