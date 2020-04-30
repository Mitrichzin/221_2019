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

    int n, t;
    set<int> a;
    vector<string> s;
    vector<string> :: iterator it;
    cin >> n;
    for (int i = 0; i  < n; i++){
        cin >> t;
        if (a.count(t))
            s.push_back("YES"); else
                s.push_back("NO");
        a.insert(t);
    }
    for (it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
}
}
