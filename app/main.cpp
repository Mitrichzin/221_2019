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
#include <iostream>
#include <set>
#include <vector>

using namespace std;
/*
 * Simple main program that demontrates how access
 * CMake definitions (here the version number) from source code.
 */
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

    int n;
    string s1,s2;
    map <string,string> d1,d2;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> s1 >> s2;
        d1.insert(pair <string,string> (s1,s2));
        d2.insert(pair <string,string> (s2,s1));
    }
    cin >> s1;
    if (d1.count(s1))
        cout << d1[s1];
        else
            cout << d2[s1];
}
