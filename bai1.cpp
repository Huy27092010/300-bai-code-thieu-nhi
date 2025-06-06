// code: Đặng Quang Huy
// Nhập vào diện tích S của một mặt cầu. Tính thể tích V của hình cầu này.
// S = 4𝝅R² , V = ⁴⁄₃𝝅R³
// R = sqrt(S/4𝝅)
// ví dụ Nhap dien tich S: 256.128
//       The tich V = 385.442302

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float s;
    cout << "Nhap dien tich mat cau: ";
    cin >> s;
    float r = sqrt(s/(4*M_PI));
    float v = (4.0/3.0)*M_PI*pow(r, 3);
    cout << "The tich hinh cau la: " << v << endl;
    cin.ignore(); cin.get();
    return 0;
}
