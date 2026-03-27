// Question: 1
// Tính lũy thừa a^n

#include <iostream>
using namespace std;

int main() {
    long long a;
    int n;
    long long result = 1; // biến lưu kết quả

    cout << "Hay nhap vao a: ";
    cin >> a;

    cout << "Hay nhap vao n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        result *= a; // nhân a n lần
    }

    cout << "Ket qua a^n = " << result; // in kết quả
    return 0;
}