#include <iostream>
#include <cmath>
using namespace std;
//Bai tap 1: Kiem tra so nguyen to -> T/F hoac la 1/0
int bai1(int n){
    if(n < 2){
        return 0;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}
//Bai tap 2: Kiem tra so hoan hao
bool bai2(int n) {
   if(n <2 ){
   	return false;
   }    
   int tong = 1;
   for (int i = 2; i*i <=n; i++ ){
   		if(n%i == 0){
   			tong = tong + i; //tong+=i;
   			if(i != n/i){
   				tong += n/i;
			   }
		}
   } 
   return tong == n;
}
void runBai12(){
	int n;
	cin >> n;
	if(bai2(n)){
		cout << n << " la so hoan hao";
	}else {
		cout << n << " khong la so hoan hao";
	}
}
//Bai tap 13: Kiem tra so chinh phuong -> 9 = 3*3 
bool bai13(int n){
	int can = sqrt(n);
	return can*can == n;
}
bool bai13c2(int n){
	if(n < 0) return false;
	for (int i = 0; i* i <= n; i++){
		if(i*i == n){
			return true;
		}
	}
	return false;
}
void runBai13(){
	int n;
	cin >> n;
//	if(bai2(n)){
//		cout << n << " la so chinh phuong";
//	}else {
//		cout << n << " khong la so chinh phuong";
//in ra cac so chinh phuong tu 1 -> n
	for (int i = 1; i <= n; i++){
			if(bai13(i)){
				cout << i << " ";
			}	
	}
	
}
int main() {
	runBai12();
	runBai13();

    return 0;
}
void menu(){
	cout << "Bai tap 1: Kiem tra so nguyen to\n";
    cout << "Bai tap 2: Kiem tra so hoan hao\n";
    cout << "Bai tap 3: Kiem tra so Armstrong\n";
    cout << "Bai tap 4: Tinh uoc chung lon nhat (GCD)\n";
    cout << "Bai tap 5: Tinh boi chung nho nhat (LCM)\n";
    cout << "Bai tap 6: Kiem tra so doi xung (Palindrome)\n";
    cout << "Bai tap 7: Tinh tong cac uoc cua so\n";
    cout << "Bai tap 8: Kiem tra so Fibonacci\n";
    cout << "Bai tap 9: Kiem tra so chinh phuong\n";
    cout << "Bai tap 10: Tinh so luong chu so trong mot so\n";
    cout << "Bai tap 11: Tinh tong cac chu so cua so\n";
    cout << "Bai tap 12: Tinh so luy thua\n";
    cout << "Bai tap 13: Kiem tra so khuyet thieu\n";
    cout << "Bai tap 14: Kiem tra so nguyen to Mersenne\n";
    cout << "Bai tap 15: Kiem tra so gan nguyen to\n";
    cout << "Bai tap 16: Kiem tra so hoan vi\n";
    cout << "Bai tap 17: Kiem tra so Lychrel\n";
    cout << "Bai tap 18: Tinh phan tu tong quat cua day Fibonacci\n";
    cout << "Bai tap 19: Kiem tra so Abundant\n";
    cout << "Bai tap 20: Kiem tra so Sphenic\n";
    cout << "Bai tap 21: Tinh bac cua so\n";
    cout << "Bai tap 22: Kiem tra so prime factor\n";
    cout << "Bai tap 23: Kiem tra so hanh phuc\n";
    cout << "Bai tap 24: Tim uoc chung lon nhat va boi chung nho nhat\n";
    cout << "Bai tap 25: Tinh so nghich dao cua mot so\n";
    cout << "Bai tap 26: Kiem tra so strong\n";
    cout << "Bai tap 27: Kiem tra so ky la\n";
    cout << "Bai tap 28: Tim so nguyen to nho hon n\n";
    cout << "Bai tap 29: Tinh tong cac so nguyen to duoi n\n";
    cout << "Bai tap 30: Kiem tra so hop so\n";
    cout << "Bai tap 31: Kiem tra so nguyen to co phan tu khac\n";
    cout << "Bai tap 32: Kiem tra so phan ky\n";
    cout << "Bai tap 33: Tim so hoan hao nho nhat lon hon n\n";
    cout << "Bai tap 34: Kiem tra so Amicable\n";
    cout << "Bai tap 35: Tinh so uoc cua so\n";
    cout << "Bai tap 36: Kiem tra so hoan vi so nguyen to\n";
    cout << "Bai tap 37: Kiem tra so toi uu\n";
    cout << "Bai tap 38: Doi so tu he thap phan sang nhi phan\n";
    cout << "Bai tap 39: Doi so tu he nhi phan sang thap phan\n";
    cout << "Bai tap 40: Doi so tu he thap phan sang he co so khac\n";
    cout << "Bai tap 41: Doi so tu he co so khac sang he thap phan\n";
    cout << "\n======================================\n";
}