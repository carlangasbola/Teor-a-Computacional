#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "animaparidad.h"


int paridad(char*ptr, int tama);
int cadena_aleatoria(void);
void paridad();

void paridad()
{
	int opc;
	
	do{
	system("cls");
	system("color 0a");
	char cad[100];
	int result;
	
	printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf(" %c4.- Aut%cmata AFD Paridad    %c\n",186,162,186);
    printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    
	printf ( " Eliga una opci%cn\n\n", 162 );
	printf ( " 1.- Manual \n" );
	printf ( " 2.- Aleatorio \n");
	printf ( " 3.- Salir\n\n" );
	
	 // Evita el ingreso de caracteres y opciones invalidas
	 do {
      printf("\n Selecci%cn %c%c%c ", 162,175,175,175);
     scanf("%d", &opc);
     }while (getchar() != '\n' || opc >3 || opc <=0 );  

     switch(opc)
     {
     	 case 1:
		         system ( "cls" );
                 printf ( ":: Aut%cmata Finito Deterministico ::",162 );
                 printf ( "\n\n Introduce la cadena :: " );
				 gets(cad);
                 comienza();
                 result=paridad(cad, strlen(cad) );
                 printf("\n");
               	 if ( result == 0 )
                 printf( "\n\n Aceptada " );
                 else printf( "\n\n No aceptada ");
                 system("pause");
	             closegraph();
                 
     	 break;


		 case 2: system ( "cls" );
                 printf ( ":: Aut%cmata Finito Deterministico ::",162 );
                 printf ( "\n\n Cadena Aleatoria:: " );
				 comienza();
                 result=cadena_aleatoria();
                 if ( result == 0 )
                 printf( "\n\n Aceptada " );
                 else printf( "\n\n No aceptada ");
                 system("pause");
	             closegraph();
         break;
         
         case 3: system("cls");  break;
     }
	
}while(opc!=3);


}


int cadena_aleatoria(void)
{

srand(time(NULL));
int random = 1+rand()%1000;
char cad2[random];
int var;
int i;

for (  i=0; i<random; i++ )
{
var = rand () % 2;

if ( var == 1 ) 
{
cad2[i] = '1';
}
else 
{
cad2[i] = '0';
}
printf( "%c", cad2[i] );

}


return paridad(cad2, random);

}


int paridad( char *ptr, int tama)
{
	int i;
	int estado=0;
	printf("\n\n");
	
	for ( i=0; i<tama ; i++ )
	{
		if ( estado == 0 )
		{
			if ( ptr[i] == '1' )
			{
				estado=1;
				q0_q1();
				printf(" q0->q1");
			}
			else 
			{
				estado=2;
				q0_q2();
				printf(" q0->q2");
			}
		}
		else if ( estado == 1 )
		{
			if ( ptr[i] == '1' )
			{
				estado=0;
				q1_q0();
				printf(" q1->q0");
			}
			else 
			{
				estado=3;
				q1_q3();
				printf(" q1->q3");
			}
		}
		else if ( estado == 2 )
		{
			if ( ptr[i] == '1' )
			{
				estado=3;
				q2_q3();
				printf(" q2->q3");
			}
			else 
			{
				estado=0;
				q2_q0();
				printf(" q2->q0");
			}
		}
		else if ( estado == 3 )
		{
			if ( ptr[i] == '1' )
			{
				estado=2;
				q3_q2();
				printf(" q3->q2");
			}
			else 
			{
				estado=1;
				q3_q1();
				printf(" q3->q1");
			}
		}
		printf("\n");
	}
	
	if ( estado==0 )
	return 0;
	else return 1;
	
	
}
