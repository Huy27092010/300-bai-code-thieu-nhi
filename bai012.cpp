//code: Đặng Quang Huy
// Viết chương trình giải hệ phương trình 2 ẩn: 
//      a₁x + b₁y = c₁
//      a₂x + b₂y = c₂
// Nhớ lại kiến thức:
//      a₁/a₂ ≠ b₁/b₂           --> có nghiệm duy nhất
//      a₁/a₂ = b₁/b₂ ≠ c₁/c₂   --> vô nghiệm
//      a₁/a₂ = b₁/b₂ = c₁/c₂   --> vô số nghiệm
//      D = a₁b₂ - a₂b₁
//      Dx = c₁b₂ - c₂b₁
//      Dy = a₁c₂ - c₁a₂
// Ví dụ
//      Nhap a1, b1, c1: 1 2 3
//      Nhap a2, b2, c2: 4 5 6
//      x = -1
//      y = 2

#include <iostream>
#include <math.h>
#define eps 1e-10
using namespace std;

int main(){
    double a1, a2, b1, b2, c1, c2, d, dx, dy, x, y;
    cout << "Giai he phuong trinh bac nhat 2 an: \n";
    cout << "\ta1x + b1y = c1\n";
    cout << "\ta2x + b2y = c2\n";
    cout << "Nhap cac gia tri cua a1, b1, c1: ";
    cin >> a1 >> b1 >> c1;
    cout << "Nhap cac gia tri cua a2, b2, c2: ";
    cin >> a2 >> b2 >> c2;
    d = (a1*b2)-(a2*b1);
    dx = (b2*c1)-(b1*c2);
    dy = (a1*c2)-(c1*a2);
    
    if(fabs(d) < eps){
        if(fabs(dx)<eps && fabs(dy)<eps){
            cout << "He phuong trinh co vo so nghiem!\n";
        }else{
            cout << "He phuong trinh vo nghiem!\n";
        }
    }else{
        x = dx/d;
        y = dy/d;
        cout << "He phuong trinh co nghiem:\n";
        cout << "\tx = " << x << endl << "\ty = " << y << endl;
    }
    cin.ignore(); cin.get();
    return 0;
}
