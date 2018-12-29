#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int A=0, B, C, jumlah=0, i, n;
	
	cout<<"Menghitung Jumlah Deret Bilangan";
	cout<<"........................................";
	cout<<"Masukkan Bilangan Awal : ";
	cin>>A;
	cout<<"Masukkkan Beda : ";
	cin>>B;
	cout<<"MAsukkan Jumlah Sampai Deret Ke-n : ";
	cin>>n;
	
	cout<<"Deret Ke-"<<n<<" : ";
	cout<<A<<",";
	jumlah=jumlah+A;
	for(i=0; i<n-1; i++){
		C=A+B;
		A=C;
		cout<<C<<",";
		jumlah=jumlah+C;
	}
	
	cout<<"\njumlah Deret Ke-"<<n<<" : ";
	cout<<jumlah;
	
	getch();
	return 0;
}
