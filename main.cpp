/*8. Mostrar en pantalla True o False si la edad ingresada por dos usuarios es la misma. */
#include <iostream>
using namespace std;

int main() {
 float n1, n2;
 bool salida;
    cout << "\nMuestra en pantalla True o False si la edad ingresada por dos usuarios es la misma: ";//función del Prográma
    cout << "\nIngrese la edad del usuario #1: ";
    cin >> n1 ;
        cout << "\nIngrese la edad del usuario #2: ";
    cin >> n2 ;
      if (n1==n2){
       cout << "¿La edad del usuario #1 y #2 es la misma? : " <<"True";
   return 0;
  }
    cout << "¿La edad del usuario #1 y #2 es la misma? : " <<"False";
    return 0;
} 