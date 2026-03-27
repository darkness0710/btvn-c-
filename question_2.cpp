// Question: 2
// Tính giai thừa n!

#include <iostream>
using namespace std;

int main() {
    int n;
    long long result = 1; // biến lưu kết quả

    cout << "Hay nhap vao so n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        result *= i; // nhân từ 1 đến n
    }

    cout << "Giai thua n! = " << result; // in kết quả
    return 0;
}