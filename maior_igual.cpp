#include <iostream>
using namespace std;

int main(){
    
   int numero1, numero2;
   
   cout << "Insira um número para ser comparado: ";
   cin >> numero1;
   
   cout << "Insira outro número: ";
   cin >> numero2;
   
   if (numero1 > numero2){
       cout << "O número " << numero1 << " é o maior.";
   }
   else if (numero1 < numero2){
        cout << "O número " << numero2 << " é o maior.";
   }
   else if (numero1 == numero2){
       cout << "Os dois números são iguais.";
   }
   else {
       cout << "Inválido";
   }

    return 0;
}
