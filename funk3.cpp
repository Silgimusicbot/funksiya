#include <iostream>
using namespace std;
float derece(float n){
    cout << "Fahrenheit: ";
    return (n * 9 / 5) + 32;
}
int main(){
    float n;
    cin >> n;
    cout << derece(n);
}
