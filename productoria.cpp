#include <iostream>

using namespace std;

// realizar un algoritmo que genere una productoria con la siguiente formula (i*(i+1))

void productoria(int n){
	double resultado=1;
	for(int i=1;i<=n;i++){
		resultado=resultado*(i*(i+1));
	}
	cout<<"el resultado es: "<<resultado<<endl;
	
}

int main(){
	
	int n;
	cout<<"digite n: "<<endl;
	cin>>n;
	
	productoria(n);
	
}
