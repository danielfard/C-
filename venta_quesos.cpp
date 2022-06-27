#include <iostream>

using namespace std;


//categorizar precios de quesos y domicilios, al final se debe mostrar le total a pagar

int main(){
	
	char categoria_de_queso;
	int precio_domi,contador=0,total_a_pagar=0,kilos;
	
	while(contador<5){
		cout<<"digite la categoria del queso que desea llevar: "<<endl;
		cin>>categoria_de_queso;
		
		cout<<"digite el numero kilogramos que desea llevar tu queso: "<<endl;
		cin>>kilos;
		
		if(kilos<20){
			precio_domi=15000;
		}else{
			precio_domi=30000;
		}
			
		switch(categoria_de_queso){
			case 'c':
				total_a_pagar=kilos*16000;
				break;
			case 'm':
				total_a_pagar=kilos*24500;
				break;
			case 'd':
				total_a_pagar=kilos*18000;
				break;
			case 't':
				total_a_pagar=kilos*12000;
				break;
		}
		cout<<"%%%%%%%%%%%%%%%%%%%%%%%% RECIBO DE PAGO %%%%%%%%%%%%%%%%%%%%%%%"<<endl;
		cout<<"%%%% CATEGORIA DE QUESO ..................... "<<categoria_de_queso<<" %%%%%%%%%%%%%%%"<<endl;
		cout<<"%%%% CANTIDAD EN KILOGRAMO .................. "<<kilos<<" %%%%%%%%%%%%%%%"<<endl;
		cout<<"%%%% VALOR TOTAL SIN TRASPORTE ............ "<<total_a_pagar<<" %%%%%%%%%%%%%"<<endl;
		cout<<"%%%% VALOR TRASPORTE ...................... "<<precio_domi<<" %%%%%%%%%%%%%"<<endl;
		cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
		cout<<"%%%% VALOR A PAGAR TOTAL .................. "<<total_a_pagar+precio_domi<<" %%%%%%%%%%%%%"<<endl;
		cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
		cout<<endl;	
	
	
		contador++;	
	}
}
