#include "example.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
Dummy::Dummy() {

}

bool Dummy::doSomething() {
    // Do silly things, using some C++17 features to enforce C++17 builds only.
    constexpr int digits[2] = {0, 1};
    auto [zero, one] = digits;
    return zero + one;
}
vector <string> split(string s)
{
    string :: iterator sit = unique(s.begin(), s.end(), cmp);
    s.erase(sit, s.end());
    if (s[0] == ' ')
        s.erase(0, 1);
    if (*(s.end() - 2) == '.')
        s.erase(s.find(".") - 1, 1);
    cout << s;
    if (*(s.end() - 2) == '.')
        s.erase(s.find("."), 1);
    vector <string> v;
    while (s.size()) {
        v.push_back(s.substr(0, s.find(' ')));
        s.erase(0, s.find(' ') + 1);
    }
    cout << endl;
    return v;
}
string uniq(vector <string> v)
{
	string str;
	vector <string> :: iterator it;
	it = v.begin();
    while (it != v.end()){
        if (*it == *(v.end() - 1))
            v.erase(it);
            else
                it++;
    }
    for ( it = v.begin(); it != v.end(); it++)
        str+=*it+=" ";
    return str;
}

string samelit(vector <string> v)
{
	string str;
	vector <string> :: iterator it;
	for ( it = v.begin(); it != v.end(); it++){
        if (*(it->begin()) == *(it->end() - 1))
            str+=*it+=" ";
    }
    return str;
}

#ifdef ENABLE_DOCTEST_IN_LIBRARY
#include "doctest.h"
TEST_CASE("we can have tests written here, to test impl. details")
{
    freopen("../app/in1.txt", "r", stdin);
    CHECK(true);
}
#endif
