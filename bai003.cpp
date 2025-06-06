// code: Đặng Quang Huy
// Viết chương trình nhập vào tọa độ (xC, yC) là tâm của một đường tròn, và R là bán kính của đường tròn đó. Nhập vào tọa độ (xM, yM) của điểm M. Xác định điểm M nằm trong, nằm trên hay nằm ngoài đường tròn.
// Ví dụ:
//      Nhap toa do tam O(xO, yO): 0.5 4.3
//      Nhap ban kinh R: 7.4
//      Nhap toa do M(xM, yM): 3.2 6.5 
//      M nam trong (O)
// Gợi ý dùng công thức tính khoảng cách giữa hai điểm ở bài 2: |AB| = sqrt((xA-xB)² + (yA-yB)²)

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float xO, yO, xM, yM, r, d;
    cout << "Nhap toa do diem O(xO, yO): ";
    cin >> xO >> yO;
    cout << "Nhap ban kinh duong tron: ";
    cin >> r;
    cout << "Nhap toa do diem M(xM, yM): ";
    cin >> xM >> yM;
    d = abs(sqrt(pow((xO-xM), 2) + pow((yO-yM), 2)));
    if (d<r){
        cout << "Diem M nam trong duong tron (O)" << endl;
    }else if(d==r){
        cout << "Diem M nam tren duong tron (O)" << endl;
    }else{
        cout << "Diem M nam ngoai duong tron (O)" << endl;
    }
    cin.ignore(); cin.get();
    return 0;
}
