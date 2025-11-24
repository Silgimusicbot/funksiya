#include <iostream>
using namespace std;

string p(int n){
    int t = 0, m = n;
    while (m > 0) {
        t = t * 10 + m % 10;
        m /= 10;
    }
    if (t == n)
        return "Palindrom";
    return "Deyil";
}
int main(){
    int n;
    cin >> n;
    cout << p(n);
}
