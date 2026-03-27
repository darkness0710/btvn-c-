// Question: 2
// Tính giai thừa n!
// Đọc dữ liệu từ file GIAITHUA.INP và ghi kết quả ra GIAITHUA.OUT
//
// Format GIAITHUA.INP:
// Dòng 1: chứa số nguyên n
//
// Ví dụ:
// GIAITHUA.INP
// 5
//
// GIAITHUA.OUT
// 120

#include <iostream>
using namespace std;

int main() {
    int n;
    long long result = 1; // biến lưu kết quả

    freopen("GIAITHUA.INP", "r", stdin);   // đọc từ file
    freopen("GIAITHUA.OUT", "w", stdout);  // ghi ra file

    cin >> n;

    for (int i = 1; i <= n; i++) {
        result *= i; // nhân từ 1 đến n
    }

    cout << result; // in kết quả

    return 0;
}