#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include <time.h>
#include <cstring>
#include <stack>

using namespace std;

void imprimePila(stack <char> aux)
{
    char actual;

    while(!aux.empty())
    {
        actual = aux.top();
        printf("%c", actual);
        aux.pop();
    }
}

void aleatoriop(){
     system("cls");
	 srand(time(NULL));
	int tam;
    bool flag;
    stack <char> pila; // Declaracion de pila
   
       flag = false;
       srand(time(NULL));
       tam=rand()%10+1;
       char s[tam];
       printf("Tu longitud de cadena es : %d \n", tam);
       
       char aux;
       printf("\n");
       
       printf("Tu cadena aleatoria es:"); 
       
       for(int i=0;i<tam;i++){
                                   
        aux=(rand()%2)+40; 
        s[i]=aux;
        printf("%c",s[i]);
        }
        
        printf("\n\n");
        for(int i = 0; i < tam; i++){
        //Si hay un parentesis que se abre lo metemos en la pila*/
        if(s[i] == '('){
            pila.push('R');
            for(int e=0;e<=i;e++){
            printf("%c",s[e]);
            }
            imprimePila(pila);
            printf("B");
            printf("\n");
            
        }
        else if(s[i] == ')'){
            //Si hay un parentesis que cierra y el tope es un parentesis que habre sacamos el elemento de la pila*/
            if(!pila.empty() && pila.top() == 'R'){
                pila.pop();
                for(int e=0;e<=i;e++){
                printf("%c",s[e]);
                }
                imprimePila(pila);
                printf("B");
                printf("\n");
                }
            //Si hay un parentesis que cierra y la pila esta vacia entonces no esta balanceado*/
            else if(pila.empty()){
               printf("Par%cntesis no balanceados\n",130);
                //Esto es para no imprimir dos veces no
                flag = true;
                break;
            }
        }
    }
    //Si terminamos de recorrer la cadena y la pila no esta vacia
    //y no hemos impreso nada entonces no esta balanceada
    if(!pila.empty() && !flag)
        printf("\n Par%cntesis no balanceados\n",130);
    else if(pila.empty() && !flag)
        printf("\n Par%cntesis  balanceados\n",130);
        
         while(!pila.empty())
		   {
		   	pila.pop();
			} 
     
       printf("\n\n........\n\n");
      imprimePila(pila);
     }
     
     
void manualp(){
    
	system("cls");
    int tam;
    char s[128];
    bool flag;
    stack <char> pila; // Declaracion de pila
   

    flag = false;
    printf("\n Cadena %c%c%c ",175,175,175);
    gets(s);
    tam = strlen(s);
    printf("\n\n");
    //Recorremos la cadena*/
    for(int i = 0; i < tam; i++){
        //Si hay un parentesis que se abre lo metemos en la pila*/
     
	    if(s[i] == '('){
            pila.push('R');
            for(int e=0;e<=i;e++){
            printf("%c",s[e]);
            }
            imprimePila(pila);
            printf("B");
            printf("\n");
            
        }
        
        else if(s[i] == ')'){
            //Si hay un parentesis que cierra y el tope es un parentesis que abre sacamos el elemento de la pila*/
            if(!pila.empty() && pila.top() == 'R'){
                pila.pop();
                for(int e=0;e<=i;e++){
                printf("%c",s[e]);
                }
                imprimePila(pila);
                printf("B");
                printf("\n");
                }
            //Si hay un parentesis que cierra y la pila esta vacia entonces no esta balanceado*/
            else if(pila.empty()){
               printf("\n Par%cntesis no balanceados\n",130);
                //Esto es para no imprimir dos veces no
                flag = true;
                break;
            }
        }
    }
    //Si terminamos de recorrer la cadena y la pila no esta vacia
    //y no hemos impreso nada entonces no esta balanceada
    if(!pila.empty() && !flag)
        printf("\n Par%cntesis no balanceados\n",130);
     if(pila.empty() && !flag)
        printf("\n Par%cntesis balanceados\n",130);
        
         while(!pila.empty())
		   {
		   	pila.pop();
			} 
			
	  printf("\n\n........\n\n");
      imprimePila(pila);
        
     }

void parentesis(){
    
  
    printf("\n %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
	printf(" %c10.-     Parentesis  ()     %c\n",186,186);
	printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n ",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    
       
	   char opc;
       
    printf ( "\n Eliga una opci%cn\n\n", 162 );
	printf ( " 1.- Manual \n" );
	printf ( " 2.- Aleatorio \n");
	printf("\n Selecci%cn %c%c%c ", 162,175,175,175);
	scanf("%c", &opc);
       
       fflush(stdin);
       switch(opc){
            case'1':manualp();
            break;
            case'2':aleatoriop();
            break;
            case'3':break;
            default: printf("Escoge una opci%cn valida",162);
            }  
            
           printf("\n\n "); 
           system("pause");   
           system("cls");
     }
