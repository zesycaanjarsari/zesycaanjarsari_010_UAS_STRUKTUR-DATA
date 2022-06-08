#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main()
{
    char kota1,kota2,kota3,kota4,kota5;
    int jumlah,panjang, hasil1,hasil2,hasil3,hasil4,hasil5,hasil6,hasil7;
    
    cout<<"		_ZESYCA DWI ANJARSARI_"<<endl;
    cout<<"		_21091397010_"<<endl;
     
    cout<<endl;
    
    cout<<"* Jumlah kota yang berada di kerajaan Britan : "<< endl;
    cin>>jumlah;
    
    // deklarasi vertex
    // menampilkan masing-masing vertex
    cout<<"Kota Pertama : ";
    cin>>kota1;
    cout<<"Kota Kedua   : ";
    cin>>kota2;
    cout<<"Kota Ketiga  : ";
    cin>>kota3;
    cout<<"Kota Keempat : ";
    cin>>kota4;
	cout<<"Kota kelima  : ";
	cin>>kota5;
	
	cout<<endl;
	
	// deklarasi edge
	// menampilkan setiap edge yang terjadi
	cout<<"* Sisi-sisinya adalah : "<<endl<<endl;
    cout<<kota1<<kota2<<",";
    cout<<kota1<<kota4<<",";
    cout<<kota1<<kota5<<",";
    cout<<kota2<<kota3<<",";
    cout<<kota3<<kota5<<",";
    cout<<kota3<<kota4<<",";
    cout<<kota4<<kota5<<endl<<endl;
	
	// deklarasi weight
	// menampilkan panjang jalan yang menghubungkan vertex
	cout<<"* Panjang jalan antar kota : "<<endl;
	cout<<"panjang "<<kota1<<" ke "<<kota2<< ": "; cin>> hasil1;
	cout<<"panjang "<<kota1<<" ke "<<kota4<< ": "; cin>> hasil2;
	cout<<"panjang "<<kota1<<" ke "<<kota5<< ": "; cin>> hasil3;
	cout<<"panjang "<<kota2<<" ke "<<kota3<< ": "; cin>> hasil4;
	cout<<"panjang "<<kota3<<" ke "<<kota5<< ": "; cin>> hasil5;
	cout<<"panjang "<<kota3<<" ke "<<kota4<< ": "; cin>> hasil6;
	cout<<"panjang "<<kota4<<" ke "<<kota5<< ": "; cin>> hasil7;
	
	cout<<endl;
	
	cout<<"* seluruh jalan yang ada dalam kerajaan britan dan panjang jalannya : "<< endl;
	cout<<"("<<kota1<<","<<kota2<<","<<hasil1<<") ";
	cout<<"("<<kota1<<","<<kota4<<","<<hasil2<<") ";
	cout<<"("<<kota1<<","<<kota5<<","<<hasil3<<") ";
	cout<<"("<<kota2<<","<<kota3<<","<<hasil4<<") ";
	cout<<"("<<kota3<<","<<kota5<<","<<hasil5<<") ";
	cout<<"("<<kota3<<","<<kota4<<","<<hasil6<<") ";
	cout<<"("<<kota4<<","<<kota5<<","<<hasil7<<") ";
	
	cout<<endl<<endl;
	
	cout<<"* kota tempat pedagang sekarang berada : "<<endl<<endl;
	cout<<kota1;
	
	cout<<endl<<endl;
	
	cout<<"* kota yang diserang naga : "<<endl<<endl;
	cout<<kota3; 
	
	cout<<endl<<endl;
	
	cout<<"* kota yang memiliki kastil : "<<endl<<endl;
	cout<<kota5;
	
	cout<<endl<<endl;
		
	cout<<"* jalur yang paling cepat ditempuh : "<<endl<<endl;
	cout<<kota1<<"-"<<kota4<<"-"<<kota5<<endl;
	
	cout<<endl<<endl;
	
	cout<< "* dengan jarak : "<<endl<<endl;
	cout<<hasil2+hasil7<<endl<<endl;
	
	
	getch();
	return 0;
}
