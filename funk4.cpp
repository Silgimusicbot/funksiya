#include <iostream>
using namespace std;
string tc(int n){
    if (n % 2 == 0)
        return "Cut";
    return "Tek";
}
int main(){
    int n;
    cin >> n;
    cout << tc(n);
}
