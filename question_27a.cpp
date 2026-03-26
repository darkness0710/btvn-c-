// Question: 27A
// S=1^1+2^2+3^3+...+n^n

#include <iostream>
#include <cmath> // dùng pow()
using namespace std;

int main() {
    int n;
    long long S = 0; // biến lưu tổng

    cin >> n; // nhập n

    for (int i = 1; i <= n; i++) {
        // pow(i, i) = i^i
        S += pow(i, i); // cộng dồn vào tổng
    }

    cout << S; // in kết quả
    return 0;
}