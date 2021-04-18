#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define N 100

int main(){

	int i=1;
	float dinero,pueblo,ejercito,metal,alimentos,madera;	//Hay que colocar los distintos recursos en un vector estructura
	char nombre[N],imperio[N],respuesta;

//MENU INICIAL

	printf("				*EMPIRES GLOBAL OFFENSIVE*\n");	
	printf("	Bienvenido jugador, si quiere empezar a jugar introduzca una E; de lo contrario, una S para salir.\n");	
	scanf("%c",&respuesta);
	
do {	
	if ((respuesta == 'E')||(respuesta == 'e')){
		i=0;
	}
	else if  ((respuesta == 'S')||(respuesta == 's')){
		printf("	Esperamos verte pronto. Hasta luego !!!");
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
		
	printf("	Empecemos entonces!!\n	Antes de nada, te recomendamos que pongas la pantalla completa, te va a tocar leer bastante xD.\n	Dinos un nombre con el que referirnos a ti:\n");	
	scanf("%s",nombre);

	//Preguntamos si conoce el juego, si no, se lo explicamos 
	printf("	Nos dirigiremos hacia ti como %s a partir de ahora.\n",nombre);
	printf("\n");
	printf("	Eres nuevo en EMPIRES GLOBAL OFFENSIVE?? (EGO para los amigos) Si no lo has hecho nunca te vendria bien una explicacion de como funciona. Quieres que te expliquemos lo basico??\n");
	printf("Introduce S para si y N para no:\n");
	fflush(stdin);
	scanf("%c",&respuesta);
	printf("\n");
		
	i=1;
do { 
		if ((respuesta == 'S')||(respuesta == 's')){
			printf("	Este juego se basa en la creacion de un imperio. Para poder crear, mantener y expandir tu propia superpotencia continental, deberas tener en cuenta una serie de asuntos como la salud y lealtad de tu ejercito, el bienestar de tu pueblo, la relaciones internacionales que tengas con los imperios vecinos, la religon que impantes (o no), tu destreza a la hora de enfrentarte en la guerra, o guerras. Estos asuntos se van a materializar a traves de 4 variables que, como ya sabes, condicionaran el fututro de tu imperio; estas son: la economia de tu imperio ; la lealtad, fuerza y fama de tu ejercito; la cantidad y calidad de los recursos que seas capaz de obtener, y por supuesto, el estado de tu pueblo. Que seria de una nacion, SIN SU PUEBLO!!\n");
			printf("\n");
			printf("	Desde aqui te deseamos fuerza para la batalla y prudencia en tu toma de decisiones.\n Que la suerte juegue de tu lado.\n");
			printf("\n");
			printf("	En definitiva, sera un videojuego donde tienes el poder de escribir el futuro de tu nacion; ya sea desde un trono en tu palacete, o desde el campo de batalla, dándole ejemplo a tus aliados en la batalla. Y para ello tienes que tomar una serie de decisiones que se le plantean teniendo en cuenta todas las variables anteriormente descritas y muchas mas. Ademas de esto, en las guerras (que aunque podrás evitarlas, a veces serán muy provechsas para tu imperio), se te plantearan diferentes minijuegos, adivinanzas, o aquello que el destino te depare a ti y a tu ejercito.\n");
			i=0;
		}
		else if  ((respuesta == 'N')||(respuesta == 'n')){
			printf("Estupendo, entoces nada nos impide empezar con la diversion.\n");
			i=0;
		}
		else {
			printf("El caracter introducido no es valido. Introduzca un caracter valido.\n");
			fflush(stdin);
			scanf("%c",&respuesta);
		}
	}while (i!=0);
	
	printf("\n");
	printf("	Procedamos a la creacion de tu imperio. Lo primero que hay que concretar es el nombre. Este es un momneto importante... tomate tu tiempo, porque no lo podras cambiar despues:\n");
	fflush(stdin);
	gets(imperio);
	printf("	Uh! %s? es un buen nombre... Pero necesitas algo mas que eso para conquistar El Contintente!!\n	Sin mas dilacion... EMPECEMOS DE VERDAD\n(presiona ENTER)\n");
	getch();
	
// EMPEZAMOS CON LA TOMA DE DECISIONES --> ASENTAMIENTO 
	
	printf("\n");
		printf("	Lo segundo que debes elegir, %s, es un buen lugar en el que asentarte al inicio. Posteriormente, este lugar pasara a ser la capital de tu imperio.\n 	Cada localizacion tiene bentajas y desventajas:\n(presiona ENTER)\n",nombre);
	getch();
	
	printf("\n\n");
	
		printf("		ASENTAMIENTO EN LA COSTA:\n");
			printf("	Tendras un rapido crecimiento al inicio debido al comercio matritimo, pero si no eres capaz de aprovecharlo para sacarle el suficiente ventaja a los imperios rivales, te deseo suerte para defenderte en el futuro.\n");
	printf("\n");
	
		printf("		ASENTAMIENTO EN LA CORDILLERA:\n");
			printf("	Aqui , ademas de unas vistas privilegiadas de todo el valle (un matiz clave para la defensa de tu base), encontramos una gran variedad de minerales y metales, e incluso algo de madera. Sin embargo no se ven muchos sitios donde montar un huerto o una granja...\n");
	printf("\n");
	
		printf("		ASENTAMIENTO EN LA MESETA:\n");
			printf("	Este es un asentamiento complicado la verdad... No se ve ningun tipo de defensa natural que ayude ante un posible ataque enemigo. Sin embargo, esta REPLETO de materiales de todo tipo; tenemos madera, tierras para cultivo, animales que domesticar, una red de cuevas mas o menos cercana con metales y otros minerales....\n");
			printf("	Desde luego que empezar aqui no va a ser facil, pero como sobrevivas al inicio... VAS A SER INDESTRUCTIBLE!!");
	printf("\n\n");
	
	
	
	
return 0;
}





