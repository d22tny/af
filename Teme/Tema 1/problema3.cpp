/*3. Se dau trei numere naturale a, b, x. Să se verifice dacă numărul x aparține
intervalului [a,b].
*/

#include <iostream>

using namespace std;

int main()
{
    // si asta tot simplu, daca numarul dat este mai mare decat minimul intervalului si mai mic decat maximul intervalului, atunci este cuprins
    // in interval :) 
    int a,b,x;
    cout<<"Introduceti minimul intervalului\n";
    cin>>a;
    cout<<"Introduceti maximul intervalului\n";
    cin>>b;
    cout<<"Introduceti numarul\n";
    cin>>x;
    if (a<=b) {
        if (x>=a && x<=b) {
            cout <<"Numarul " << x << " apartine intervalului [" << a << "," << b << "].";
        } else {
            cout <<"Numarul " << x << " nu apartine intervalului [" << a << "," << b << "].";
        }
    } else {
        cout <<"Intervalul nu este definit corect";
    }
    
}

/* 

Pseudo

citeste a,b,x

┌daca x>=a AND x<=b atunci 
│    scrie "apartine"
│altfel 
│    scrie "nu apartine"
└■

*/