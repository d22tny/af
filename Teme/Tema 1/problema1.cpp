/*1. Determinați câte sticle de x litri cu apă trebuie deschise pentru a umple un vas
de y litri.
*/
#include <iostream>

using namespace std;
// practic cate sticle de x litri incap intr-un vas de y litri este y/x;
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
        // in cazul in care spre exemplu sticla are 2L iar vasul are 7L, o sa fie nevoie de 4 sticle, chiar daca ramane 1L in plus.
        cout<<(y/x)+1;
    }
}

/*

Pseudo

citeste x,y
┌ daca y mod x = 0 atunci 
│     scrie y/x
│ altfel scrie (y/x) + 1
└■

*/