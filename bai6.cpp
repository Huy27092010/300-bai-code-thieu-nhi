// code: Đặng Quang Huy
// Viết chương trình nhập vào ba số nguyên. Hãy in ba số này ra màn hình theo thứ tự tăng dần và chỉ dùng tối đa một biến phụ.
// Ví dụ:
//      Nhap a, b, c: 5 3 4
//      Tang dan: 3 4 5

#include <iostream>
#define Swap(a,b) {int temp=a; a=b; b=temp;}
using namespace std;

int main(){
    int a, b, c; //so nguyen int
    cout << "Nhap ba so nguyen a, b, c: ";
    cin >> a >> b >> c;
    if(a>b){
        Swap(a,b);
    }if(a>c){
        Swap(a,c);
    }if(b>c){
        Swap(b,c);
    }
    cout << "Sap xep: " << a << " " << b << " " << c << endl;
    cin.ignore(); cin.get();
    return 0;
}