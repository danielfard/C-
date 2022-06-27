#include <iostream>

using namespace std;

/*Crear un programa que muestre el siguiente proceso:
Cargar una cadena de caracteres en un vector de máximo 30 caracteres, determinar
cuántas mayúsculas, cuantas minúsculas, se digitaron en la cadena de caracteres*/

int main(){
	
	char vector[30];
	for(int i=0;i<sizeof(vector);i++){
		vector[i]='*';
	}
	cout<<"digite la cadena: "<<endl;
	cin.getline(vector,30);
	
	
	char cadena[30];
	for(int i=0;i<sizeof(cadena);i++){
		cadena[i]='*';
	}
	bool sw=false;
	int h=0;
	for(int i=0;i<sizeof(cadena);i++){
		for(int j=i+1;j<sizeof(cadena);j++){
			for(int k=0;k<sizeof(cadena);k++){
				
				if(vector[i]==cadena[k] && vector[i]!='*'){
							sw=true;
				}	
			}
			if(!sw && vector[i]!=' ' && vector[i]!='*'){
				cadena[h]=vector[i];
				h++;
			}
			sw=false;
		}		
	}
	
	
	int letra_veces=0;
	int vector_veces[sizeof(cadena)];
	for (int i=0;i<sizeof(cadena);i++){
		vector_veces[i]=0;
		
	}
	
	for(int i=0;i<sizeof(cadena);i++){
		for(int j=0;j<sizeof(vector);j++){
			if(cadena[i]==vector[j] && vector[j]!='*'){
					letra_veces++;
			}
		}
		vector_veces[i]=letra_veces;
		letra_veces=0;	
	}

	char mayusculas[27]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','Ñ','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	bool mayus=false,vocal=false;
	cout<<endl;
	for (int i=0;i<sizeof(cadena);i++){
		if(cadena[i]>'A' && cadena[i]<'Z' || cadena[i]>'a'  && cadena[i]<'z'){
			if(cadena[i]>='A' && cadena[i]<='Z'){
				mayus=true;
			}
			if(cadena[i]=='A' || cadena[i]=='a'|| cadena[i]=='E'|| cadena[i]=='e'|| cadena[i]=='I'|| cadena[i]=='i'|| cadena[i]=='O'|| cadena[i]=='o'|| cadena[i]=='U'|| cadena[i]=='u'){
				vocal=true;
			}
		
			cout<<cadena[i]<<" -- "<<vector_veces[i]<<" -- ";
		
			if(mayus==true){
				cout<<"Mayuscula";
			}else{
				cout<<"Minuscula";
			}
			cout<<" -- ";
			if(vocal==true){
				cout<<"Vocal";
				
			}else{
				cout<<"Consonante";
			}
			cout<<endl;
			vocal=false;
			mayus=false;
		}
		
		
	}
	
}
