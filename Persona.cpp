#include <iostream>
#include <string>
using namespace std;

// crear una clase de tipo Persona  con dos atributos edad y nombre, tambien con contructor, destructor y dos metodos publicos comunicar y leer

class Persona{
	private:
		int edad;
		string nombre;
	public:
		Persona();
		~Persona();
		void comunicar();
		void leer();
};


