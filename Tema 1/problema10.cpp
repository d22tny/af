/*10. Se dă un număr natural nenul n. Să se determine cel mai mic număr natural, mai
mare sau egal decât n, care are ultimele două cifre egale cu 0.
*/

#include <iostream>

using namespace std;

int main()
{
    int n, rest;
    cout <<"Introduceti numarul\n";
    cin >> n;
    rest = n%100;
    if(rest == 0) {
        cout << "Numarul dat este deja un numar care are ultimele doua cifre egale cu zero";
    } else {
        cout << "Numarul mai mare decat " << n << " care are ultimele doua cifre egale cu zero este" << 100 + n - r;
    }
}

/*

Pseudo

citeste n
rest ← n mod 100
daca rest = 0 atunci scrie n
              altfel scrie 100 + n - r

*/