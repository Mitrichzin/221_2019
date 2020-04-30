// Executables must have the following defined if the library contains
// doctest definitions. For builds with this disabled, e.g. code shipped to
// users, this can be left out.
#ifdef ENABLE_DOCTEST_IN_LIBRARY
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#endif
#include <iostream>
#include <stdlib.h>
#include "exampleConfig.h"
#include "example.h"
#include "example.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility> 
using namespace std;

int main() {
  std::cout << "C++ Boiler Plate v"
            << PROJECT_VERSION_MAJOR
            << "."
            << PROJECT_VERSION_MINOR
            << "."
            << PROJECT_VERSION_PATCH
            << "."
            << PROJECT_VERSION_TWEAK
            << std::endl;
  std::system("cat ../LICENSE");

  vector< pair<float, pair<int, int> > > A=sortdots("CON");
    vector< pair<float, pair<int, int> > >::iterator it;
    cout <<"Точки в порядке возрастания расстояний:"<< endl;
    for(it = A.begin(); it != A.end(); it++) print(*it);
return 0;
}
