#include <iostream>
#include<math.h>
using namespace std;

// al digitar el salario del mes y el interes bancario, saber el incremento de este sueldo en 12 meses

int main(){
	
	double salario_mensual;
	double interes_bancario;
	int cta_sueldo[12];
	
	cout<<"digite su salario del primer mes:"<<endl;
	cin>>salario_mensual;
	cout<<"digite el interes bancario"<<endl;
	cin>>interes_bancario;
	cta_sueldo[0]=salario_mensual;
	int i=1;
	while(i<12){
		cta_sueldo[i]=round(cta_sueldo[i-1]+(cta_sueldo[i-1]*interes_bancario));
		i++;
	}
	for(int i=0;i<12;i++){
		cout<<cta_sueldo[i]<<" ";
	}
		
}
