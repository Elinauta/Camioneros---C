#include<conio.h>
#include<iostream>

struct camionero{
	char nombre[10];
	int no_unidad;
	float costo;
	int no_boletos;
	float comision;
};

main(){
	char retorno;
	int promedio, mayor=0, menor=0,acum=0, a=0, e=0;
	
do{
	
	camionero c[3];
	for(int i=0;i<3;i++){
	
		printf("Nombre del chofer: ");
		fflush(stdin);
		gets(c[i].nombre);
	
		printf("Numero de unidad: ");
		scanf("%d", &c[i].no_unidad);
		
		printf("Costo por boleto: ");
		scanf("%f", &c[i].costo);
		
		printf("Boletos vendidos: ");
		scanf("%d", &c[i].no_boletos);
		
		acum=acum+(c[i].costo*c[i].no_boletos);
		
		c[i].comision=(c[i].costo*c[i].no_boletos)*0.02;
		if(c[i].comision>mayor){
			mayor=c[i].comision;
			a= a+i;}
		else{
			menor=c[i].comision;
			e=e+i;}
			
		printf("\n");
		promedio=acum/3;
	}
	
	for(int i=0;i<3;i++){
		printf("\n%s\n", c[i].nombre);
		printf("%d\n", c[i].no_unidad);
		printf("%.2f\n", c[i].costo);
		printf("%d\n", c[i].no_boletos);
		printf("%.2f\n", c[i].comision);
		printf("\n");
	}
	
	printf("Promedio de ingreso grupal: %d\n", promedio);
	printf("Comision mayor: %s\n", c[a].nombre);
	printf("Comision menor: %s\n", c[e].nombre);

	printf("\nPresiona R para regresar\n");  //Corra n veces
	fflush(stdin);
	scanf("%c", &retorno);
	printf("\n");
}
while(retorno=='r'||retorno=='R');
	
	getch ();
	return 0;
	
}
