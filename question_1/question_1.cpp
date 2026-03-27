// Question: 1
// Tính lũy thừa a^n
// Đọc dữ liệu từ file THUASO.INP và ghi kết quả ra THUASO.OUT
//
// Format THUASO.INP:
// Dòng 1: chứa số nguyên a
// Dòng 2: chứa số nguyên n
//
// Ví dụ:
// THUASO.INP
// 2
// 10
//
// THUASO.OUT
// 1024

#include <iostream>
using namespace std;

int main() {
    long long a;
    int n;
    long long result = 1; // biến lưu kết quả

    freopen("THUASO.INP", "r", stdin);   // đọc từ file
    freopen("THUASO.OUT", "w", stdout);  // ghi ra file

    cin >> a;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        result *= a; // nhân a n lần
    }

    cout << result; // in kết quả

    return 0;
}