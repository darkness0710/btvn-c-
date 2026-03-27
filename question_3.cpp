// Question: 3
// Phân tích thừa số nguyên tố của n

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Hay nhap vao so n: ";
    cin >> n;

    cout << "Phan tich thua so nguyen to: ";

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