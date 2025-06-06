// code: Đặng Quang Huy
// Viết chương trình giải phương trình bậc 1: ax + b = 0 (a, b nhập từ bàn phím). Xét tất cả các trường hợp có thể.
// Ví dụ:
//      Nhap a, b: 4 -3
//      x = 0.75

#include <iostream>
#include <math.h>
#define eps 1e-10
using namespace std;

int main(){
    double a, b, x;
    cout << "Giai phuong trinh bac nhat ax + b = 0.\n";
    cout << "Nhap gia tri cua a, b: ";
    cin >> a >> b;
    if(fabs(a)>eps){
        x = -b/a;
        if(fabs(x)<eps) x = 0;
        cout << "Nghiem cua phuong trinh x = " << x << endl;
    }else{
        if(fabs(b)<eps){
            cout << "Phuong trinh co nghiem voi moi gia tri cua x.\n";
        }else{
            cout << "Phuong  trinh vo nghiem.\n";
        }
    }
    cin.ignore(); cin.get();
    return 0;
}
