/*1. Determinați câte sticle de x litri cu apă trebuie deschise pentru a umple un vas
de y litri.
*/
#include <iostream>

using namespace std;

int main()
{
    int x,y=0;
    cout<<"Introduceti numarul de litri de la sticla\n";
    cin>>x;
    cout<<"Introduceti numarul de litri al vasului\n";
    cin>>y;
    if (y%x==0) {
        cout<<y/x;
    } else {
        cout<<(y/x)+1;
    }
}