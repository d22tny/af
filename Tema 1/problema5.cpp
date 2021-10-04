/*5. Se citesc trei numere a, b, c. Să se determine diferenţa dintre cel mai mare şi cel
mai mic
*/

#include <iostream>

using namespace std;

int main()
{
    // stabilim min,max = primul numar, daca gasit un numar mai mare/mai mic il trecem ca si minim/maxim
    int a,b,c,min,max;
    cout<<"Introduceti primul numar\n";
    cin>>a;
    cout<<"Introduceti al doilea numar\n";
    cin>>b;
    cout<<"Introduceti al treilea numar\n";
    cin>>c;
    min = a;
    max = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    cout <<"Diferenta intre cel mai mare numar [" << max << "] si cel mai mic numar [" << min << "] este " << max - min << "."; 
}

/* 

Pseudo

citeste a,b,c
min <- a
max <- a
┌daca b < min atunci min <- b
└■
┌daca c < min atunci min <- c
└■
┌daca b > max atunci max <- b
└■
┌daca c > max atunci max <- c
└■
scrie max - min