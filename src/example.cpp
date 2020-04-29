#include "example.h"
#include <iostream>
#include <vector>
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <cstdio>
#include <string>
string multremoval(const char* file)
{
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
    for (it=v.begin();it!=v.end();it++)
    {
        str+=to_string(*it);
        str+=" ";
    }
    return str;
}

#ifdef ENABLE_DOCTEST_IN_LIBRARY
#include "doctest.h"
TEST_CASE("we can have tests written here, to test impl. details")
{
    string str1="5 6 7 8 9 0 0 0 0 0 ";
    CHECK(multremoval("./app/in2.txt")==str1);
}
#endif
