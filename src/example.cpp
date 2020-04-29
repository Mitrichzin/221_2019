#include "example.h"
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;
Dummy::Dummy() {

}

bool Dummy::doSomething() {
    // Do silly things, using some C++17 features to enforce C++17 builds only.
    constexpr int digits[2] = {0, 1};
    auto [zero, one] = digits;
    return zero + one;
}
int diagon(int n,int m)
{
    vector <vector<int> > a(n, vector<int>(m, 0));
    vector < vector<int> >::iterator row;
    vector < vector<int> >::reverse_iterator rerow;
    vector <int>::iterator col;
    vector <int>::reverse_iterator recol;
    vector<int> rowp(m,0);
    int num = 0;
    row = a.begin();
    for (col = row->begin(); col != row->end(); col++){
        num++;
        *col = num;
    }
    rowp = *row;
    for (row = a.begin()+1; row != a.end(); row++){
        *row = rowp;
        row->pop_back();
        row->insert(row->begin(), *(row->begin())+1);
        rowp = *row;
    }
    cout << endl;


    for (row = a.begin(); row != a.end(); row++){
        for (col = row->begin(); col != row->end(); col++)
            cout <<setw(3)<< *col<< "  ";
        cout << endl;
    }

    return 0;
}
int ulitka(int n, int m)
{
    vector <vector<int> > a(n, vector<int>(m, 0));
    vector < vector<int> >::iterator row;
    vector < vector<int> >::reverse_iterator rerow;
    vector <int>::iterator col;
    vector <int>::reverse_iterator recol;

    int num = 0 , k = 0;
    row = a.begin();
    col = row->begin();
    while (num <= n*m) {
        for (col = (a.begin()+k)->begin()+k; col != (a.begin()+k)->end()-k; col++){
            num++;
            *col = num;
        };
        if (num == n*m) break;
        for (row = a.begin()+k+1; row != a.end()-k; row++){
            num++;
            *(row->end()-k-1) = num;
        };
        if (num == n*m) break;
        for (recol = (a.rbegin()+k)->rbegin()+k+1; recol != (a.rbegin()+k)->rend()-k; recol++){
            num++;
            *(recol) = num;
        };
        if (num == n*m) break;
        for (rerow = a.rbegin()+k+1; rerow != a.rend()-k-1; rerow++){
            num++;
            *((rerow->rend()-k-1)) = num;
        };
        if (num == n*m) break;
        k++;
    }

    cout << endl;
    for (row = a.begin(); row != a.end(); row++){
        for (col = row->begin(); col != row->end(); col++)
            cout <<setw(3)<< *col<< "  ";
        cout << endl;
    }
    return 0;
}



#ifdef ENABLE_DOCTEST_IN_LIBRARY
#include "doctest.h"
TEST_CASE("we can have tests written here, to test impl. details")
{
    //str1="1    2    3    4    5    6    7   22   23   24   25   26   27    8   21   36   37   38   39   28    9   20   35   42   41   40   29   10   19   34   33   32   31   30   11   18   17   16   15   14   13   12"
    //str2="1    2    3    4    5    6    7    8    2    1    2    3    4    5    6    7    3    2    1    2    3    4    5    6"
    //CHECK(ulitka(6,7)==str1);
    //CHECK(diagon(3,8)==str2)
}
#endif
