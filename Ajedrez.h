#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <winbgim.h>
#include <time.h>
#include "dibujoajedrez.h"
#include <stdlib.h>


int evaluasquare(char color, int square);
int generarSemilla(void);
void Ajedrez(void);

void Ajedrez()
{
	printf("\n %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);  
	printf(" %c8.-    Juego del Ajedrez    %c\n",186,186);
   	printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n ",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    
	FILE *archivo;
	archivo = fopen("Text.txt", "w");
	enum{e1,e24,e5,e2468,e1357,e1379,e13579};
	int estado=e1;
	
    int boolean;
	int n;
	char cad[100];
	int square;
	int i;
	
	printf( "\n Cadena :: " );
	gets(cad);
	printf("\n");
	
	
	// Evaluamos el automáta para saber si es secuancia ganadora 
	for(i=0; i<strlen(cad); i++)
	{
		switch(estado)
		{
			case e1:
			if (cad[i]=='r')
			{
				estado=e24;
			}else if(cad[i]=='b')
			{
				estado=e5;
			}
			break;
			
			case e24:
			if (cad[i]=='r')
			{
				estado=e2468;
			}else if(cad[i]=='b')
			{
				estado=e1357;
			}	
			break;
			
			case e5:
				if (cad[i]=='r')
			{
				estado=e2468;
			}else if(cad[i]=='b')
			{
				estado=e1379;
			}
			break;
			
			case e2468:
			if (cad[i]=='r')
			{
				estado=e2468;
			}else if(cad[i]=='b')
			{
				estado=e13579;
			}
			break;
			
			case e1357:
				if (cad[i]=='r')
			{
				estado=e2468;
			}else if(cad[i]=='b')
			{
				estado=e13579;
			}
			break;
			
			case e1379:
			if (cad[i]=='r')
			{
				estado=e2468;
			}else if(cad[i]=='b')
			{
				estado=e5;
			}
			break;
			
			case e13579:
			if (cad[i]=='r')
			{
				estado=e2468;
			}else if(cad[i]=='b')
			{
				estado=e13579;
			}
			break;
		}
	}
	
	if( estado == e13579 || estado== e1379 )
	{
		printf("\n\n Es una secuencia ganadora \n\n ");
		printf("A continuacion el automata realizara el analisis aleatoriamente\n\n ");
		boolean = 1;
	}else 
	{
		printf("\n\n No es una secuancia ganadora \n\n ");
		boolean = 0;
	}
	
	system("pause");
	printf("\n");
	
	switch(boolean)
	{
		
	case 1:
	inicializar();
	n=1;
	
	// Comienza a hacer el analisis hasta encontrar la secuancia ganadora
	do{
	outtextxy(10,10, "Iniciando Evaluacion" );
	delay(300);
	n++;		
	square=1;
		
	for ( i=0; i<strlen(cad); i++ )
	{
	    square = evaluasquare( cad[i], square );  
	    fprintf(archivo,"%d",square);
		printf(" %d ", square);
	    animasquare(square);
	}
	
	if (  square == 9 )
	{
		printf( "\n\n YOU WIN\n" );	
		settextstyle(10,0,6);
		outtextxy(50,450, "YOU WIN");
		delay(300);
		break; 
	}else 
	{
	printf( "\n\n No es una secuencia ganadora" );
	settextstyle(10,0,3);
	outtextxy(30,420, " YOU LOSE");
	delay(300);
    }
	
	
	printf("\n\n");
	
	outtextxy(10,10, "Nueva Evaluacion" );
	delay(400); 
	}while(square!=9);
	
	fclose(archivo);
    system("pause");
    closegraph(); 
    break;
    
    
	}
    
    system("cls");

}

int evaluasquare(char color, int square)
{
	srand(generarSemilla());
	switch(color)
	{
		case 'r':
			if ( square == 1 )
			{	
				int tablero[2] = {2,4};
				square = tablero[rand()%2];
			}
			else if ( square == 2 || square == 8 )
			{	
			    
				int tablero[2] = {4,6};
				square = tablero[rand()%2];
			}
			else if ( square == 4 || square == 6 )
			{	
				int tablero[2] = {2,8};
				square = tablero[rand()%2];
			}
			else if ( square == 3 )
			{	
				int tablero[2] = {2,6};
				square = tablero[rand()%2];
			}
			else if ( square == 5 )
			{	
				int tablero[4] = {2,4,6,8};
				square = tablero[rand()%4];
			}
			else if ( square == 7 )
			{	
				int tablero[2] = {4,8};
				square = tablero[rand()%2];
			}
			else if ( square == 9 )
			{	
				int tablero[2] = {6,8};
				square = tablero[rand()%2];
			}
		
		break;


		case 'b':
		if ( square == 1 || square == 3 || square == 7 || square == 9 )
		{
			square=5;
		}
		else if ( square == 5 )
		{
			int tablero[4] = {1,3,7,9};
			square = tablero[rand()%4];
		}
		else if ( square == 2 )
		{	
			int tablero[3] = {1,5,3};
			square = tablero[rand()%3];
		}
		else if ( square == 4 )
		{	
			int tablero[3] = {1,5,7};
			square = tablero[rand()%3];
		}	
		else if ( square == 8 )
		{	
			int tablero[3] = {7,5,9};
			square = tablero[rand()%3];
		}
		else if ( square == 6 )
		{
			int tablero[3] = {3,5,9};
			square = tablero[rand()%3];
		}
		break;
	}
	return square;
	
	getch();
}

int generarSemilla()
{
     __asm__ __volatile__("rdtsc"); // Instruccion RDTSC
}

