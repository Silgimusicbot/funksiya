#include <iostream>
using namespace std;
float kv(float n){
    cout << "Kvadrat: " << n * n << endl;
    cout << "Kub: ";
    return n * n * n;
}
int main(){
    float n;
    cout << "Eded: ";
    cin >> n;
    cout << kv(n);
}
