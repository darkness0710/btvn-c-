#include <iostream>
#include <cmath> // dùng pow()
using namespace std;

int main() {
    int n;
    long long S = 0; // biến tổng

    cin >> n; // nhập n

    for (int i = 0; i <= n; i++) {
        int x = 2 * i + 1; // tạo số lẻ: 1, 3, 5, ...
        S += pow(x, x);    // tính x^x rồi cộng vào tổng
    }

    cout << S; // in kết quả
    return 0;
}