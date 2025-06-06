// code: Đặng Quang Huy
// Viết chương trình nhập vào ba số thực là ba cạnh của một tam giác. Kiểm tra ba cạnh được nhập có hợp lệ hay không. Nếu hợp lệ, hãy cho biết loại tam giác và tính diện tích tam giác đó.
// Tổng hai cạnh bất kỳ của một tam giác phải lớn hơn cạnh còn lại.
// Công thức Heron¹ dùng tính diện tích tam giác theo chu vi:
//      S = sqrt(p*(p-a)*(p-b)*(p-c))
//      p = (a + b + c)/2
// Ví dụ:
//      Nhap 3 canh tam giac: 3 4 5
//      Tam giac vuong
//      Dien tich S = 6


#include <iostream>
#include <math.h>
#define eps 1e-10
using namespace std;

int main(){
    double a, b, c, p, s;
    cout << "Nhap do dai 3 canh cua tam giac: ";
    cin >> a >> b >> c;
    if(a>0 && b>0 && c>0 && (a+b)>c && (a+c)>b && (b+c)>a){ //kiem tra tinh ton tai cua tam giac
        unsigned f = 0;
        if(fabs(a - b)<eps||fabs(a - c)<eps||fabs(b - c)<eps) f+=1; //tam giac can
        if(fabs(a - b)<eps && fabs(a - c)<eps) f+=1; //tam giac deu
        if(fabs(a*a + b*b - c*c) < eps || fabs(a*a + c*c - b*b) < eps || fabs(b*b + c*c - a*a ) < eps) f+=3; //tam giac vuong
        switch (f){
            case 0:
                cout << "Tam giac thuong\n" ;
                break;
            
            case 1:
                cout << "Tam giac can\n";
                break;
            case 2:
                cout << "Tam giac deu\n";
                break;
            case 3:
                cout << "Tam giac vuong\n";
                break;
            case 4:
                cout << "Tam giac vuong can\n";
                break;
        }
        p = (a + b + c)/2;
        s = sqrt(p*(p-a)*(p-b)*(p-c));
        cout << "Dien tich tam giac S = " << s << endl;
    }else{
        cout << "Tam giac khong ton tai\n";
    }
    cin.ignore(); cin.get();
    return 0;
}
