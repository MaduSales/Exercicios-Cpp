#include <iostream>
using namespace std;

int main(){
    
   int opcao;
   
   cout << "1. Saque\n";
   cout << "2. Extrato\n";
   cout << "3. Transferência\n";
   cout << "4. Depósito\n";
   cout << "5. PIX\n";
   cout << "Digite uma opção (número d 1 a 5): \n";
   
   cin >> opcao;
   
   switch(opcao){
       
       case 1:
       cout << "Opção selecionada: Saque\n";
       
       break;
       case 2:
       cout << "Opção selecionada: Extrato\n";
       
       break;
       case 3:
       cout << "Opção selecionada: Transferência\n";
       
       break;
       case 4:
       cout << "Opção selecionada: Depósito\n";
       
       break;
       case 5:
       cout << "Opção selecionada: PIX\n";
       
       break;
       default:
       cout << "Opção negada";
       
   }
    return 0;
}
