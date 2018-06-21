#include <iostream>
using namespace std;

int main() {
        int *ptr = 0;
        int a = 10;
        *ptr = a;
        cout << *ptr << endl;
}

//Error ayega becoz tum null pointer pe ja ke a dalne ki baad kar rhe ho jo ki h hi nhi hamare paas, esi koi 
//mermory h hi nhi hamare paas.
