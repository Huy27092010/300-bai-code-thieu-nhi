// code: Đặng Quang Huy
// Nhập vào tọa độ 2 điểm A(xA, yA) và B(xB, yB). Tính khoảng cách AB
// |AB| = sqrt((xA-xB)² + (yA-yB)²)
// ví dụ:
//      A(xA, yA)?: 3.2 -1.4
//      B(xB, yB)?: -5.7 6.1
//      |AB| = 11.6387

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float xA, yA, xB, yB;
    cout << "Toa do diem A(xA, yA): ";
    cin >> xA >> yA;
    cout << "Toa do diem B(xB, yB): ";
    cin >> xB >> yB;
    float ab = abs(sqrt(pow((xA-xB), 2) + pow((yA-yB), 2)));
    cout << "Khoang cach giua hai diem A va B la: " << ab << endl;
    system("pause");
    return 0;
}
