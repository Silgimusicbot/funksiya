#include <iostream>
using namespace std;
string m(float n){
    if (n > 0)
        return "Musbet";
    else if (n < 0)
        return "Menfi";
    return "Sifir";
}
int main(){
    float n;
    cin >> n;
    cout << m(n);
}
