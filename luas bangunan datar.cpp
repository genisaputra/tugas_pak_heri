#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	float luas,phi=3.14;
	int pilih,p,l,a,t,b,r ;  //p=panjang, l=lebar, a=alas, t=tinggi, b=panjang busur trapesium, r=jari-jari
	cout<<"program switch-case"<<endl;
	cout<<"==================="<<endl;
	
	int i;
	do{
	 	system("cls");
	 
	cout<<"menghitung luas bangun datar"<<endl;
	cout<<"1.persegi panjang"<<endl;
	cout<<"2.segitiga"<<endl;
	cout<<"3.trapesium"<<endl;
	cout<<"4.jajar genjang"<<endl;
	cout<<"5.lingkaran"<<endl;
	cout<<"6.keluar"<<endl;
	
	cout<<"=> silahkan pilih : ";
	cin>>pilih;
	
	switch(pilih)
	{
		case 1:
				cout<<"menghitung luas persegi panjang"<<endl;
				cout<<"masukkan panjang : "; cin>>p;
				cout<<"masukkan lebar : "; cin>>l;
				luas = p*l;
				cout<<"luas persegi panjang = "<<luas;
				getch();
				break;
		
		case 2:
				cout<<"menghitung luas segitiga"<<endl;
				cout<<"masukkan alas : "; cin>>a;
				cout<<"masukkan tinggi : "; cin>>t;
				luas = a*t/2;
				cout<<"luas segitiga = "<<luas;
				getch();
				break;
				
		case 3:
				cout<<"menghitung luas trapesium"<<endl;
				cout<<"masukkan alas : "; cin>>a;
				cout<<"masukkan bubung : "; cin>>b;
				cout<<"masukkan tinggi : "; cin>>t;
				luas = (a+b)*t/2;
				cout<<"luas trapesium = "<<luas;
				getch();
				break;
				
		case 4:
				cout<<"menghitung luas jajar genjang"<<endl;
				cout<<"masukkan alas : "; cin>>a;
				cout<<"masukkan tinggi : "; cin>>t;
				luas = a*t;
				cout<<"luas jajar genjang = "<<luas;
				getch();
				break;
				
		case 5:
				cout<<"menghitung luas lingkaran"<<endl;
				cout<<"masukkan jari-jari : "; cin>>r;
				luas = phi*r*r;
				cout<<"luas lingkaran = "<<luas;
				getch();
				break;
				
		default:
				cout<<" 'TERIMA KASIH' :) "<<endl;
				exit(0);
				
	}
	}while(i != 0);
	
	cout<<endl<<endl;
}
