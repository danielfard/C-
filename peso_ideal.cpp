#include <iostream>

using namespace std;

// realice un algoritmo que ingrese el nombre del niño, la edad y el peso y diga si esta en el peso ideal, por debajo o por encima.


bool validar_edad(int edad){
	if(edad>=2 && edad<=6){
		return true;
	}
	return false;
}

double hallar_peso_ideal(int edad){
	return (edad*2)+8.5;
}

void validar_peso_ideal(double peso, double peso_ideal){
	if(peso>peso_ideal){
		cout<<"esta por encima del peso ideal..."<<endl;
	}else{
		if(peso<peso_ideal){
			cout<<"esta por debajo del peso ideal..."<<endl;
		}else{
			cout<<"esta en su peso ideal..."<<endl;
		}
	}
}

void mostrar_informacion(string nombre,int edad, double peso, double peso_ideal){
	cout<<"el niño se llama: "<<nombre<<endl;
	cout<<"el niño tiene la edad de: "<<edad<<" años"<<endl;
	cout<<"el niño pesa actualmente: "<<peso<<" kg"<<endl;
	cout<<"el peso ideal del niño deberia ser: "<<peso_ideal<<" kg"<<endl;
}

int main(){
	
	string nombre;
	int edad;
	double peso,peso_ideal;
	
	cout<<"ingrese el nombre del niño, los espacios son guion bajo (_) ej: alfredo_guiterrez_fernandez"<<endl;
	cin>>nombre;
	cout<<"ingrese la edad del niño: "<<endl;
	cin>>edad;
	cout<<"ingrese el peso del niño: "<<endl;
	cin>>peso;
	
	if(validar_edad(edad)){
		
		peso_ideal=hallar_peso_ideal(edad);
		
		mostrar_informacion(nombre,edad,peso,peso_ideal);
		
		validar_peso_ideal(peso,peso_ideal);
	
		
	}else{
		cout<<"edad no valida..."<<endl;
	}		
}
