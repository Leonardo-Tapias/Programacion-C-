#include <iostream>
using namespace std;
main()
 {
 	int vector[50];
 	int elementos,columna,auxiliar,fila,numero;
 	
 	cout<<"programa para ordenar los numeros que ingrese: \n\n";
 	cout<<"ingrese el numero 1 para ordenar los numeros de mayor a menor \n\n";
 	cout<<"ingrese el numero 2 para ordenar los numeros de menor a mayor \n\n";
 	cout<<"ingrese numero: ";
 	cin>>numero;
 	cout<<endl;
 	system("CLS");
 	
 	switch(numero)
 	{
 		case 1: cout<<"Bienvenido ingrese el numero de elementos que desea ordenar de mayor a menor: ";
 		cin>>elementos;
 		cout<<endl;
 		for(int i=1;i<=elementos;i++)
	 	{
	 		cin>>vector[i];
		}
		for(fila=1;fila<=elementos-1;fila++)
		{
			for(columna=1;columna<=elementos-1;columna++)
			{
				if(vector[columna]<vector[columna+1])
				{
					auxiliar=vector[columna+1];
					vector[columna+1]=vector[columna];
					vector[columna]=auxiliar;
					cout<<endl;
				}
			}
		}
		for(int i=1;i<=elementos;i++)
		{
			cout<<vector[i];
		}
		break;
		case 2:cout<<"Bienvenido ingrese el numero de elementos que desea ordenar de menor a mayor: ";
 		cin>>elementos;
 		cout<<endl;
 		for(int i=1;i<=elementos;i++)
	 	{
	 		cin>>vector[i];
		}
		for(fila=1;fila<=elementos-1;fila++)
		{
			for(columna=1;columna<=elementos-1;columna++)
			{
				if(vector[columna]>vector[columna+1])
				{
					auxiliar=vector[columna+1];
					vector[columna+1]=vector[columna];
					vector[columna]=auxiliar;
					cout<<endl;
				}
			}
		}
		for(int i=1;i<=elementos;i++)
		{
			cout<<vector[i];
		}
	}
 	
 	
 }
