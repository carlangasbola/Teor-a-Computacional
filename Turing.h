#include <stdio.h>
#include <string.h>
#include <time.h>
#include <unistd.h>


void imprime ( char* apuntador, int posicion, int q );	
FILE * ptr;


int  main()
{
	
	srand(time(NULL));
	
	ptr = fopen("Maquina.txt", "w");
	
	char cad[1000];
	char concatena[1000];
	char opc;
	
	int random1;
	int random2;
	
	int i=0;
	int salida=0;
	int estado;
    enum { q0,q1,q2,q3,q4 };
	estado=q0;
	
    printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
	printf(" %c12.-   Maquina de Turing    %c\n",186,186);
	printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    
    printf ( "\n Eliga una opci%cn\n\n", 162 );
	printf ( " 1.- Manual \n" );
	printf ( " 2.- Aleatorio \n");
	printf("\n Selecci%cn %c%c%c ", 162,175,175,175);
	scanf("%c", &opc);
    fflush(stdin);	
 	
 	switch(opc)
 	{
 		case '1' :
  
    fprintf(ptr,"Maquina de Turing\n\n");	
    printf("\n\n Introduce la cadena :: ");
    gets(cad);
    cad[strlen(cad)+1]='\0';
    printf("\n");
 		
 		break;
 		
 		case '2':
 	
 	random1 = 1 + rand()% 20;
 	random2 = 1 + rand()% 20;
 	
 	
 	for ( int j=0; j<random1 ; j++ )
 	{
 		cad[j] = '0';
	}
	
	cad[random1] = '\0';
	concatena[random2] = '\0';
	 
	 for ( int j=0; j<random2; j++ )
	 {
	 	concatena[j] = '1';
	 }
	 
	 strcat(cad,concatena);
	 cad[strlen(cad)+1]='\0';
	 printf("\n");
 	 break;
 	 
	}
 	
    
    do
    {
	
	printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
	printf(" %c12.-   Maquina de Turing    %c\n",186,186);
	printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    
    
    
		printf(" Evaluacion \n\n\a");
    	imprime (cad, i, estado);
    	
    	switch(estado)
		{
			case q0:
				if ( cad[i] == '0' ){
					estado = q1;
					cad[i] = 'X';
					i++;
				} 
				else if ( cad[i] == 'Y' )
				{
					estado=q3;
					cad[i] = 'Y';	
					i++;
				}
				else{ 
				printf("\n No aceptada\n\n ");
			    salida=1;
				}  
			break;
			
			case q1:
			     if( cad[i] == '0' )
			     {
			     	cad[i] = '0';
			     	i++;
				 }
				 else if ( cad[i] == '1' )
				 {
				 	estado=q2;
				 	cad[i]= 'Y';
				 	i--;
				 }else if ( cad[i] == 'Y' )
				 {
				 	cad[i] = 'Y';
				 	i++;
				 }
				else{ 
				printf("\n No aceptada\n\n ");
				salida=1;
				}  
			break;
			
			case q2:
				if ( cad[i] == '0' )
				{
					cad[i]='0';
					i--;
				}
				else if ( cad[i] == 'X' )
				{
					estado= q0;
					cad[i] ='X';
					i++;
				}else if ( cad[i] == 'Y' )
				{
					
					cad[i] = 'Y';
					i--;
				}else{ 
				printf("\n No aceptada\n\n ");
				salida=1;
				}  
				
			break;
			
			case q3:
				if ( cad[i] == 'Y' ){
					cad[i] = 'Y';
					i++;
					
				}else if ( cad[i] == '\0' )
				{
					estado=q4;
					cad[i]= 'B';
					i++;
				}
				else{ 
				printf("\n No aceptada\n\n ");
				salida=1;
				}  
			break;
				
			case q4:
				 printf("\n Aceptada\n\n ");
				 salida=1;
			break;
			
		}
		
	}while(salida==0);

	return 0;  
}

void imprime ( char* apuntador, int posicion, int q )
{
	int i;
	
	for ( i=0; ; i++ )
	{
		if ( i == posicion )
		{
		switch(q)
		{
		  case 0: printf("q0"); fprintf(ptr,"q0");
		  break;
		  case 1: printf("q1"); fprintf(ptr,"q1");
		  break;
		  case 2: printf("q2"); fprintf(ptr,"q2");
		  break;
		  case 3: printf("q3"); fprintf(ptr,"q3");
		  break;
		  case 4: printf("q4"); fprintf(ptr,"q4");
		  break;
		}
		break;
	    }
		else printf("  "); fprintf(ptr,"  ");
	}
	
	printf("\n\n");
	fprintf(ptr,"\n\n");
	
	for ( i=0; i<strlen(apuntador) ;i++ )
	{
		fprintf(ptr, "%c ", apuntador[i] );
		printf( "%c ", apuntador[i] );
	}
	
	printf("\n\n");
	fprintf(ptr,"\n\n");
}




