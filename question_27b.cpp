// Question: 27B
// S = 1^2 + 2^2 + 3^2 + ... + n^2

#include <iostream>
using namespace std;

int main() {
    int n;
    long long S = 0; // biến tổng

    cin >> n; // nhập n

    for (int i = 1; i <= n; i++) {
        S += i * i; // i^2 = i * i
    }

    cout << S; // in kết quả
    return 0;
}