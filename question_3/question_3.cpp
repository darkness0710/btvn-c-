// Question: 3
// Phân tích thừa số nguyên tố của n
// Đọc dữ liệu từ file THUASONGTO.INP và ghi kết quả ra THUASONGTO.OUT
//
// Format THUASONGTO.INP:
// Dòng 1: chứa số nguyên n
//
// Ví dụ:
// THUASONGTO.INP
// 60
//
// THUASONGTO.OUT
// 2 * 2 * 3 * 5

#include <iostream>
using namespace std;

int main() {
    int n;

    freopen("THUASONGTO.INP", "r", stdin);   // đọc từ file
    freopen("THUASONGTO.OUT", "w", stdout);  // ghi ra file

    cin >> n;

    // bắt đầu từ 2
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            cout << i;
            n /= i;
            if (n > 1) cout << " * ";
        }
    }

    return 0;
}