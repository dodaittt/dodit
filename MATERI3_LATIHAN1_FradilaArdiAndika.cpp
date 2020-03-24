#include <iostream>
using namespace std;

int main()
{
	int nilai;
	
	cout<<"Berapa Nilai Anda :";
	cin>>nilai;
	
	if(nilai >= 75){
	
		cout<<"...................................."<<endl;
		cout<<"ANDA LULUS"<<endl;
	}
	else{
		cout<<"...................................."<<endl;
		cout<<"ANDA TIDAK LULUS"<<endl;
	}
	
	system("pause");
	return 0;
}
