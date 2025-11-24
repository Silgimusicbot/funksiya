#include <iostream>
using namespace std;
string m(int i){
    int c = 0;
    for (int a = 1; a < i; a++){
        if (i % a == 0){
            c = c + a;
        }
    }
    if (c == i)
        return "Mükəmməl ədəddir";
    return "Mükəmməl ədəd deyil";
}
int main(){
    int n;
    cin >> n;
    cout << m(n);
}
