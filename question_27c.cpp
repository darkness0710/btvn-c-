// Question: 27C
// S = 1^3 + 2^3 + 3^3 + ... + n^3

#include <iostream>
using namespace std;

int main() {
    int n;
    long long S = 0; // biến tổng

    cin >> n; // nhập n

    for (int i = 1; i <= n; i++) {
        S += i * i * i; // i^3 = i * i * i
    }

    cout << S; // in kết quả
    return 0;
}