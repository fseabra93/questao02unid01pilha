#include <iostream>
#include <vector>
using namespace std;

void imprime(vector<int>p);

void abertura();

int main() {

  vector<int>pilha;
  int valor;
  bool a;

  int op;

  abertura();

  do{
    cout << "Digite uma opção:" << endl;
    cout << "1 - Inserir elementos:" << endl
         << "2 - Deletar elementos da pilha;" << endl
         << "3 - Imprimir pilha atual:" << endl
         << "4 - Sair" << endl
         << ": ";

    cin >> op;

    switch(op){
      case 1:
        cout << "Insira um valor na pilha: ";
        cin >> valor;
        pilha.push_back(valor);
      break;
      
      case 2:
        a = pilha.empty();
        if (a){
          cout << "A pilha está vazia. Não há elementos para remover" << endl << endl;
        } else {
          int ultimo = pilha.back();
          pilha.pop_back();

        }
        
      break;
      case 3:
         a = pilha.empty();
        if (a){
          cout << "A pilha está vazia" << endl << endl;
        } else {
          imprime(pilha);
        }
      break;
      default:
      break;
    }
    
  }while(op >= 1 && op <4);

  
}

void imprime(vector<int>p){
  cout << "Impressão = ";
  for (auto i = p.begin(); i != p.end(); i++){
    cout << *i << " ";
  }
  cout << endl << endl;

}

void abertura(){
  char moldura = '#';
  string frase = "##  Simulador de pilha com vetor  ##";

  for (int i=0; i<frase.size(); i++){
    cout << moldura;
  } cout << endl;
  cout << frase << endl;
  for (int i=0; i<frase.size(); i++){
    cout << moldura;
  } cout << endl << endl;

  
}