#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

FILE *archivo;

int verificar_si_es_primo( int numero );
void decimalabinario( int c );
void grafica( int c );


void primos()
{
	int opc;
	do{
	
    srand(time(NULL));
	system ( "color 0a" );
    
    int random = 1 + rand()% 1000;
	int j;
	int numero;
	int primo;
    
    archivo = fopen( "Binario.txt", "w" );
    if (archivo==NULL) {fputs ("File error",stderr); exit(1);  }

	printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf(" %c2.-N%cmeros Primos Binarios  %c\n",186,163,186);
    printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    
	printf ( "\n Eliga una opci%cn\n\n", 162 );
	printf ( " 1.- Manual \n" );
	printf ( " 2.- Aleatorio \n");
	printf ( " 3.- Salir\n\n" );

	 // Evita el ingreso de caracteres y opciones invalidas
	 do {
     printf("\n Selecci%cn %c%c%c ", 162,175,175,175);
     scanf("%d", &opc);
     }while (getchar() != '\n' || opc >3 || opc <=0 );

     switch( opc )
     {
     	case 1:
     		   system( "cls" );
     		   printf( "\n\n Ingrese el n%cmero hasta el cual llegara el conjunto: ", 163 );
     		   scanf( "%d", &numero );
               printf( "\n\n " );
               fprintf(archivo, " ::Primos :: " );
               printf( ":: Primos :: \n\n" );
               // IMPRIME LOS NUNMEROS PRIMOS
     		   for (  j = 2; j<=numero; j++ )
               {
                 primo = verificar_si_es_primo( j );
                 if ( primo == 0 )
                 {
                 	fprintf(archivo, "%2d, ", j);
                    printf( "%2d, ", j );
                }
               }
               fprintf(archivo, "\n\n" );
               printf( "\n\n" );
               fprintf (archivo, "\n :: Binarios :: " );
               printf( " :: Binarios :: \n\n " );
               // IMPRIMIR LOS NUMEOS EN BINARIO
                for (  j = 2; j<=numero; j++ )
               {
                 primo = verificar_si_es_primo( j );
                 if ( primo == 0 )
                    decimalabinario(j);
               }
               
               fprintf(archivo ,"\n\n Datos para graf%cca\n\n", 161 );
               fprintf(archivo, " Primo :: Cantidad de 1\n");
               
               // REALIZAR LA GRAFICA
                for (  j = 2; j<=numero; j++ )
               {
                 primo = verificar_si_es_primo( j );
                 if ( primo == 0 )
                 {
                 	fprintf( archivo, " %5d", j );
                    grafica(j);
                 }
               }
     		   printf( "\n\n ");
     		   system("pause"); 
     		system("cls");
     		   
     		break;
     	case 2:
               system( "cls" );
     		   printf( "\n\n El n%cmero se selecionar%c automaticamente ",163, 160 );
     		   printf( "\n\n El n%cmero seleccionado es %d", 163, random);
     		   numero = random;
     		   printf( "\n\n " );
     		   
               printf( ":: Primos :: \n\n" );
               fprintf( archivo ,":: Primos :: \n\n" );
               // IMPRIME LOS NUNMEROS PRIMOS Y LA CANTIDAD DE UNOS
     		   for (  j = 2; j<=numero; j++ )
               {
                 primo = verificar_si_es_primo( j );
                 if ( primo == 0 ){
                    fprintf( archivo,"%2d,",j );
                    printf( "%2d, ", j );
                    }
               }
               fprintf(archivo, "\n\n" );
               printf( "\n\n" );
               fprintf(archivo, " :: Binarios :: \n\n " );
               printf( " :: Binarios :: \n\n " );
               // IMPRIMIR LOS NUMEOS EN BINARIO
                for (  j = 2; j<=numero; j++ )
               {
                 primo = verificar_si_es_primo( j );
                 if ( primo == 0 )
                    decimalabinario(j);
               }
               
               //Manda los datos al archivo txt
                fprintf(archivo ,"\n\n Datos para graf%cca\n\n", 161 );
               fprintf(archivo, " Primo :: Cantidad de 1\n");
               
               // IMPRIME EL NUMERO PRIMO CON LA CANTIDAD DE UNOS
                for (  j = 2; j<=numero; j++ )
               {
                 primo = verificar_si_es_primo( j );
                 if ( primo == 0 )
                 {
                 	fprintf( archivo, " %5d", j );
                    grafica(j);
                 }
               }
               system("pause"); 
               system("cls");
     		break;
     	case 3:
     		   system( "cls" );
     		   
     		break;
	 }
     
     
    fclose(archivo);
   
	}while(opc!=3);
}

int verificar_si_es_primo( int numero )
{
    int i;
    int cont = 0;

    for( i=2; i<=numero; i++ )
    {
        if ( numero%i== 0 )
        {
            cont++;
        }

        if ( cont > 1 )
        {
            return 1;
        }
    }
    return 0;
}


void decimalabinario(int c)
{
    int almacena[10];
    int x,z;
    /* Almacenamos los numeros de forma inversa
    y se imprimen de la forma correcta */
    for ( x=0;x<10;x++ )
    {
      almacena[x]=c%2;
      c=c/2;
      if(c==0)
      break;
    }
         for( z=x;z>=0;z-- )
         {
          fprintf(archivo,"%d",almacena[z]);	
          printf("%d",almacena[z]);
         }
         fprintf(archivo, ",");
         printf( ",");
}

void grafica( int c )
{
    int x,z;
    int cont_de_unos = 0;
    int almacena[10];
  
    for ( x=0;x<10;x++ )
    {
      almacena[x]=c%2;
      c=c/2;
      if(c==0)
      break;
    }
         for( z=x;z>=0;z-- )
         {
          if(almacena[z] == 1)
            cont_de_unos++;
         }
         fprintf( archivo, " %5d", cont_de_unos );
         fprintf( archivo, "\n" );
}



