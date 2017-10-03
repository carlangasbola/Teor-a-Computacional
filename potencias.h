#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <windows.h>

FILE *miarchivo;

void generar_combinacion ( int elementos );
void menupotencias(void);

void menupotencias()
{
    int opc;
    
    do{
  
    
	srand(time(NULL));
	system ( "color 0a" );

	int k;
	int random = 1 + rand()% 1000;

	printf("\n %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf(" %c1.-Potencias de un alfabeto %c\n",186,186);
    printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    
	printf ( "\n Eliga una opci%cn\n\n", 162 );
	printf ( " 1.- Manual \n" );
	printf ( " 2.- Aleatorio \n");
	printf ( " 3.- Salir\n\n" );

	 // Evita el ingreso de caracteres y opciones invalidas
	 do {
     printf(" Selecci%cn %c%c%c ", 162,175,175,175);
     scanf("%d", &opc);
     }while (getchar() != '\n' || opc >3 || opc <=0 );

     switch( opc )
     {
     	case 1:
     	       miarchivo=fopen("cadena.txt","w");
     		   system( "cls" );
     		   printf( "\n\n Ingrese el valor de K: " );
     		   scanf( "%d", &k );
     		   printf( "\n\n ");
     		   generar_combinacion(k);
     		   fprintf( miarchivo, " }" );
     		   printf( "\n\n El archivo ha sido escrito como cadena.txt para poder ser revisado\n" );
     		   printf("\n Saliendo en 5: ");
               for(int j=5; j>=1; j--)
               {
               	printf("%c", 219);
               	Sleep(1000);
			   }
               system("cls");
     		break;
     		
     	case 2:
               miarchivo=fopen("cadena.txt","w");
     		   system( "cls" );
     		   printf ( "\n\n ::El numero se elegira aleatoriamento :: \n\n" );
     		   fprintf (miarchivo, "\n\n ::El numero se elegira aleatoriamento :: \n\n" );
     		   printf ( " El n%cmero seleccionado es %d \n\n",163, random );
     		   fprintf (miarchivo, " El numero seleccionado es %d \n\n", random );
     		   generar_combinacion( random );
     		   fprintf( miarchivo," }" );
     		   printf( "\n\n El archivo ha sido escrito como cadena.txt para poder ser revisado\n" );
     		   printf("\n Saliendo en 5: ");
               for(int j=5; j>=1; j--)
               {
               	printf("%c", 219);
               	Sleep(1000);
			   }
               system("cls");
     		break;
     	case 3:
     		   system( "cls" );
     		break;
	 }


     fclose(miarchivo);
    
	 }while(opc!=3);
}

void generar_combinacion ( int elementos )
{

	int res,fin,nvo,aux,mod,primer;

    fprintf(miarchivo,"El conjunto de cadenas es: ");
    /* Definimos los 0 y los 1 */
    for(primer=0;primer<=elementos;primer++)
	{
        res=pow(2,primer);
    /* El primer elemento es la e */
        if(primer==0)
            fprintf(miarchivo, "{ (e)");
        else {

			for(aux=0;aux<res;aux++)
            {
            	fprintf( miarchivo, "(");
                nvo=0;
                mod=aux;
                /*se imprimen los 0 y los 1 */
                while(mod!=0){
                    fprintf(miarchivo,"%d",mod%2);
                    mod=mod/2;
                    nvo++;
                }

			    for(fin=nvo;fin<primer;fin++)
				{
				    fprintf(miarchivo,"0");
				}
				fprintf(miarchivo,")");
            }
        }
    }
}

