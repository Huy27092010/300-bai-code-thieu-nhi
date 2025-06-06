//code: Đặng Quang Huy
// Viết chương trình nhập vào tọa độ các đỉnh của tam giác ABC và của điểm M. xác định điểm M nằm trong, nằm trên cạnh hay nằm ngoài tam giác ABC.
// Công thức tính diện tích một tam giác theo tọa độ 3 đỉnh của nó:
//      S = ½|xAyB + xByC + xCyA - xAyC - xCyB - xByA|
// Biện luận bằng cách so sánh tổng diện tích: MAB + MBC + MCA với diện tích ABC.
// Ví dụ:
//      A(xA, yA): 0 5 
//      B(xB, yB): 3 0 
//      C(xC, yC): 4 7 
//      M(xM, yM): 2 6 
//      M nam tren canh tam giac ABC

#include <iostream>
#include <math.h>
#define eps 1e-10
using namespace std;

int main(){
    double xA, yA, xB, yB, xC, yC, xM, yM, sumAreas;
    double Sabc, Sabm, Sacm, Sbcm;
    cout << "Nhap toa do diem A(xA, yA): ";
    cin >> xA >> yA;
    cout << "Nhap toa do diem B(xB, yB): ";
    cin >> xB >> yB;
    cout << "Nhap toa do diem C(xC, yC): ";
    cin >> xC >> yC;
    Sabc = (1.0/2.0)*fabs((xA*yB)+(xB*yC)+(xC*yA)-(xA*yC)-(xC*yB)-(xB*yA));
    if(Sabc>eps){
        cout << "Nhap toa do diem M(xM, yM): ";
        cin >> xM >> yM;
        Sabm = (1.0/2.0)*fabs((xA*yB)+(xB*yM)+(xM*yA)-(xA*yM)-(xM*yB)-(xB*yA));
        Sacm = (1.0/2.0)*fabs((xA*yM)+(xM*yC)+(xC*yA)-(xA*yC)-(xC*yM)-(xM*yA));
        Sbcm = (1.0/2.0)*fabs((xM*yB)+(xB*yC)+(xC*yM)-(xM*yC)-(xC*yB)-(xB*yM));
        sumAreas = Sabm + Sacm + Sbcm;
        if((Sabc+eps)<sumAreas){ // Dien tich cac tam giac > ABC
            cout << "M nam ngoai tam giac ABC\n";
        }else if(fabs(Sabc-sumAreas)<eps){ // Dien tich cac tam giac ≤ ABC
            if(Sabm<eps||Sacm<eps||Sbcm<eps){ // M nam tren canh
                cout << "M nam tren canh cua tam giac ABC\n";
            }else{
                cout << "M nam trong tam giac ABC\n";
            }
        }
    }else{
        cout << "Ba diem A(" << xA << ", " << yA << ")" << " va B(" << xB << ", " << yB << ")" << " va C("<< xC << ", " << yC << ") thang hang voi nhau, khong tao thanh mot tam giac.\n";
    }
    cin.ignore(); cin.get();
    return 0;
}
