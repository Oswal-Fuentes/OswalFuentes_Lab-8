#ifndef BINARIA_H
#define BINARIA_H

#include <iostream>
#include <string>

using namespace std;

class Binaria{
protected:
	int* tabla_de_verdad;
public:
	Binaria();
	int* getTabla_de_verdad();
	void setTabla_de_verdad(int*);

	int* operator+(int* binario2){
		int* temp;
		for (int i = 0; i < 4; i++)
		{
			if(tabla_de_verdad[i]==0&&binario2[i]==0){
				temp[i]=0;
			}else{
				temp[i]=1;
			}
		}
		return temp;
	}

	int* operator-(int* binario2){
		int* temp;
		for (int i = 0; i < 4; i++)
		{
			if(tabla_de_verdad[i]==1&&binario2[i]==1){
				temp[i]=1;
			}
			if(tabla_de_verdad[i]==1&&binario2[i]==0){
				temp[i]=0;
			}
			if(tabla_de_verdad[i]==0&&binario2[i]==1){
				temp[i]=0;
			}
			if(tabla_de_verdad[i]==0&&binario2[i]==0){
				temp[i]=0;
			}
				
		}
		return temp;
	}
	int* operator*(int* binario2){
		int* temp;
		for (int i = 0; i < 4; i++)
		{
			if(tabla_de_verdad[i]==1&&binario2[i]==1){
				temp[i]=1;
			}
			if(tabla_de_verdad[i]==1&&binario2[i]==0){
				temp[i]=0;
			}
			if(tabla_de_verdad[i]==0&&binario2[i]==1){
				temp[i]=1;
			}
			if(tabla_de_verdad[i]==0&&binario2[i]==0){
				temp[i]=1;
			}
				
		}
		return temp;
	}
	int* operator/(int* binario2){
		int* temp;
		for (int i = 0; i < 4; i++)
		{
			if(tabla_de_verdad[i]==1&&binario2[i]==1){
				temp[i]=1;
			}
			if(tabla_de_verdad[i]==1&&binario2[i]==0){
				temp[i]=0;
			}
			if(tabla_de_verdad[i]==0&&binario2[i]==1){
				temp[i]=0;
			}
			if(tabla_de_verdad[i]==0&&binario2[i]==0){
				temp[i]=1;
			}
				
		}
		return temp;
	}
	int* operator^(int* binario2){
		int* temp;
		for (int i = 0; i < 4; i++)
		{
			if(tabla_de_verdad[i]==1&&binario2[i]==1){
				temp[i]=0;
			}
			if(tabla_de_verdad[i]==1&&binario2[i]==0){
				temp[i]=1;
			}
			if(tabla_de_verdad[i]==0&&binario2[i]==1){
				temp[i]=1;
			}
			if(tabla_de_verdad[i]==0&&binario2[i]==0){
				temp[i]=0;
			}
				
		}
		return temp;
	}
};

#endif
