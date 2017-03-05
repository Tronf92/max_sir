#include <iostream>
using namespace std;


int main(){
	
	int v[50],i,par=0,impar=0,n;
	cout << "Introduceti un nr:" << endl;
	cin >> n;
	for(i=0;i<n;i++){
		cout << "v[" << i << " ]= ";
		cin >> v[i];
	}

	for(i=0;i<n;i++){
		if(v[i]%2==0)
			par++;
		else 
			impar++;
	}
	cout << "Am citit " << n << " numere din care " << endl;
	cout << par << " sunt pare si " << impar << " sunt impare!" << endl;

	


	system("pause");
	return 0;

}