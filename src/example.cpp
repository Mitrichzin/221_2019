#include "example.h"
#include <iostream>
#include <vector>
#include <algorithm>
Dummy::Dummy() {
using namespace std;
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
    CHECK(true);
}
#endif
