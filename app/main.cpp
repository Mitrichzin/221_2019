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
int main() {
    int n, m;
    freopen("./in1.txt", "r", stdin)
    cin >> n >> m;
    vector <vector<int> > a(n, vector<int>(m, 0));
    vector < vector<int> >::iterator row;
    vector < vector<int> >::reverse_iterator rerow;
    vector <int>::iterator col;
    vector <int>::reverse_iterator recol;


// улитка
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

//не улитка
    vector<int> rowp(m,0);
    num = 0;
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
