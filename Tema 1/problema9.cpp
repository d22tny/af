/*9. Să se scrie un program care citeşte două numere întregi şi verifică dacă cele
doua numere au acelaşi semn.
*/

#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"Introduceti primul numar:\n";
    cin>>a;
    cout<<"Introduceti al doilea numar:\n";
    cin>>b;
    if (a*b>0) {
        cout <<"Cele doua numere intregi au acelasi semn";
    } else if (a*b==0) {
        cout <<"Unul dintre cele doua numere este 0";
    } else {
        cout <<"Cele doua numere intregi nu au acelasi semn";
    }
}