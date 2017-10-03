#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdlib.h>

FILE *archivito;

int veces_de_impresion(int caracteres, char cero_uno );
void inicio (void);

void inicio()
{
	system("cls");
	
	printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf(" %c6.- Cerradura de Klenne     %c\n",186,186);
    printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    	
	system ("color 0a");
	srand(time(NULL));
	archivito = fopen( "archivito.txt", "w");
	if (archivito==NULL) {fputs ("File error",stderr); exit (1);}
	
   int random = rand()% 1000 + 0; // Da un numero aleatorio entre
   int contador;
   char c;
   int var;
   
   if (random == 0)
   {
   	printf( "\n (0+1)* = {e} \n\n La potencias es 0 " );
   	fprintf( archivito, "(0+1)* = {e}"  );
   }else
     { 
   fprintf( archivito, "(0+1)* = {e,"  );
    
var = rand () % 2;

if ( var == 1 ) 
{
c = '1';
}
else 
{
c = '0';
} 
    
   for (contador=0;contador < random ;contador++)
   		veces_de_impresion(contador, c);

   fprintf(archivito, "}");
   printf( "\n\n Dodumento de texto creado como archivito.txt para ser revisado \n\n" );
   printf( " El cac%ccter es %c y el n%cmero aleatorio es %d \n",160, c,163, random );
}

printf("\n Saliendo en 5: ");
               for(int j=5; j>=1; j--)
               {
               	printf("%c%c%c",179, 219,179);
               	Sleep(1000);
			   }

system("cls");

}


int veces_de_impresion(int caracteres, char cero_uno )
{
	int contador;
	
   for(contador=0;contador<=caracteres;contador++)
   	fprintf(archivito, "%c", cero_uno );
   	fprintf(archivito,",");

   return 1;
}
