#include <iostream>
using namespace std;
//Bai tap 1: Tinh tong cac so tu 1 den n
int bai1(int n){
	int tong = 0;
	for(int i = 1; i <= n; i++){
		tong = tong + i;
	}	
	return tong;
}
void runBai1(){
	int n;
	cin >> n;
	cout << "S = 1 + 2 + ... + " << n << " = " << bai1(n);
}
int main(){
	runBai1();
	return 0;
}
void menu() {
    cout << "Bai tap 1: Tinh tong cac so tu 1 den n\n";
    cout << "Bai tap 2: Tinh tong cac so chan tu 1 den n\n";
    cout << "Bai tap 3: Tinh tong cac so le tu 1 den n\n";
    cout << "Bai tap 4: Tinh tong cac so tu m den n\n";
    cout << "Bai tap 5: Tinh tong cac so chan trong khoang m den n\n";
    cout << "Bai tap 6: Tinh tong cac so chia het cho x trong khoang m den n\n";
    cout << "Bai tap 7: Tinh tong cac boi cua x tu 1 den n\n";
    cout << "Bai tap 8: Tinh tong cac so chia het cho x hoac y tu 1 den n\n";
    cout << "Bai tap 9: Tinh tong cac so chia het cho 3 tu 1 den n\n";
    cout << "Bai tap 10: Tinh T(n) = 1*2*3*...*n\n";

    cout << "Bai tap 11: Tinh T(x,n) = x^n\n";
    cout << "Bai tap 12: Tinh tong cac binh phuong tu 1^2 den n^2\n";
    cout << "Bai tap 13: Tinh tong cac lap phuong tu 1^3 den n^3\n";
    cout << "Bai tap 14: Tinh tong cac binh phuong tu 1^2 den (2n)^2\n";
    cout << "Bai tap 15: Tinh tong cac lap phuong le tu 1^3 den (2n-1)^3\n";

    cout << "Bai tap 16: Tinh tong cac can bac hai tu 1 den n\n";
    cout << "Bai tap 17: Tinh tong S(n) = 1 + 1/2 + 1/3 + ... + 1/n\n";
    cout << "Bai tap 18: Tinh tong S(n) = 1/2 + 1/4 + ... + 1/(2n)\n";
    cout << "Bai tap 19: Tinh tong S(n) = 1 + 1/3 + ... + 1/(2n-1)\n";
    cout << "Bai tap 20: Tinh tong S(n) = 1/(1*2) + ... + 1/(n*(n+1))\n";
    cout << "Bai tap 21: Tinh tong S(n) = 1/2 + 2/3 + ... + n/(n+1)\n";
    cout << "Bai tap 22: Tinh tong S(n) = 1/2 + 3/4 + ... + (2n+1)/(2n+2)\n";
    cout << "Bai tap 23: Tinh tong S(n) = 1/(1^2) + 1/(2^2) + ... + 1/(n^2)\n";
    cout << "Bai tap 24: Tinh tong S(n) = 1/(1^2+1) + ... + 1/(n^2+1)\n";

    cout << "Bai tap 25: Tinh tong cac giai thua tu 1! den n!\n";
    cout << "Bai tap 26: Tinh S(n) = 1 + 1*2 + 1*2*3 + ... + 1*2*...*n\n";
    cout << "Bai tap 27: Tinh S(n) = (1*2) + (1*2*3) + ... + (1*2*...*n)\n";
    cout << "Bai tap 28: Tinh S(n) = n! + (n-1)! + ... + 1!\n";
    cout << "Bai tap 29: Tinh S(n) = 1/1! + 1/2! + ... + 1/n!\n";
    cout << "Bai tap 30: Tinh S(n) = 1/(1!)^2 + ... + 1/(n!)^2\n";
    cout << "Bai tap 31: Tinh S(n) = 1^2/1! + 2^2/2! + ... + n^2/n!\n";
    cout << "Bai tap 32: Tinh S(n) = 1^3/1! + 2^3/2! + ... + n^3/n!\n";
    cout << "Bai tap 33: Tinh S(n) = 1/2! + 2/3! + ... + n/(n+1)!\n";
    cout << "Bai tap 34: Tinh S(n) = 1/(1!*2!) + ... + 1/(n!*(n+1)!)\n";

    cout << "Bai tap 35: Tinh S(n) = x + x^2 + x^3 + ... + x^n\n";
    cout << "Bai tap 36: Tinh S(n) = x^2 + x^4 + ... + x^(2n)\n";
    cout << "Bai tap 37: Tinh S(n) = x + x^3 + x^5 + ... + x^(2n-1)\n";
    cout << "Bai tap 38: Tinh S(n) = x - x^2 + x^3 - ... + (-1)^(n+1)*x^n\n";
    cout << "Bai tap 39: Tinh S(n) = x - x^3 + x^5 - ... + (-1)^(n+1)*x^(2n-1)\n";
    cout << "Bai tap 40: Tinh S(n) = x + x^2/2! + ... + x^n/n!\n";
    cout << "Bai tap 41: Tinh S(n) = x/1! + x^2/2! + ... + x^n/n!\n";
    cout << "Bai tap 42: Tinh chuoi Taylor rut gon x + x^2/2! + ... + x^n/n!\n";

    cout << "Bai tap 43: Tinh S(n) = 1 - 2 + 3 - 4 + ... + (-1)^(n+1)*n\n";
    cout << "Bai tap 44: Tinh tong cac so binh phuong voi dau + - xen ke\n";
    cout << "Bai tap 45: Tinh tong cac can bac hai voi dau + - xen ke\n";
    cout << "Bai tap 46: Tinh tong cac binh phuong va can bac hai voi dau + - xen ke\n";
    cout << "Bai tap 47: Tinh tong cac binh phuong chia het cho x voi dau + - xen ke\n";
    cout << "Bai tap 48: Tinh tong cac can bac hai cua cac so chia het cho x voi dau + - xen ke\n";

    cout << "Bai tap 49: Tinh S(n) = 1/(1*3) + 1/(3*5) + ... + 1/((2n-1)*(2n+1))\n";
    cout << "Bai tap 50: Tinh S(n) = 1/(1*2*3) + ... + 1/(n*(n+1)*(n+2))\n";
    cout << "Bai tap 51: Tinh S(n) = (1*3)/(2*4) + (3*5)/(4*6) + ...\n";
    cout << "Bai tap 52: Tinh S(n) = 1/1 + (1+2)/(1*2) + ... + (1+2+...+n)/n!\n";
    cout << "Bai tap 53: Tinh S(n) = 1/(1*2*...*n) + ... + 1/(n*...*(2n-1))\n";

    cout << "Bai tap 54: Tinh tong cac so mu tu 1 den n\n";
    cout << "Bai tap 55: Tinh tong cac can bac hai va giai thua tu 1 den n\n";
    cout << "Bai tap 56: Tinh S(n) = 1*2 + 2*3 + ... + n*(n+1)\n";
    cout << "Bai tap 57: Tinh S(n) = x + (x+1)^2 + (x+2)^3 + ... + (x+n)^(n+1)\n";
    cout << "Bai tap 58: Tong hop cac bieu thuc ket hop nhieu phep toan\n";
    cout << "Bai tap 59: Dong goi va toi uu hoa cac bai toan thanh ham\n";

    cout << "\n======================================\n";
}