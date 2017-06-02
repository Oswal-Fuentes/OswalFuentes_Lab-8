#include <iostream>
#include "Binaria.h"
#include <vector>
#include <stdlib.h>

using namespace std;

//Funcion menu
int menu();
//Funcion menu operaciones
int menuOperaciones();

int main(){
	vector<Binaria>tablas;
	bool salir=false;
	while (!salir) {
		switch (menu()) {
			case 1:{
				int arreglo[4];
				int binario[2]={0,1};
				for (int i = 0; i < 4; i++) {
					int x=binario[rand()%2];
					arreglo[i]=x;
				}
				Binaria tabla;
				tabla.setTabla_de_verdad(arreglo);
				tablas.push_back(tabla);
				cout<<"Se ha creado la tabla exitosamente"<<endl;
				break;
			}//Fin case 1
			case 2:{
				switch (menuOperaciones()) {
					case 1:{
						int pos1,pos2;
						cout<<"Ingrese posicion del primer arreglo: "<<endl;
						cin>>pos1;
						cout<<"Ingrese posicion del segundo arreglo: "<<endl;
						cin>>pos2;
						int* resultado;
						int* table2;
						table2=tablas[pos2].getTabla_de_verdad();
						resultado=tablas[pos1]+table2;
						cout<<"El resultado es: "<<endl;
						for (int i = 0; i < 4; i++)
						{		
							cout<<resultado[i]<<endl;
						}
						break;
					}
					case 2:{
						int pos1,pos2;
						cout<<"Ingrese posicion del primer arreglo: "<<endl;
						cin>>pos1;
						cout<<"Ingrese posicion del segundo arreglo: "<<endl;
						cin>>pos2;
						int* resultado;
						int* table2;
						table2=tablas[pos2].getTabla_de_verdad();
						resultado=tablas[pos1]-table2;
						cout<<"El resultado es: "<<endl;
						for (int i = 0; i < 4; i++)
						{		
							cout<<resultado[i]<<endl;
						}
						break;	
					}
					case 3:{
						int pos1,pos2;
						cout<<"Ingrese posicion del primer arreglo: "<<endl;
						cin>>pos1;
						cout<<"Ingrese posicion del segundo arreglo: "<<endl;
						cin>>pos2;
						int* resultado;
						int* table2;
						table2=tablas[pos2].getTabla_de_verdad();
						resultado=tablas[pos1]*table2;
						cout<<"El resultado es: "<<endl;
						for (int i = 0; i < 4; i++)
						{		
							cout<<resultado[i]<<endl;
						}
						break;
					}
					case 4:{
						int pos1,pos2;
						cout<<"Ingrese posicion del primer arreglo: "<<endl;
						cin>>pos1;
						cout<<"Ingrese posicion del segundo arreglo: "<<endl;
						cin>>pos2;
						int* resultado;
						int* table2;
						table2=tablas[pos2].getTabla_de_verdad();
						resultado=tablas[pos1]/table2;
						cout<<"El resultado es: "<<endl;
						for (int i = 0; i < 4; i++)
						{		
							cout<<resultado[i]<<endl;
						}
						break;
					}
					case 5:{
						int pos1,pos2;
						cout<<"Ingrese posicion del primer arreglo: "<<endl;
						cin>>pos1;
						cout<<"Ingrese posicion del segundo arreglo: "<<endl;
						cin>>pos2;
						int* resultado;
						int* table2;
						table2=tablas[pos2].getTabla_de_verdad();
						resultado=tablas[pos1]^table2;
						cout<<"El resultado es: "<<endl;
						for (int i = 0; i < 4; i++)
						{		
							cout<<resultado[i]<<endl;
						}
						break;
					}
				}//Fin menu operaciones
				break;
			}//Fin case 2
			case 3:{
				int* table;
				int i=0;
				while(i<tablas.size()){
					table=tablas[i].getTabla_de_verdad();
					cout<<"\n";
					cout<<"Tabla "<<i<<endl;;
					for (int j = 0; j < 4; j++)
					{
						cout<<table[j]<<endl;
					}
					cout<<"\n";
					i++;
				}
				break;
			}//Fin case 3
			case 4:{
				salir=true;
				break;
			}
		}//Fin swtich menu
	}//Fin While salir
	return 0; 	
}//FIN MAIN

int menu() {
	int opcion;
	bool valido = false;
	do {
		cout << "-----MENU-----" << endl
		<< "1.- Agregar tabla" << endl
		<< "2.- Realizar operaciones" << endl
		<< "3.- Ver tablas creadas (Listar)" << endl
		<< "4.- Salir" << endl;
		cout << "Ingrese una opcion: ";
		cin>>opcion;
		if (opcion > 0 && opcion <= 4)
			valido = true;
		else {
			cout << "Opcion no valida, intente de nuevo..." << endl;
		}

	} while (!valido);
	return opcion;
}

int menuOperaciones() {
	int opcion;
	bool valido = false;
	do {
		cout << "-----MENU-----" << endl
		<< "1.- Disyunción(+)" << endl
		<< "2.- Conjunción(-)" << endl
		<< "3.- Implicación(*)" << endl
		<< "4.- Doble implicación(/)" << endl
		<< "5.- Disyunción exclusiva(^)" << endl;
		cout << "Ingrese una opcion: ";
		cin>>opcion;
		if (opcion > 0 && opcion <= 5)
			valido = true;
		else {
			cout << "Opcion no valida, intente de nuevo..." << endl;
		}

	} while (!valido);
	return opcion;
}

