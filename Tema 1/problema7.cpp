/*7. Se citește de un număr natural de 3 cifre. Să se determine câte cifre impare
conține.
*/

#include <iostream>

using namespace std;

int main()
{
    int n, pc, dc;
    int suma = 0;
    cout <<"Introduceti numarul\n";
    cin >> n;
    if ((n >= 100 && n <= 999) | (n >= -999 && n <= -100)) {
        pc = n%10;
        n = n/10;
        dc = n%10;
        n = n/10;
        if (pc%2==1) {
            suma += 1;
        }
        if (dc%2==1) {
            suma +=1;
        }
        if (n%2==1) {
            suma+=1;
        }
        cout <<"Numarul " << n << dc << pc << " contine " << suma << " cifre impare.";
    } else {
        cout << "Numarul introdus nu este un numar de 3 cifre";
    }
}