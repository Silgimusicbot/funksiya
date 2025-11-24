#include <iostream>
using namespace std;
float klk(float a, char c, float b) {
    if (c == '+')
        return a + b;
    else if (c == '-')
        return a - b;
    else if (c == '*')
        return a * b;
    else if (c == '/')
        return a / b;
    else
        return 0;
}
int main() {
    float a, b;
    char c;
    cin >> a >> c >> b;
    cout << klk(a, c, b);
}
