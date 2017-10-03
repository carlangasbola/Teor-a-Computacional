#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include <time.h>

void palindromos(){
  
  int regreso; 
  
  do{
       
  printf("\n %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
  printf(" %c9.-      Palindromos        %c\n",186,186);
  printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
     
    
  int num;
  int lon;
  int aux;
  char base[50]="0P0";
  char base2[50]="1P1";
  char base3[50]="";
  char aux2[50]="";

  char opc1izq[50]="e";
  char opc1der[50]="e";
  char opc2izq[50]="0";
  char opc2der[50]="0";
  char opc3izq[50]="1";
  char opc3der[50]="1";
  
       srand(time(NULL));
       num=(rand()%2)+4;     
       
        printf(" Tu n%cmero random es : %d \n",163, num);
        
		if(num==4){
            printf("\n %c %s %c\n\n",175,base,174); 
            strcpy(base3,base);
             }
        else  if(num==5){
            printf(" %c %s %c\n\n",175,base2,174);
            strcpy(base3,base2); 
             }
        else{
        printf(" %c %s %c\n\n",175,base3,174);
        }
        
        
        lon=(rand()%10)+1;
        printf(" El tama%co de la cadena es : %d \n",164, lon);
          
	    for(int i=0;i<lon-1;i++){
        	
              aux=(rand()%3)+1; //lanzamos un random para ver la regla a aplicar
            
			  printf("\n -Regla a aplicar :%d\n",aux);
              if(aux==1){
                   printf(" %c%c %s\n",175,175,base3);
                   }
            else  if(aux==2){
                   strcpy(aux2,opc2izq);
                   strcat(opc2izq,base3);
                   strcat(opc2izq,opc2der);
                   strcpy(base3,opc2izq);
                   strcpy(opc2izq,aux2);
                   printf(" %c%c %s\n",175,175,base3);
                   }
            else  if(aux==3){
                   strcpy(aux2,opc3izq);
                   strcat(opc3izq,base3);
                   strcat(opc3izq,opc3der);
                   strcpy(base3,opc3izq);
                   strcpy(opc3izq,aux2);
                   printf(" %c%c %s\n",175,175,base3);
                   }
              }
      printf("\n");  
     printf("\n\n De nuevo? 1.- SI 2.- No  ->  ");
     scanf("%d", &regreso);
     system("cls");
     
	 }while(regreso==1);
	 
	 
	 }
