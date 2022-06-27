#include <iostream>
#include <cmath>
#define MAX 3

using namespace std;

// rellenar una matriz con un maximo, hallar el determinante y el cofactor

void mostrar_matriz(int matriz[][MAX], int orden);
int determinante(int matriz[][MAX], int orden);
int cofactor(int matriz[][MAX], int orden, int fila, int columna);

int main()
{
   int matriz[MAX][MAX];
   int orden=3;
   
   
   while (orden < 0 || orden > MAX) {
      cout << "\nEl orden de la matriz no puede ser mayor que " << MAX << endl;
      cout << "Ingrese nuevamente el orden de la matriz: ";
      cin >> orden;
   }
   
   cout << "\nIngrese los elementos de la matriz:\n\n";
   for (int i = 0; i < orden; i++) {
      for (int j = 0; j < orden; j++) {
      	cout<<"ingrese el elemento en la posicion: "<<i<<" , "<<j<<endl;
        cin >> matriz[i][j];
      }
   }

   cout << "\nMostrando la matriz ingresada:\n";
   for (int i = 0; i < orden; i++) {
      for (int j = 0; j < orden; j++) {
         cout << "\t" << matriz[i][j];
      }
      cout << "\n";
   }
   
   cout << "\nEl determinante es: " << determinante(matriz, orden) << endl;

   cin.get();
   cin.get();
   return 0;
}

int determinante(int matriz[][MAX], int orden)
{
   int det = 0.0;
   
   if (orden == 1) {
      det = matriz[0][0];
   } else {
      for (int j = 0; j < orden; j++) {
         det = det + matriz[0][j] * cofactor(matriz, orden, 0, j);
      }
   }
   
   return det;
}


int cofactor(int matriz[][MAX], int orden, int fila, int columna)
{
   int submatriz[MAX][MAX];
   int n = orden - 1;
   
   int x = 0;
   int y = 0;
   for (int i = 0; i < orden; i++) {
      for (int j = 0; j < orden; j++) {
         if (i != fila && j != columna) {
            submatriz[x][y] = matriz[i][j];
            y++;
            if (y >= n) {
               x++;
               y = 0;
            }
         }
      }
   }
   
   return pow(-1.0, fila + columna) * determinante(submatriz, n);
}
