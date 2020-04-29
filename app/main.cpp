// Executables must have the following defined if the library contains
// doctest definitions. For builds with this disabled, e.g. code shipped to
// users, this can be left out.
#ifdef ENABLE_DOCTEST_IN_LIBRARY
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#endif


#include <stdlib.h>
#include "exampleConfig.h"
#include "example.h"
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;
int diagon(int n,int m);
int ulitka(int n, int m);

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
    cout<< std::endl;
    int n, m;
    freopen("./in1.txt", "r", stdin);
    cin >> n >> m;
    ulitka(n,m);
    diagon(n,m);
    return 0;
}
