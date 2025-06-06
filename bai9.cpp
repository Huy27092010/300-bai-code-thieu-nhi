// code: Đặng Quang Huy
// Viết chương trình nhập vào số x chỉ số đo của một góc, tính bằng phút. Cho biết nó thuộc góc vuông thứ bao nhiêu của vòng tròn lượng giác.
// Tính cos(x), dùng hàm do math.h cung cấp.
// Gợi ý:
//      60' = 1 độ
// Ví dụ:
//      Nhap so do x cua goc (phut): 12345
//      x thuoc goc vuong thu 3
//      cos(x) = -0.900698
// Chú ý: 1 rad = độ × π / 180. Đổi sang radian khi dùng sin(), cos(), tan()

#include <iostream>
#include <math.h>
#define eps 1e-10
using namespace std;

int main(){
    double x;
    cout << "Nhap so do x cua goc (tinh theo phut): ";
    cin >> x;
    x /= 60.0;
    cout << "x thuoc goc vuong thu " << int((x-eps)/90)+1 << endl;
    cout << "cos(x) = " << cos(x*M_PI/180) << endl;
    cin.ignore(); cin.get();
    return 0;
}