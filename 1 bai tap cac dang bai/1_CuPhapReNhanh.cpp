#include <iostream>
#include <cmath>
using namespace std;

void menu() {
    cout << "Bai tap 1: Xep loai hoc sinh theo diem so\n";
    cout << "Bai tap 2: Xac dinh loai hinh tam giac\n";
    cout << "Bai tap 3: Giai phuong trinh bac hai\n";
    cout << "Bai tap 4: Kiem tra nam nhuan\n";
    cout << "Bai tap 5: Nhập vào một số nguyên, kiểm tra số đó là số âm chẵn, âm lẻ, dương chẵn hay dương lẻ?\n";
    cout << "Bai tap 6: Kiem tra thang co 31 ngay\n";
    cout << "Bai tap 7: Tinh so ngay trong thang\n";
    cout << "Bai tap 8: Xac dinh mua trong nam\n";
    cout << "Bai tap 9: Kiem tra ngay trong thang 2\n";
    cout << "Bai tap 10: Xac dinh ky hoc FPT\n";
    cout << "\n======================================\n";
}
//type tenHam(type thamso1,type thamso2){} -> ham co tham so co gia tri tra ve
string loaiTamGiac(int a, int b, int c) {
    if (a == b && b == c) {
        return "Tam giac deu";
    }
    else if (a*a + b*b == c*c ||b*b + c*c == a*a ||a*a + c*c == b*b) {
        return "Tam giac vuong";
    }
    else if (a != b && b != c && a != c) {
        return "Tam giac nhon";
    }
    else {
        return "Tam giac tu";
    }
}
// chan le -> string
string kiemTraChanLe(int n){
	if(n % 2 != 0){
		return "le"
	}else {
		return "chan"
	}
}

//sqrt(n) -> can bac 2 cua n <=> pow(n,1.0/2)
//cbrt(n) -> can bac 3 cua n <=> pow(n,1.0/3)
// can bac 4 -> pow(n,1.0/4)
void giaiPhuongTrinhBacHai(double a, double b, double c) {
    double delta = b*b - 4*a*c;

    if (delta > 0) {
        double x1 = (-b + sqrt(delta)) / (2*a);
        double x2 = (-b - sqrt(delta)) / (2*a);

        cout << "Phuong trinh co 2 nghiem phan biet:\n";
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (delta == 0) {
        double x = -b / (2*a);

        cout << "Phuong trinh co nghiem kep:\n";
        cout << "x = " << x << endl;
    }
    else {
        cout << "Phuong trinh vo nghiem\n";
    }
}

int main() {
    menu();
    int a, b, c;
    cout << loaiTamGiac(a, b, c) << endl;
    double hsa, hsb, hsc;
    cin >> hsa >> hsb >> hsc;

    giaiPhuongTrinhBacHai(hsa, hsb, hsc);

    return 0;
}