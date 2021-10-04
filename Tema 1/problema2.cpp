/*2. Fiind dată nota n a unui elev să se afișeze dacă acesta este corigent sau promovat.
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Introduceti nota elevului\n";
    cin>>n;
    if (n>=5) {
        cout <<"Elevul este promovat deoarece are nota " <<n;
    } else {
        cout <<"Elevul este corigent deoarece are nota " <<n;
    }
}