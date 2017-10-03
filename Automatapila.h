#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>

FILE *text;  
 
typedef struct pila
{
char caracter;
struct pila *psig;
}pila;
 
pila *pmaestro;
/*Declaración de funciones*/
pila *NuevoElem();
void push( char dato);
int pop(void);
void iniciapila(void);
void imprimir(pila *);
int automatapila(void);

void iniciapila()
{
	int result;
	
	result = automatapila();
	
	if ( result == 1 )
	{
	printf("\n No Aceptada"); 
    fprintf(text,"\n Aceptada"); 
    }else{
    printf("\n Aceptada"); 
    fprintf(text,"\n Aceptada");
	}
	
	
	
  printf("\n\n ");
  system("pause");
  
  // Nos aseguramos de vaciar la pila al final de proceso para se usada despues 
  while(pop() != EOF)
  {
  	pop();
  }
  
  system("cls");
  

}

/*Fin de las declaraciones*/
 
/*******************************FUNCION MAIN*****************************/
 
 int automatapila()
{
	
    char opc;
    
    
    int random1;
    int random2;
    char cad[1000];
    char concatena[1000];
    int estado;
    enum{q,p};
    
    char aux[1000];
	int n=0;
	
	srand(time(NULL));
	system("cls");
	
    
    printf("\n %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
	printf("\n %c11.-  Aut%cmata de pila      %c",186,162,186);
	printf("\n %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    	
    printf ( "\n Eliga una opci%cn\n\n", 162 );
	printf ( " 1.- Manual \n" );
	printf ( " 2.- Aleatorio \n");
	printf("\n Selecci%cn %c%c%c ", 162,175,175,175);
	scanf("%c", &opc);
    fflush(stdin);	
 	
 	switch(opc)
 	{
 		case '1' :
  
  text = fopen("pila.txt","w"); 	
  fprintf(text,"\n Automata de Pila\n\n");
  printf("\n Automata de Pila\n\n");
  printf(" Cadena :: ");
  gets(cad);
 		
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
	 
 		break;
	}
 	
  estado=q;	
  
  printf("\n-- %s --\n", cad);
  
  printf("\n\n");
  printf("{(q),%s, {z0}}\n",cad);
  
  
  for (int i=0; cad[i]!='\0'; i++ )
  {
  	 
	  switch(estado)
  	{
  	  case q: 
  	            
  	            if ( cad[i] == '0' )
  	            {
  	            printf("{(q)");
  	            fprintf(text,"{(q)");
		     	cad[i]=' ';
				push('X');
			    }
			    
				else if ( cad[i] == '1' )
					  {
				printf("{(q)");
  	            fprintf(text,"{(q)");
		     	cad[i]=' ';
				push('X');
					  	estado=p;
			        	}
			        	else return 1;
	  break;
	  
	  case p:
	  	    
	  	    if ( cad[i] == '0' )
	  	    {
			  
			cad[i]=' ';
	  	    printf("{(p)");
	  	    fprintf(text,"{(p)");
	  	    
	  	    // Si la pila esta vacia y se desea retirar datos regresamos 1
	  	    if( pop() == EOF)
	  	    {
	  	    	for(int j=0; j<1000; j++)
	  	    	{
	  	    	if ( cad[j] == '1' ){
				  aux[n] = '1';
				  n++; 	
			      }	  
				}
	  	    	printf("{f,1%s,z0}\n",aux); fprintf(text,"{f, 1%s,z0}\n",aux);
	  	    	return 1;
			}
			
		}else return 1;	
			
	  break;	
	   
	        // Evitamos la entrada de caracteres invalidos
	  default: printf(" Caracter no Valido"); fprintf(text," Caracter no Valido"); return 1;
	}
		
	printf(",%s,", cad);
	fprintf(text,",%s,", cad);
  	imprimir(pmaestro);
  	
  	
  }
  
  // Si al terminar el proceso la pila sigue llena regresamos 1 en caso contrario 0
  
  if(pop() != EOF)
  {
  	 printf("{f,%s,z0}\n",aux); fprintf(text,"{f, %s,z0}\n",aux);
     return 1;
  }
  else{ 
    printf("{f,E,z0}\n"); fprintf(text,"{f,E,z0}\n");
    return 0;
  }
  
  
}
 
 
void push(char dato) /*Añade un nuevo elemento a la pila*/
{ pila *q = NuevoElem();
q->psig = pmaestro;
q->caracter = dato;
pmaestro = q;
}
 
int pop(void) /*Esta función "desecha" el último elemento introducido*/
{ pila *q; char x;
  if (pmaestro==NULL) { return EOF; }
  else{
  x = pmaestro->caracter;
  q = pmaestro;
  pmaestro = pmaestro->psig;
  free(q);
 
  return x;
}}
 
pila *NuevoElem() /*Crea un nuevo elemento. Atento: retorna un puntero*/
{ pila *q = (pila *)malloc(sizeof(pila));
  if (q==NULL) { printf("No memory"); exit(0);}
  return q;
}
 
void imprimir(pila *pmaestro) /*Imprime todos los datos albergados en la pila hasta el momento*/
{

 while(pmaestro!=NULL)
 {
 printf("%c ", pmaestro->caracter);
 fprintf(text,"%c ", pmaestro->caracter);
 pmaestro = pmaestro->psig;
 }
 printf("(z0)}");
 printf("\n");
 fprintf(text,"(z0)}");
 fprintf(text,"\n");
}
     // pila va a apuntar al nuevo nodo, con esto hacemos que el nuevo nodo sea ahora el primer nodo de la lista ligada
