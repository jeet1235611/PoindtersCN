#include <iostream>
using namespace std;

int main() {
        int i = 10;
        int *p = &i;

        cout << sizeof(p) << endl;
        cout << i << endl;
        cout << *p << endl;

        i++;

        cout << i << endl;
        cout << *p << endl;

        int a = i; //ye bhi likh sakte h, int a = *p
        a++;

        cout << a << endl;
        cout << i << endl;

}
