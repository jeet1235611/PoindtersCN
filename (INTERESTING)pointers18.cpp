//Interesting error runtime pe 
//Stupid mistakes

#include <iostream>
using namespace std;

int main() {
        int *p = 0;
        cout << p << endl;

        cout << *p << endl;
        (*p)++;
        cout << *p << endl;
}
