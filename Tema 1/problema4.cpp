/*4. Fiind date vârstele a doi copii afișați care dintre ei este cel mai mare și cu cât.
*/

#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"Introduceti varsta primului copil\n";
    cin>>a;
    cout<<"Introduceti varsta celui de al doilea copil\n";
    cin>>b;
    if (a>0 && b>0) {
        if (a<=b) {
            cout <<"Al doilea copil este mai mare decat primul copil, fiind o diferenta de varsta de " << b - a << " ani.";
        } else {
            cout <<"Primul copil este mai mare decat al doilea copil, fiind o diferenta de varsta de " << a - b << " ani.";
        }
    } else {
        cout << "Varstele introduse nu sunt corecte!";
    }
}

/*

Pseudo

citeste a,b

┌daca a<=b atunci scrie "al doiela este mai mare"
│    scrie b-a
│altfel
│    scrie "primul este mai mare"
│    scrie a - b
└■
*/