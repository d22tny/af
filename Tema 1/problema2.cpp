/*2. Fiind dată nota n a unui elev să se afișeze dacă acesta este corigent sau promovat.
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Introduceti nota elevului\n";
    cin>>n;
    if (n>=5 && n <= 10) {
        cout <<"Elevul este promovat deoarece are nota " <<n;
    } else if (n<5 and n>=1){
        cout <<"Elevul este corigent deoarece are nota " <<n;
    } else {
        cout <<"Nota " << n << " nu este o nota corecta!";
    }
}

/*

Pseudo

citeste n

daca n>=5 AND n<=10 atunci scrie "promovat"
daca n < 5 AND n>=1 atunci scrie "corigent"

*/