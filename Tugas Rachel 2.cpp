#include <iostream>
using namespace std;

int main () {
    //
    int a = 10, b = 12, c, d, e;
    c = a; // variabel c diisi dengan variabel a yang bernilai 10
    a = b; // variabel a diisi dengan variabel b yang bernilai 13
    b = c; // variabel b diisi dengan variabel c yang bernilai 10

    cout << "Menukar variable dengan variable sementara\n";
    cout << "A: " << a << endl << "B: " << b << endl;

    d = 1000;
    e = 2000;

    d = d+e;
    e = d-e;
    d = d-e;

    cout << "menukar dua variable tanpa variable sementara\n";
    cout << "\nD: " << d << endl << "E " << e << endl;

    return 0;
}
