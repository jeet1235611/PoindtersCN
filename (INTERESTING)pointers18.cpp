//Interesting error runtime pe 
//Stupid mistakes

//PONTERS me 0 daal do but garbage mat chhodo.

#include <iostream>
using namespace std;

int main() {
        int *p = 0;
        cout << p << endl;

        cout << *p << endl;
        (*p)++;
        cout << *p << endl;
}
