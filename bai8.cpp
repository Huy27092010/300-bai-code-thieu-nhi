// code: Đặng Quang Huy
// Viết chương trình giải phương trình bậc 2: ax² + bx + c = 0 (a, b, c nhập từ bàn phím). Xét tất cả các trường hợp có thể.
// Nghiệm của phương trình bậc 2: ax² + bx + c = 0 (a ≠ 0)
// x = (-b±√Δ)/2a với delta: Δ=b²-4ac
// Ví dụ:
//      Nhap a, b, c: 2 1 -4
//      x1 = 1.18614
//      x2 = -1.68614

#include <iostream>
#include <math.h>
#define eps 1e-10
using namespace std;

int main(){
    double a, b, c;
    cout << "Giai phuong trinh bac hai mot an ax^2 + bx + c = 0 (a != 0)\n";
    cout << "Nhap gia tri cua a, b, c: ";
    cin >> a >> b >> c;
    if(fabs(a)>eps){
        double delta = pow(b, 2) - (4*a*c);
        if(delta>eps){
            double x2 = (-b-sqrt(delta))/(2*a);
            double x1 = (-b+sqrt(delta))/(2*a);
            cout << "Nghiem phuong trinh: \n";
            cout << "x1 = " << x1 << "\nx2 = " << x2 << endl;
        }else if(fabs(delta)<eps){
            cout << "Nghiem phuong trinh: \n x1 = x2 = " << -b/(2*a) << endl;
        }else{
            cout << "Phuong trinh khong co nghiem thuc!\n";
        }
    }else{
        cout << "Day khong phai phuong trinh bac hai mot an!\n";
    }
    cin.ignore(); cin.get();
    return 0;
}