#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <winbgim.h>
#include "anima01.h"
#include <time.h>
#include <string.h>

void afn()
{
	
	char opc;
	
	do{
	
	char cad[1000]="";	
	system("cls");
	int i,j;
	int random;
	int estado;
	enum{q0,q0q1,q0q2};
	int x=20;
	printf("\n %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf(" %c5.- Aut%cmata No Determinista%c\n",186,162,186);
    printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
     
     
    printf ( "\n Eliga una opci%cn\n\n", 162 );
	printf ( " 1.- Manual \n" );
	printf ( " 2.- Aleatorio \n");
	printf ( " 3.- Salir\n\n" ); 
	printf("\n Selecci%cn %c%c%c ", 162,175,175,175);
	scanf("%c", &opc);
    fflush(stdin);
    
switch(opc)	
{
	
	//////////////////////////////////////////////
	
	case '1':
		
	 cad[1000];
		
	printf("\n\n Cadena ");
	gets(cad);
	printf("\n");
	
	estado=q0;
	
	initwindow(900,400);
	mensaje();
	setcolor(15);
	outtextxy(x,50, "q0");
	
	
	
	for(  i=0; i<strlen(cad); i++ )
	{	
	    x+=30;
	    moveto(x-30,50);
		lineto(x,50);
		outtextxy(x,50, "q0");
		delay(1000);
		
		switch(estado)
		{
			case q0:
				if ( cad[i]=='1' )
				{
					outtextxy(x,40, "1");
					estado=q0;
					imprimeq0(x);
				}
				else if ( cad[i]=='0' )
				{
					outtextxy(x,40, "0");
					estado=q0q1;
					imprimeq1(x);
				}
			break;
			
			case q0q1:
				if ( cad[i]=='0' )
				{
					outtextxy(x,40, "0");
					estado=q0q1;
					imprimeq1(x);
				}
				else if ( cad[i]=='1' )
				{
					outtextxy(x,40, "1");
					estado=q0q2;
					imprimeq2(x);
				}
			break;
			
			case q0q2:
				if ( cad[i]=='1' )
				{
					outtextxy(x,40, "1");
					estado=q0;
					imprimeq0(x);
				}
				else if ( cad[i]=='0' )
				{
					outtextxy(x,40, "0");
					estado=q0q1;
					imprimeq1(x);
				}
			break;
		}
		
		delay(500);
	}
	
	
	printf("\n");
	setcolor(14);
	

	
    if ( estado == q0q2 )
    {
    	printf("\n Aceptada\n");
    	outtextxy(10,250, "Aceptada");
	}
	else {
	    printf("\n No aceptada\n");
	    outtextxy(10,250, "No Aceptada");
	}
    
    getch();
	closegraph();

	break;
	///////////////////////ALEATORIO////////////////////////////////
	case '2':
	
	srand(time(NULL));
	
	printf("\n Introduce el rango aleatorio ::  ");
	scanf("%d", &random );
	
	char cad[random];
	
	for( j=0; j<random; j++)
	{
	   cad[j] = (rand()%2)+48; 
	}
	
	printf("\n\n Cadena :: %s ",cad);
	printf("\n");
	
	initwindow(900,400);
	mensaje();
	setcolor(15);
	outtextxy(x,50, "q0");
	
	estado=q0;
	
	for(  i=0; i<random; i++ )
	{	
	    x+=30;
	    moveto(x-30,50);
		lineto(x,50);
		outtextxy(x,50, "q0");
		delay(1000);
		
		switch(estado)
		{
			case q0:
				if ( cad[i]=='1' )
				{
					outtextxy(x,40, "1");
					estado=q0;
					imprimeq0(x);
				}
				else if ( cad[i]=='0' )
				{
					outtextxy(x,40, "0");
					estado=q0q1;
					imprimeq1(x);
				}
			break;
			
			case q0q1:
				if ( cad[i]=='0' )
				{
					outtextxy(x,40, "0");
					estado=q0q1;
					imprimeq1(x);
				}
				else if ( cad[i]=='1' )
				{
					outtextxy(x,40, "1");
					estado=q0q2;
					imprimeq2(x);
				}
			break;
			
			case q0q2:
				if ( cad[i]=='1' )
				{
					outtextxy(x,40, "1");
					estado=q0;
					imprimeq0(x);
				}
				else if ( cad[i]=='0' )
				{
					outtextxy(x,40, "0");
					estado=q0q1;
					imprimeq1(x);
				}
			break;
		}
		
		delay(500);
	}
	
	
	printf("\n");
	setcolor(14);
	
    if ( estado == q0q2 )
    {
    	printf("\n Aceptada\n");
    	outtextxy(10,250, "Aceptada");
	}
	else {
	    printf("\n No aceptada\n");
	    outtextxy(10,250, "No Aceptada");
	}
	
	getch();
	closegraph();
	break;
	
	
}

}while(opc!='3');

	system("cls");
}
