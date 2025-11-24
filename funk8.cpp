#include <iostream>
#include <cmath>
using namespace std;

string sm(int n){
    int c = 0;
    for(int i = 2; i < n; ++i){
        if (n % i == 0){
            c += 1;
        }
    }
    if (c == 0)
        return "sadədir";
    return "mürəkkəbdir";
}
int main(){
    int n;
    cin >> n;
    cout << sm(n);
}
