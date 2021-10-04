/*4. Se citesc trei numere a, b, c. Să se determine diferenţa dintre cel mai mare şi cel
mai mic
*/

#include <iostream>

using namespace std;

int main()
{
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