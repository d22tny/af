/*3. Se dau trei numere naturale a, b, x. Să se verifice dacă numărul x aparține
intervalului [a,b].
*/

#include <iostream>

using namespace std;

int main()
{
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