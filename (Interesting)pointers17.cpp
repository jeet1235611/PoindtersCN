#include <iostream>
using namespace std;

int main() {
        int i;
        cout << i << endl;
        i++;
        cout << i << endl;

        int* p;
        cout << p << endl;

        p++;
        p++;
        p++;
       //try it by adding one more p++;
        cout << p << endl;
        return 0;

        (*p)++;
        cout << *p << endl;

}
