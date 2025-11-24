#include <iostream>
using namespace std;
string il(int n){
    if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
        return "Il artiqdir";
    return "Il adi ildir";
}
int main(){
    int n;
    cin >> n;
    cout << il(n);
}
