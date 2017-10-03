#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "anima.h"

void webebay(void);


void webebay()
{
	FILE *lectura;
	
	system("color 0a");
	printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf(" %c7.- Aut%cmata AFD WEB EBAY   %c\n",186,162,186);
    printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    
	printf("\n La lectura de las palabras sera desde el archivo de texto llamado\n");
	printf(" web.txt asi que introduca su texto y y presione enter\n\n " );
	system("pause");
	    
	printf( "\n Lista de palabras encontradas ::\n\n" );
	lectura = fopen( "web.txt", "r" );
    if (lectura==NULL) {fputs ("File error",stderr); exit (1);}
    printf( "\n\n" );
    
    int fila=1,col=1;
    int estado;
    enum { e1,e12,e15,e135,e16,e146,e17,e18 };
    char c;
    int web=0,ebay=0;
    
    comenzar();
    estado=e1;
    
      while( !feof(lectura) )
      {
      	c = fgetc(lectura);
      	
      	 /// Evaluar estado1
      	 switch(estado)
		{
			case e1:
				if( c=='w' || c=='W' )
				{
					estado=e12;
					e1_12();
				}else if ( c=='e' || c=='E' )
				{
					estado=e15;
					e1_15();
				}else
				{
					estado=e1;
					e1_1();
				}
			break;
			
			case e12:
				if( c=='e' || c=='E' )
				{
					estado=e135;
					e12_135();
				}else if ( c=='w' || c=='W' )
				{
					estado=e12;
					e12_12();
				}
				else 
				{
					estado=e1;
					e12_1();
				}
			break;
		   	
		   	case e15:
		   		if(c=='e' || c=='E')
		   		{
		   			estado=e15;
		   			e15_15();
				}else if(c=='b' || c=='B')
				{
					estado=e16;
					e15_16();
				}else if (c=='w' || c=='W' )
				{
					estado=e12;
					e15_12();
				}
		   	break;
		   	
		   	case e135:
		   		if(c=='e' || c=='E')
		   		{
		   			estado=e15;
		   			e135_15();
				}else if(c=='b' || c=='B')
				{
					estado=e146;
					e135_146();
				}else 
				{
					estado=e1;
					e135_1();
				}
		   	break;
		   	
		   	case e16:
		   		if(c=='e' || c=='E')
		   		{
		   			estado=e12;
		   			e16_12();
				}
				else if(c=='a' || c=='A')
				{
					estado=e17;
					e16_17();
				}else if(c=='w' || c=='W')
				{
					estado=e12;
					e16_12();
				}
				else
				{
					estado=e1;
					e16_1();
				}
		   	break;
		   	
		   	case e146:
		   		if (c==' ' || feof(lectura) )
				{
		   			printf(" :: Palabra Aceptada :: COLUMNA %d FILA %d \n",col,fila);
		   			inie1();
		   			estado=e1;
		   			
				}else if(c=='a' || c=='A' )
				{
					estado=e17;
					e146_17();
				}else if(c=='w' || c=='W' )
				{
					estado=e12;
					e146_12();
				}else if(c=='e' || c=='E')
				{
					estado=e15;
					e146_15();
				}
				else 
				{
					estado=e1;
					e146_1();
				}
		   	break;
		   	
		   	case e17:
		   		if(c=='y' || c=='Y')
		   		{
		   			estado=e18;
		   			e17_18();
				}else if(c=='e' || c=='E')
				{
					estado=e15;
					e17_15();
				}else if(c=='w' || c=='W')
				{
					estado=e12;
					e17_12();
				}else 
				{
					estado=e1;
					e17_1();
				}
		   	break;
		   	
		   	case e18:
		   		if(c=='e' || c=='E')
		   		{
		   			estado=e15;
		   			e18_15();
				}else if(c=='w' || c=='W')
				{
					estado=e12;
					e18_12();
				}
				else if(c==' ' || feof(lectura) )
				{
					printf(" :: Palabra Aceptada :: COLUMNA %d FILA %d \n",col,fila);
					inie1();
		   			estado=e1;
				}
				else 
				{
					estado=e1;
					e18_1();
				}
		   	break;
		   	
		   	
		   	
		}	 
		 
		 ///////// Identifican posicion y cantidad de palabras
		 
		
		 if ( estado == e146 )
		 {
		 web++;
	     }
		 if ( estado == e18 )
		 {
		 ebay++;
	     }	
	     
	    if( c == ' ' )
        {
        col++;
		}
		else if( c == '\n' )
        {
        fila++;
     	col=1;
		}
	     
	     // leer el sig caracter
	      
      }
    
    printf( "\n\n" );
    printf(" Web %d",web);
    printf("\n Ebay %d\n\n ",ebay);
    
   	system("pause");
	closegraph();
	system("cls");	
}
