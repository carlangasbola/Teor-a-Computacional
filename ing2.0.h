#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <winbgim.h>
#include "animaing.h"

void ingresateclado();
void leertexto();
void menuing();

void menuing()
{
   int opc;

   do
   {
   	system("cls");
   	FILE *lectura;
	system ( "color 0a" );
	
	printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf(" %c3.- Aut%cmata AFD  ING       %c\n",186,162,186);
    printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    
	printf ( "\n Eliga una opci%cn\n\n", 162 );
	printf ( " 1.- Leer archivo de texto \n" );
	printf ( " 2.- Insertar Cadena \n");
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
				 leertexto();
		break;
		
     	case 2:
     		     system ( "cls" );
     	         ingresateclado();
     	break;
     	
     	case 3:  system("cls");  
		break;	
     	
	 }
	 
	 
	 
	 
}while(opc!=3);
	
	
}


void leertexto()
{
	FILE *lectura;
	
	lectura = fopen( "ing.txt", "r" );
    if (lectura==NULL) {fputs ("File error",stderr); exit (1);}
    printf( "\n\n" );
    
    int fila=1,col=1;
    enum{q0,q1,q2,q3};
    int estado;
    char c;
    int cont_ing=0;
    
    iinicializa();
    estado=q0;
    
      while( !feof(lectura) )
      {
      	    c = fgetc(lectura);
			  
      	 switch(estado )
      	 {
	     case q0:
	             if ( c == 'i' || c== 'I' )
      	 		{
      	 			estado=q1;
      	 			iq0_q1();
				}
				else 
				{
					estado=q0;
					iq0_q0();
				}
	     break;
	     
	     case q1:
	                if ( c == 'n' || c =='N'  )
				    {
				    	estado=q2;
				    	iq1_q2();
					}
					else if ( c == 'i' || c == 'I' )
					{
						estado=q1;
						iq1_q1();
					}
					else
					{
						estado=q0;
						iq1_q0();
					}
		 break;
		 
		 case q2:
	     if ( c == 'i' || c == 'I' )
      	 		    {
      	 		    	estado=q1;
					}
      	 		    else if ( c=='g' || c=='G' )
      	 		    {
      	 		        estado=q3;
      	 		        iq2_q3();
					}
					else 
					{
						estado=q0;
						iq2_q0();
					}
		   break;	
		   
		   case q3:
		   
		     if ( c=='i' || c=='I' )
					{
						estado=q1;
						iq3_q1();	
					}
					else if ( c==' ' || feof(lectura) || c=='\n' )
					{
						cont_ing++;
		                iestado_final();
		                printf( "\n Rengl%cn [%3d] Posici%cn [%3d] Palabra aceptada ",162, fila,162, col );
					    iiniq0(); 
		                estado=q0;
					}
					else 
					{
						estado=q0;
						iq3_q0();
					} 
		   break;
		   
		} // fin del swith
		  
		  	// Contador de renglon y columna   
		if( c == ' ' )
        {
        col++;
		}
		else if( c == '\n' )
        {
        fila++;
     	col=1;
		}
		//////////////////////////////   
		 
      }
    
    fclose(lectura);
	printf( "\n\n Palabras con terminacion ing %d\n\n ", cont_ing );
	system("pause");
	closegraph();
}



void ingresateclado()
{
	
   char cad[1000];
   char c;
   int i;
   enum{q0,q1,q2,q3};
   int estado;
   char aux=0;
   int cont_ing=0;
   int fila=1,col=1;
   	
   printf("\n Cadena %c%c%c ",175,175,175 );
   gets(cad);
   	
   	
   iinicializa();
   estado=q0;
   	
   for( i=0; i<(strlen(cad)+1) ; i++ )
   {
   	   c=cad[i];
      	    
      	 switch(estado )
      	 {
	     case q0:
	             if ( c == 'i' || c== 'I' )
      	 		{
      	 			estado=q1;
      	 			iq0_q1();
				}
				else 
				{
					estado=q0;
					iq0_q0();
				}
	     break;
	     
	     case q1:
	     if ( c == 'n' || c =='N'  )
				    {
				    	estado=q2;
				    	iq1_q2();
					}
					else if ( c == 'i' || c == 'I' )
					{
						estado=q1;
						iq1_q1();
					}
					else
					{
						estado=q0;
						iq1_q0();
					}
		 break;
		 
		 case q2:
	     if ( c == 'i' || c == 'I' )
      	 		    {
      	 		    	estado=q1;
					}
      	 		    else if ( c=='g' || c=='G' )
      	 		    {
      	 		        estado=q3;
      	 		        iq2_q3();
					}
					else 
					{
						estado=q0;
						iq2_q0();
					}
		   break;	
		   
		   case q3:
		   
		     if ( c=='i' || c=='I' )
					{
						estado=q1;
						iq3_q1();	
					}
					else if ( c==' ' || c == '\n' || c=='\0' )
					{
						cont_ing++;
		                iestado_final();
		                printf( "\n Rengl%cn [%3d] Posici%cn [%3d] Palabra aceptada ",162, fila,162, col ); 
		                iiniq0(); 
		                estado=q0;
					}
					else 
					{
						estado=q0;
						iq3_q0();
					} 
		   break;
		   	   
		 } // fin del swith
		  
		  	// Contador de renglon y columna   
		if( c == ' ' )
        {
        col++;
		}
		else if( c == '\n' )
        {
        fila++;
     	col=1;
		}
		//////////////////////////////   
		  
   }
              
    printf( "\n\n Palabras con terminacion ing %d\n\n ", cont_ing );
    system("pause");
	closegraph();
}

