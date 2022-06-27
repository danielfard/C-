#include <iostream>

using namespace std;

// halle el mayor y el menor de dos edades

bool pregunta(int edad_,int mayor_){
	if(edad_>mayor_){
			return true;
	}	
	return false;
}

int hallar_mayor_menor(){
	int mayor,menor;
	int edad;
	
	cout<<"ingrese la edad: "<<endl;
	cin>>edad;
	mayor=edad;
	menor=edad;
	
	while(edad!=-1){
		
		if(pregunta(edad,mayor)){
			mayor=edad;
		}
		
		if(edad<menor){
			menor=edad;
		}
				
		cout<<"ingrese la edad: "<<endl;
		cin>>edad;
	
	}
		
	cout<<"la edad mayor es: "<<mayor<<endl;
	cout<<"la edad menor es: "<<menor<<endl;
	return mayor;
}
int main(){
	
	hallar_mayor_menor();
}
