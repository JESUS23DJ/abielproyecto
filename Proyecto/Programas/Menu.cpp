#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <math.h>
using namespace std;
void gaus()
{
 int i,j,k,n;
   float a[10][10],b,x[10];
   printf("\n\tINDIQUE EL TAMA%cO DE LA MATRIZ: ",165);
   scanf("%d",&n);
   printf("\n\tINDIQUE LOS ELEMENTOS DE LA MATRIZ CONFORME A LAS FILAS\n");
   for(i=1; i<=n; i++) {
      for(j=1; j<=(n+1); j++) {
         cout << "A [" << i << ", " << j << " ] =";
         cin >> a[i][j];
      }
   }
   //For para encontrar los elementos de la matriz diagonal
   for(j=1; j<=n; j++) {
      for(i=1; i<=n; i++) {
         if(i!=j) {
            b=a[i][j]/a[j][j];
            for(k=1; k<=n+1; k++) { 
               a[i][k]=a[i][k]-b*a[j][k];
            }
         }
      }
   }
   printf("\n\tLA SOLUCI%cN ES:\n\t\n",224);
   for(i=1; i<=n; i++) {
      x[i]=a[i][n+1]/a[i][i];
        printf("\n");
      cout<<"x"<<i << " = "<<x[i]<<" ";
      	printf("\n\n");
   }
   system("pausa");
}

	void reduccion(){
		printf("\n");
	float a11, a12, a13, a21, a22, a23, a31, a32, a33, b1,b2,b3;
	float A11, A12, A13, A21, A22, A23, A31, A32, A33, B1,B2,B3;
	float C1, C2, C3, Z1, Z2 ,Z3 , R1, R2, R3;
	float D11, D12, D13, D14, D21, D22, D23, D24 ;
	float X1,X2,X3,X4;
	float z, x, y;
	float E11, E12, E13, E14;
	float F11,F12,F13,F14;
 

	
	printf("\n\n\n\t ****************************************************************");
	printf("\n\n\n\t TU ELECCI%cN RESUELVE UN SISTEMA DE ECUACIONES LINEALES ",224);
	printf("\n\n\n\t DE 3x3 POR EL METODO DE REDUCCI%cN ", 224);
	printf("\n\n\n\t a11x + a12y + a13z = b1");
	printf("\n\n\n\t a21x + a22y + a23z = b2");
	printf("\n\n\n\t a31x + a32y + a33z = b3");
	printf("\n\n\n\t ****************************************************************");
	
	do{
	printf("\n\n\n\t ** INDIQUE LOS VALORES PARA LA ECUACI%cN 1 **",224);
	printf("\n\n\n\t INGRESE EL VALOR DE a11: ");
	scanf("%f",&a11);	
	printf("\n\n\n\t INGRESE EL VALOR DE a12: ");
	scanf("%f",&a12);
	printf("\n\n\n\t INGRESE EL VALOR DE a13: ");
	scanf("%f",&a13);
	printf("\n\n\t INGRESE EL VALOR DE b1: ");
	scanf("%f",&b1);
}
while (fabs(a11) > fabs(a12) + fabs(a13));

do {
	printf("\n\n\n\n\t ** INDIQUE LOS VALORES PARA LA ECUACI%cN 2 **",224);
	printf("\n\n\n\t INGRESE EL VALOR DE a21: ");
	scanf("%f",&a21);
	printf("\n\n\n\t INGRESE EL VALOR DE a22: ");
	scanf("%f",&a22);
	printf("\n\n\n\t INGRESE EL VALOR DE a23: ");
	scanf("%f",&a23);
	printf("\n\n\t INGRESE EL VALOR DE b2: ");
	scanf("%f",&b2);
}while (fabs(a22) > fabs(a21) + fabs(a23));

do{
	printf("\n\n\n\n\t **INDIQUE LOS VALORES PARA LA ECUACI%cN 3 **",224);
	printf("\n\n\n\t INGRESE EL VALOR DE a31: ");
	scanf("%f",&a31);
	printf("\n\n\n\t INGRESE EL VALOR DE a32: ");
	scanf("%f",&a32);
	printf("\n\n\n\t INGRESE EL VALOR DE a33: ");
	scanf("%f",&a33);
	printf("\n\n\t INGRESE EL VALOR DE b3: ");
	scanf("%f",&b3);
}
while (fabs(a33) > fabs(a31) + fabs(a32));

	printf("\n\t El sistema es: ");
	printf("\n\t %0.2fx %0.2fy %0.2fz =%0.2f",a11,a12,a13,b1);
	printf("\n\t %0.2fx %0.2fy %0.2fz =%0.2f",a21,a22,a23,b2);
	printf("\n\t %0.2fx %0.2fy %0.2fz =%0.2f",a31,a32,a33,b3);
	printf("\n\n");
	
	A11=a21*a11;
	A12=a21*a12;
	A13=a21*a13;
	B1=a21*b1;
	
	if(a11>0){
		A21=a11*-1*a21;
		A22=a11*-1*a22;
		A23=a11*-1*a23;
		B2=a11*-1*b2;
	}else
	{
		A21=a11*1*a21;
		A22=a11*1*a22;
		A23=a11*1*a23;
		B2=a11*1*b2;
	}
	
	C1=A11+A21;
	C2=A12+A22;
	C3=A13+A23;
	R1=B1+B2;
	
	printf("\n\t Primer paso (restar ecuacion 1 y ecuacion 2)");
	printf("\n\t %0.2fx %0.2fy %0.2fz =%0.2f",A11,A12,A13,B1);
	printf("\n\t %0.2fx %0.2fy %0.2fz =%0.2f",A21,A22,A23,B2);
	printf("\n\t --------------------------------------------");
	printf("\n\t %0.2fx +%0.2fy +%0.2fz =%0.2f",C1,C2,C3,R1);
	
	A11=a31*a11;
	A12=a31*a12;
	A13=a31*a13;
	B1=a31*b1;
    
    if(a11>0){
		A31=a11*-1*a31;
		A32=a11*-1*a32;
		A33=a11*-1*a33;
		B3=a11*-1*b3;
	}else
	{
		A31=a11*1*a31;
		A32=a11*1*a32;
		A33=a11*1*a33;
		B3=a11*1*b3;
	}
	
	Z1=A11+A31;
	Z2=A12+A32;
	Z3=A13+A33;
	R2=B1+B3;
	
	printf("\n");
	printf("\n");
	printf("\n\t Segundo paso (restar ecuacion 1 y ecuacion 3)");
	printf("\n\t %0.2fx %0.2fy %0.2fz =%0.2f",A11,A12,A13,B1);
	printf("\n\t %0.2fx %0.2fy %0.2fz =%0.2f",A31,A32,A33,B3);
	printf("\n\t --------------------------------------------");
	printf("\n\t %0.2fx %0.2fy %0.2fz =%0.2f",Z1,Z2,Z3,R2);
	
	  if(Z2>0){
		D11=Z2*-1*C1;
		D12=Z2*-1*C2;
		D13=Z2*-1*C3;
		D14=Z2*-1*R1;
	}else
	{
		D11=Z2*-1*C1;
		D12=Z2*-1*C2;
		D13=Z2*-1*C3;
		D14=Z2*-1*R1;
	}
	
		if(C2>0){
		D21=C2*-1*Z1;
		D22=C2*-1*Z2;
		D23=C2*-1*Z3;
		D24=C2*-1*R2;
	}else
	{
		D21=C2*1*Z1;
		D22=C2*1*Z2;
		D23=C2*1*Z3;
		D24=C2*1*R2;
	}
	
    X1=D11+D21;
	X2=D12+D22;
	X3=D13+D23;
	X4=D14+D24;
	
	printf("\n");
	printf("\n");
	printf("\n\t Tercer paso (restar ecuacion 4 y ecuacion 5)");
	printf("\n\t %0.2fx %0.2fy %0.2fz =%0.2f",D11,D12,D13,D14);
	printf("\n\t %0.2fx %0.2fy %0.2fz =%0.2f",D21,D22,D23,D24);
	printf("\n\t --------------------------------------------");
	printf("\n\t %0.2fx %0.2fy %0.2fz =%0.2f",X1,X2,X3,X4);
	
	z=X4/X3;
	

	E13=z*C3;
	
	
    printf("\n");
	printf("\n");
	printf("\n\t Cuarto paso (sustitucion de z en la ecuacion 4)");
	printf("\n\t %0.2fx %0.2fy %0.2fz =%0.2f",E11,C2,E13,R1);
	
	y=(R1-E13)/C2;
	
	
	F11=a11;
	F12=y*a12;
	F13=z*a13;
	F14=b1;
	
	printf("\n");
	printf("\n");
	printf("\n\t Quinto paso (sustitucion de z, y en la ecuacion 1)");
	printf("\n\t %0.2fx %0.2fy %0.2fz =%0.2f",F11,F12,F13,F14);
	
	x=(F14-F13-F12)/F11;
	
	printf("\n");
	printf("\n");
	printf("\n\t Nuestras incognitas son");
	printf("\n\n\t x= %0.2f",z);
	printf("\n\t y= %0.2f",y);
	printf("\n\t z= %0.2f \n\n",x);
	system("pausa");
	}

void menu(){
	int op=0;
		printf("\n");
		printf("\n\n\n\t ********************BIENVENIDOS*******************************\n\n");
		printf("\n\t\t1.-METODO DE GAUSS-JORDAN");
		printf("\n\t\t2.-METODO DE REDUCCI%cN ", 224);	
		printf("\n\t\t3.-Salir");
		printf("\n\n\n\t **************************************************************");	
		printf("\n\n\n\t ELIJA UNA OPCI%cN, POR FAVOR: ",224);
		scanf("%d",&op);
		switch(op)
		{
			case 1:
			gaus();				
			break;
			    
			case 2:
				reduccion();
			break;
			case 3:
				exit(3);
			break;
			default: printf("\n\tOpci%cn invalida. Pulse ENTER para continuar", 162);
			
		}	
		menu();
}
int main()
 {
	menu();
}
