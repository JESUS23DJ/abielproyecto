#include <iostream>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

int main()
 {
	int op=0;
	
	while(op !=3)
	{
		cout<<"1.-Metodo de Reduccion"<<endl;
		cout<<"2.-Metodo de Gauss-Jordan"<<endl;	
		cout<<"3.-Salir"<<endl;
		cout<<"Elije una opcion: ";
		cin>>op;
		
		switch(op)
		{
			case 1:
				system("C:\\Users\\gsmma\\Desktop\\proyecto abiel\\Gauss Jordan\GaussJordan.xlsx");
			break;
			    
			case 2:
				system("C:\\Users\\gsmma\\Desktop\\proyecto abiel\\Reduccion\\Reduccion.exe");
			break;
		}	
	}
}
