#include "example.h"
using namespace std;

void printc() {
    cout << "Список команд:\n";
    cout << "0 - Очистить список\n1 - Печать списка\n2 - Вставка значения до заданного элемента \n3 - Вставка значения после заданного элемента \n";
    cout << "4 - Вставка значения в хвост списка\n5 - Удалить первый элемент\n6 - Удалить последний элемент\n7 - Удалить заданный элемент  \n";
    cout << "8 - Найти максимальный элемент списка и вывести его позицию, считая от начала списка\n9 - Построить список из(добавить в конец списка) n элементов со случайными значениями\n";
    cout << "10 - Выход\n";
    cout << "Введите команду: ";
}
string printl(list<int> l)
{
	string str="";
	string str2; 
	list<int>::iterator it = l.begin();
	for (it = l.begin(); it != l.end(); it++)
    {
	str2=std::to_string(*it);
        (str+=str2)+=" ";
    }
    return str;
}
list<int> listwork( const char* input) 
{
    freopen(input, "r", stdin);
	int x, k = 1, v, a;
    list <int> l;
    list<int>::iterator it = l.begin();
    setlocale(LC_ALL, "Russian");
    printc();
    cin >> a;
    while (a != 10) {
        switch (a) {
            case 0:
                l.clear();
				break;
            case 1:
                cout<<printl(l);
                cout <<"\n";
                break;
            case 2:
                cout << "Введите значение вставляемого элемента: ";
                cin >> v;
                cout << "Введите позицию заданного элемента: ";
                cin >> x;
                while (k != x - 1){
                    it++;
                    k++;
                };
                if (it == l.end()) cout << "В списке нет элемента с такой позицией\n";
                else
                    l.insert(it, v);
                break;
            case 3:
                cout << "Введите значение вставляемого элемента: ";
                cin >> v;
                cout << "Введите позицию заданного элемента: ";
                cin >> x;
                while (k != x){
                    it++;
                    k++;
                };
                if (it == l.end()) cout << "В списке нет элемента с такой позицией\n";
                else
                    l.insert(it, v);
                break;
            case 4:
                cout << "Введите значение вставляемого элемента: ";
                cin >> v;
                l.push_back(v);
                break;
            case 5:
                l.pop_front();
                break;
            case 6:
                l.pop_back();
                break;
            case 7:
                cout << "Введите позицию удаляемого элемента: ";
                cin >> x;
                while (k != x - 1){
                    it++;
                    k++;
                };
                if (it == l.end()) cout << "В списке нет элемента с такой позицией\n";
                else
                    l.erase(it);
                break;
            case 8:
                k++;
                while (it != max_element(l.begin(), l.end())){
                    it++;
                    k++;
                };
                cout << "Максимальный элемент списка имеет значение " << *it << " и позицию "<< k;
                cout <<"\n";
               // getchar();
                //getchar();
                break;
            case 9:
                cout << "Введите количество элементов: ";
                cin >> x;
                for (int i = 0; i < x; i++)
                    l.push_back(rand() % 99);
                break;
            default:
                cout << "Неверная команда\n";
                break;
        }
        k = 0;
        it = l.begin();
        //system("cls");
        //print();
        cout << "Введите команду: ";
        cin >> a;
    }
    return l;
}
Dummy::Dummy() {

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
    CHECK(printl(listwork("../app/in1.txt"))=="2 3 4 5 7 8 9 ");
    CHECK(max(listwork("../app/in1.txt"))==7);
}
#endif
