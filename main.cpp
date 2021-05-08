/* 
           -------------------- 
          | Simple Linked List |
           --------------------
            IDE:	Microsoft® Visual Studio®
        Version:	16.9.31105.61
  
      Developer:	Lucas Marra Rebello
        Contact:	lucasmrebello@yahoo.com.br
  Last modified:	07/05/2021 - 09:07 pm
  
*/

#include <iostream>
#include <stdlib.h>
#include "linkedlist.h"
#include "node.h"

using namespace std;

int main() {
	LinkedList LL1; 
	int opt;
	char Char[6] = { 218,196,191,179,192,217 };
	do{
		for (int i = 0; i < 33; i++) {
			switch (i) {
				case 0:
					cout << Char[0];
					break;
				case 32:
					cout << Char[2];
					break;
				default:
					cout << Char[1];
			}
		}
		
		cout << "\n"<< Char[3] << "      SIMPLE LINKED LIST       " << Char[3] << "\n";
		
		for (int i = 0; i < 33; i++) {
			switch (i) {
			case 0:
				cout << Char[4];
				break;
			case 32:
				cout << Char[5];
				break;
			default:
				cout << Char[1];
			}
		}

		cout << "\n Escolha uma das op\207\344es abaixo:\n\n";
		cout << " 0 - Sair";
		cout << "\n 1 - Inserir valor na lista.";			
		cout << "\n 2 - Remover valor da lista.";			
		cout << "\n\n Digite a op\207\306o escolhida: ";			
		cin >> opt;
		
		
		switch(opt){
			case 0:
				cout << "\n At\202 logo\n\n";
				break;
			case 1:
				cout << "\n\n Digite onde deseja inserir o valor (0 = in\241cio, 1 = fim): ";
				int opc;
				cin >> opc;
				if (opc == 0){
					cout << "\n\n Digite o valor que deseja inserir: ";
					int val;
					cin >> val;
					system("CLS");
					LL1.insertBegin(LL1.createNode(val));
					LL1.print();
				}
				else if(opc == 1){
					cout << "\n\n Digite o valor que deseja inserir: ";
					int val;
					cin >> val;
					system("CLS");
					LL1.insertEnd(LL1.createNode(val));
					LL1.print();
				}
				else {
					system("CLS");
					cout << "\n Op\207\306o inv\240lida !\n\n";
				}
				break;
			case 2:
				if (LL1.empty()) {
					system("CLS");
					cout << "\n A lista j\240 est\240 vazia !\n\n";
					break;
				}
				cout << "\n\n Digite o valor que deseja remover: ";
				int val;
				cin >> val;
				system("CLS");
				LL1.remove(val);
				LL1.print();
				break;
			default:
				system("CLS");
				cout << "\n Op\207\306o inv\240lida!\n\n";
				break;
		}	
	}while(opt != 0);
}
