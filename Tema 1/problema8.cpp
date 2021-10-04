/*8. Se citește un număr natural de 3 cifre. Să se stabilească dacă are toate cifrele
egale.
*/

#include <iostream>

using namespace std;

int main()
{
    int n, pc, dc;
    int suma = 0;
    cout <<"Introduceti numarul\n";
    cin >> n;
    if (n >= 100 && n <= 999) {
        pc = n%10;
        n = n/10;
        dc = n%10;
        n = n/10;
        if (pc == dc && dc == n) {
            cout <<"Numarul " << n << dc << pc << " are toate cifrele egale.";
        } else {
            cout <<"Numarul " << n << dc << pc << " nu are toate cifrele egale.";
        }
        
    } else {
        cout << "Numarul introdus nu este un numar natural de 3 cifre";
    }
}

/* 

Pseudo

citeste n
daca n >= 100 AND n <= 999 atunci
    pc ← n mod 10
    n ← n div 10
    dc ← n mod 10
    n ← n div 10
    daca pc = dc AND dc = n atunci
                            scrie "toate cifrele egale"
                            altfel
                            scrie "numarul nu are toate cifrele egale"

*/ 