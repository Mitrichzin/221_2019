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
#include <algorithm>

using namespace std;

string multremoval(const char* file*)
{
    setlocale(LC_ALL, "Russian");
    freopen(file, "r", stdin);
    int n, t, c;
	vector<int> v;
	vector<int>:: iterator it;
	vector<int>:: reverse_iterator rit;
	string str="";
	cin >> n;
	for (int i = 0; i<n; i++){
        cin >>t;
        v.push_back(t);
    }
	for (it = v.begin(); it != v.end(); it++){
        t = *it;
        c = count(it, v.end(), t);
        if (c-1)
            for (rit = v.rbegin(); rit != v.rend(); rit++)
                if ((c-1) && (*rit == t)) {
                    v.erase(rit.base()-1);
                    v.push_back(0);
                    c--;
                }
	}
	string str2="";
    for (it=v.begin();it!=v.end();it++)
    {
        str+=to_string(*it);
        str+=" ";
    }
    return str;
}
int main()
{
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
  cout<<multremoval();
  return 0;
}
