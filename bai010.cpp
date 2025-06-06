//code: Đặng Quang Huy
// Số bảo hiểm xã hội của Canada (SIN - Canadian Social Insurance Number) là một số có 9 chữ số, được kiểm tra tính hợp lệ như sau:
// - Số phải nhất (vị trí là 1, tính từ phải sang), là số kiểm tra (check digit).
// - Trọng số được tính từ phải qua trái (không tính check digit), bằng s1 + s2:
// + s1 là tổng các số có vị trí lẻ.
// + Các số có vị trí chẵn nhân đôi. Nếu kết quả nhân đôi có hai chữ số thì kết quả là
// tổng của hai chữ số này. s2 là tổng các kết quả.
// SIN hợp lệ có tổng trọng số với số kiểm tra chia hết cho 10.
// Ví dụ: 
//      SIN 193456787
//      - Số kiểm tra là 7 (ngoài cùng).
//      - Trọng số là tổng của s1 và s2, với:
//      +) s1 = 1 + 3 + 5 + 7 = 16
//      +) Các số có vị trí chẵn nhân đôi: (9 * 2) (4 * 2) (6 * 2) (8 * 2) => 18 8 12 16
//      s2 = (1 + 8) + 8 + (1 + 2) + (1 + 6) = 27
//      Trọng số bằng s1 + s2 = 16 + 27 = 43.
//      Vì tổng trọng số với số kiểm tra 43 + 7 = 50 chia hết cho 10 nên số SIN hợp lệ.
//      Viết chương trình nhập một số SIN. Kiểm tra xem số SIN đó có hợp lệ hay không.
//      Nhập 0 để thoát.
// Ví dụ:
//      SIN (0 de thoat): 193456787
//      SIN hop le!
//      SIN (0 de thoat): 193456788
//      SIN khong hop le!
//      SIN (0 de thoat): 0

#include <iostream>
using namespace std;

int main(){
    unsigned long SIN;
    while(true){
        cout << "SIN (0 de thoat): ";
        cin >> SIN;
        if(SIN == 0) break;
        if(SIN < 100000000 || SIN > 999999999){
            cout << "SIN khong hop le!\n";
            continue;
        }
        int checkDigit = SIN % 10;
        SIN /= 10;
        int digits[8];
        for(int i = 7; i >= 0; --i){
            digits[i] = SIN % 10;
            SIN /= 10;
        }
        int s1 = 0, s2 = 0;
        for(int i = 0; i < 8; ++i){
            if((i + 1) % 2 == 1){
                // vị trí lẻ (1,3,5,7)
                s1 += digits[i];
            }else{
                // vị trí chẵn (2,4,6,8)
                int doubled = digits[i] * 2;
                if(doubled >= 10){
                    s2 += (doubled / 10) + (doubled % 10);
                }else{
                    s2 += doubled;
                }
            }
        }
        int total = s1 + s2 + checkDigit;
        if(total % 10 == 0){
            cout << "SIN hop le!\n";
        }else{
            cout << "SIN khong hop le!\n";
        }
    }return 0;
}
