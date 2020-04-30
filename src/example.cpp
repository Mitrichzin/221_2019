#include "example.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
Dummy::Dummy() {

}
void print(pair<float, pair<int, int> > a )
{
    cout << a.second.first << " " << a.second.second << endl;
}
vector< pair<float, pair<int, int> > > sortdots(const char* input) 
{
	freopen(input,"r", stdin);
	int n,a,b;
    float c;
    cin >> n;

    vector< pair<float, pair<int, int> > > A;

    for (int i=0;i<n;i++)
    {
        cin >> a >> b;
        c = a * a + b * b;
        A.push_back(make_pair(c, make_pair(a, b)));
    }

    sort(A.begin(), A.end());
    return A;
}
bool Dummy::doSomething() {
    // Do silly things, using some C++17 features to enforce C++17 builds only.
    constexpr int digits[2] = {0, 1};
    auto [zero, one] = digits;
    return zero + one;
}


#ifdef ENABLE_DOCTEST_IN_LIBRARY
#include "doctest.h"
TEST_CASE("we can have tests written here, to test impl. details")
{
   	vector< pair<float, pair<int, int> > > v;
	v.push_back(make_pair(2,make_pair(-1,-1)));
	v.push_back(make_pair(500,make_pair(10,20)));
	v.push_back(make_pair(1300,make_pair(30,20)));
	v.push_back(make_pair(2300,make_pair(30,40)));
	v.push_back(make_pair(2,make_pair(50,60)));
	v.push_back(make_pair(2,make_pair(50,60)));
	v.push_back(make_pair(2,make_pair(80,70)));
	v.push_back(make_pair(2,make_pair(95,95)));
	CHECK(v==sortdots("../app/in1.txt");
}
#endif
