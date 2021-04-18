#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define N 100

int main(){

	int i=1;
	char nombre[N],imperio[N],respuesta;

//MENU INICIAL

	printf("	*EMPIRES GLOBAL OFFENSIVE*	\n");	
	printf("Bienvenido jugador, si quiere empezar a jugar introduzca una E; de lo contrario, una S para salir.\n");	
	scanf("%c",&respuesta);
	
do {	
	if ((respuesta == 'E')||(respuesta == 'e')){
		i=0;
	}
	else if  ((respuesta == 'S')||(respuesta == 's')){
		printf("Esperamos verte pronto. Hasta luego !!!");
		return 0;
	}
	else {
		printf("El caracter introducido no es valido. Introduzca un caracter valido (E para empezar y S para salir).\n");
		fflush(stdin);
		scanf("%c",&respuesta);
	}
}while (i!=0);

//PEDIMOS NOMBRE AL USUARIO Y preguntamos si es novato. Si lo es, le explicamos el juego.
	// Preguntamos el nombre
		
	printf("Empecemos entonces!! Dinos un nombre con el que referirnos a ti:\n");	
	scanf("%s",nombre);

	//Preguntamos si conoce el juego, si no, se lo explicamos 
	printf("Nos dirigiremos hacia ti como %s a partir de ahora.\n",nombre);
	printf("Has jugado alguna vez a EMPIRES GLOBAL OFFENSIVE?? (EGO para los amigos) Si no lo has hecho nunca te vendria bien una explicación de como funciona. Quieres que te expliquemos lo basico??\n");
	printf("Introduce S para si y N para no:\n");
	fflush(stdin);
	scanf("%c",&respuesta);
	
	i=1;
do { 
		if ((respuesta == 'N')||(respuesta == 'n')){
			printf("Este juego se basa en la creacion de un imperio. Para poder crear, mantener y expandir tu propio imperio, deberas tener en cuenta una serie de variables como la salud y lealtad de tu ejercito, el bienestar de tu pueblo, la relaciones internacionales que tengas con los imperios vecinos, la religon que impantes (o no), tu destreza a la hora de enfrentarte en la guerra, o guerras... En definitiva, sera un videojuego donde tienes el poder de escribir el futuro de tu nacion, desde tu trono en tu palacete, o desde el campo de batalla, dándole ejemplo a tus aliados en la batalla. Y para ello tienes que tomar una serie de decisiones que se le plantean teniendo en cuenta todas las variables anteriormente descritas y muchas mas. Además de esto, en las guerras (que aunque podrás evitarlas, a veces serán muy provechsas para tu imperio), se te plantearan diferentes minijuegos, adivinanzas, o aquello que el destino te depare a ti y a tu ejercito.\n");
			printf("Desde aqui te deseamos fuerza para la batalla y prudencia en tu toma de decisiones.\n Que la suerte juegue de tu lado.\n");
			i=0;
		}
		else if  ((respuesta == 'S')||(respuesta == 's')){
			printf("Estupendo, entoces nada nos impide empezar con la diversion.\n");
			i=0;
		}
		else {
			printf("El caracter introducido no es valido. Introduzca un caracter valido.\n");
			fflush(stdin);
			scanf("%c",&respuesta);
		}
	}while (i!=0);
	
	printf("Procedamos a la creación de tu imperio. Lo primero que hay que concretar es el nombre. INTRODUCE EL NOMBRE DEL IMPERIO\n");
	fflush(stdin);
	gets(imperio);
	printf("%s \n",imperio);
	
	
	
	
return 0;
}





