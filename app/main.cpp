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
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool cmp(const char a, const char b);
vector <string> split(string s);
string uniq(vector <string> v);
string samelit(vector <string> v);
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
    freopen("../app/in1.txt", "r", stdin);
    ios::sync_with_stdio(false);
    string s;
    vector <string> v;
    getline(cin, s);
    s.push_back(' ');
    cout <<"1)";
    v = split(s);
    cout <<"2)";
    cout<<uniq(v);
    cout << endl;
    cout <<"3)";
    cout<<samelit(v);
    cout <<endl;
    return 0;
}
