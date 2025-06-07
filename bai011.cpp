// code: Đặng Quang Huy
// Viết trò chơi bao - đá - kéo với luật chơi: bao thắng đá, đá thắng kéo, kéo thắng bao. Người dùng nhập vào một trong ba ký tự b (bao), d (đá), k (kéo); máy tính sinh ngẫu nhiên một trong ba ký tự trên, thông báo kết quả chơi.
// Ví dụ:
//      Nhap ky tu (b-d-k), 0 de thoat: b
//      Computer: d
//      Ty so human - computer: 1 - 0
//      Nhap ky tu (b-d-k), 0 de thoat: k
//      Computer: d
//      Ty so human - computer: 1 - 1
//      Nhap ky tu (b-d-k), 0 de thoat: 0
// Sinh số ngẫu nhiên từ a đến b
//      Cú pháp : rand() % (b - a + 1) + a

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    char human;
    char may;
    int diemMay = 0, diemHuman = 0;
    cout << "Tro choi bao - da - keo: b (bao), d (da), k (keo)\n";
    while(true){
        cout << "Nhap ky tu (b-d-k), 0 de thoat: ";
        cin >> human;
        if(human == '0') break;
        int bdk = rand()%3+1;
        switch (bdk){
            case 1:
                cout << "Computer: b\n";
                may = 'b';
                break;
            case 2:
                cout << "Computer: d\n";
                may = 'd';
                break;
            case 3:
                cout << "Computer: k\n";
                may = 'k';
                break;
        }
        if((human == 'b' && may == 'b')||(human == 'd' && may == 'd')||(human == 'k' && may == 'k')) diemHuman += 1, diemMay += 1;
        if((human == 'b' && may == 'd')||(human == 'k' && may == 'b')||(human == 'd' && may == 'k')) diemHuman += 1;
        if((human == 'd' && may == 'b')||(human == 'b' && may == 'k')||(human == 'k' && may == 'd')) diemMay += 1;
        cout << "Ty so human - computer: " << diemHuman << " - " << diemMay << endl;
    }
    return 0;
}