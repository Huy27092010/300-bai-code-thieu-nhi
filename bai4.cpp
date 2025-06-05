// code: Đặng Quang Huy
// Viết chương trình nhập vào ba số thực là ba cạnh của một tam giác. Kiểm tra ba cạnh được nhập có hợp lệ hay không. Nếu hợp lệ, hãy cho biết loại tam giác và tính diện tích tam giác đó.
// Tổng hai cạnh bất kỳ của một tam giác phải lớn hơn cạnh còn lại.
// Công thức Heron¹ dùng tính diện tích tam giác theo chu vi:
//      S = sqrt(p*(p-a)*(p-b)*(p-c))
//      p = (a + b + c)/2
// Gợi ý:
//      Nếu c² < a² + b² → tam giác nhọn
//      Nếu c² == a² + b² → tam giác vuông
//      Nếu c² > a² + b² → tam giác tù
// Ví dụ:
//      Nhap 3 canh tam giac: 3 4 5
//      Tam giac vuong
//      Dien tich S = 6


#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float a, b, c, p, s;
    cout << "Nhap do dai 3 canh cua tam giac: ";
    cin >> a >> b >> c;
    if(a>0 && b>0 && c>0 && (a+b)>c && (a+c)>b && (b+c)>a){
        float a2 = a*a, b2 = b*b, c2 = c*c;
        p = (a + b + c)/2;
        s = sqrt(p*(p-a)*(p-b)*(p-c));
        if (a>b) swap(a, b);
        if (b>c) swap(b, c);
        if (a>c) swap(a, c);
        if((a2 + b2)>c2){
            cout << "Tam giac nhon" << endl;
            cout << "Dien tich S = " << s << endl;
        }else if((a2 + b2)<c2){
            cout << "Tam giac tu" << endl;
            cout << "Dien tich S = " << s << endl;
        }else{
            cout << "Tam giac vuong" << endl;
            cout << "Dien tich S = " << s << endl;
        }
    }else{
        cout << "Tam giac khong ton tai" << endl;
    }
    system("pause");
    return 0;
}
