// Bài 44c: Đếm ký tự trong chuỗi

#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    
    cout << "Hay nhap chuoi S: ";
    cin >> S; // nhập chuỗi (không có khoảng trắng)

    int dem[256] = {0}; // mảng đếm cho tất cả ký tự ASCII

    // Duyệt từng ký tự trong chuỗi và tăng số lần xuất hiện
    for (int i = 0; i < S.length(); i++) {
        dem[S[i]]++;
    }

    // In kết quả (chỉ in ký tự có xuất hiện)
    for (int i = 0; i < S.length(); i++) {
        if (dem[S[i]] != 0) {
            cout << S[i] << " " << dem[S[i]] << endl;
            dem[S[i]] = 0; // tránh in lại ký tự đó lần nữa
        }
    }

    return 0;
}