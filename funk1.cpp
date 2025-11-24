#include <iostream>
using namespace std;
int Sahe_Perimetr(int t){
    cout << "Sahe: " << t * t << endl;
    cout << "Perimetr: ";
    return 4 * t;
}
int main(){
    int n;
    cout << "Teref: ";
    cin >> n;
    cout << Sahe_Perimetr(n);
}
