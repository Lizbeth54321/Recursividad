    
#include<iostream>

using namespace std;

int main (){
	int num1,num2,opc;

void valores(int&,int&)	;
int mul(int,int);

	do{
		int x,valor1,valor2;
		
	cout<<" Elige una de las siguientes opciones"<<endl;
    cout<< "1.- paso por valor "<<endl;
    cout<< "2.- Paso por referencia y recursividad"<<endl;
    cout<< "3.- salir"<<endl;
		cin>>opc;
		cout<<endl;
		switch(opc){
			case 1: 
				cout<<"ingresa dos valores: "<<endl;
				cin>>num1;
				cin>>num2;
				valores(num1,num2);
			break;
				
			case 2:
				cout<<"ingresa dos numeros: "<<endl	;
				cin>>valor1;
				cin>>valor2;
				x=mul(valor1,valor2);
				cout<<"el resultado es: "<<x<<endl;	
				break;
		}
		
	}while(opc!=3);
	return 0;
}

void valores(int& valor1,int& valor2){
	cout<<"el valor del numero uno es: "<< valor1<<endl;

	cout<<"el valor del segundo mumero es: "<<valor2<<endl;
}

int mul(int num3,int num4){
	if (num3==0 or num4==0){
		return 0;
	}
	else{
	return num3+mul(num3,num4-1);
	}

}
