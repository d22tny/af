/*6. Se dau 5 numere distincte. Să se determine suma celor mai mari 3 dintre ele.
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e;
    int a2, b2, c2, d2, e2;
    int max,max2,max3;
    max = 0;
    max2 = 0;
    max3 = 0;
    cout <<"Introduceti primul numar\n";
    cin >> a;
    cout <<"Introduceti al doilea numar\n";
    cin >> b;
    cout <<"Introduceti al 3-lea numar\n";
    cin >> c;
    cout <<"Introduceti al 4-lea numar\n";
    cin >> d;
    cout <<"Introduceti al 5-lea numar\n";
    cin >> e;
    a2 = a;
    b2 = b;
    c2 = c;
    d2 = d;
    e2 = e;
    if (a >= b && a >= c && a >= d && a >= e) {
        max = a;
        a = 0;
    } else if (b >= a && b >= c && b >= d && b >= e) {
        max = b;
        b = 0;
    } else if (c >= a && c >= b && c >= d && c >= e) {
        max = c;
        c = 0;
    } else if (d >= a && d >= b && d >= c && d >= e) {
        max = d;
        d = 0;
    } else {
        max = e;
        e = 0;
    }
    
    if (a >= b && a >= c && a >= d && a >= e) {
        max2 = a;
        a = 0;
    } else if (b >= a && b >= c && b >= d && b >= e) {
        max2 = b;
        b = 0;
    } else if (c >= a && c >= b && c >= d && c >= e) {
        max2 = c;
        c = 0;
    } else if (d >= a && d >= b && d >= c && d >= e) {
        max2 = d;
        d = 0;
    } else {
        max2 = e;
        e = 0;
    }
    
    if (a >= b && a >= c && a >= d && a >= e) {
        max3 = a;
        a = 0;
    } else if (b >= a && b >= c && b >= d && b >= e) {
        max3 = b;
        b = 0;
    } else if (c >= a && c >= b && c >= d && c >= e) {
        max3 = c;
        c = 0;
    } else if (d >= a && d >= b && d >= c && d >= e) {
        max3 = d;
        d = 0;
    } else {
        max3 = e;
        e = 0;
    }
    cout << "S-au dat numerele: " << a2 << ", " << b2 << ", " << c2 << ", " << d2 << ", " << e2 << "\n";
    cout << "Cele mai mari numere sunt: " << max3 << ", " << max2 << ", " << max << "\n";
    cout << "Suma celor 3 numere este: " << max + max2 + max3;
}