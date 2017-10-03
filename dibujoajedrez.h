#include <winbgim.h>
#include <conio.h>
#define TI 500
#define style 5

	enum colors { BLACK, BLUE, GREEN, CYAN, RED, MAGENTA, BROWN, LIGHTGRAY, DARKGRAY,
              LIGHTBLUE, LIGHTGREEN, LIGHTCYAN, LIGHTRED, LIGHTMAGENTA, YELLOW, WHITE };

void inicializar(void);
void dibu(void);
void cuadro1(void);
void cuadro2(void);
void cuadro3(void);
void cuadro4(void);
void cuadro5(void);
void cuadro6(void);
void cuadro7(void);
void cuadro8(void);
void cuadro9(void);
void animasquare(int n);

void animasquare(int n)
{
	switch(n)
	{
		case 1: cuadro1();
		break;
		case 2: cuadro2();
		break;
		case 3: cuadro3();
		break;
		case 4: cuadro4();
		break;
		case 5: cuadro5();
		break;
		case 6: cuadro6();
		break;
		case 7: cuadro7();
		break;
		case 8: cuadro8();
		break;
		case 9: cuadro9();
		break;
	}
}

void inicializar()
{
	initwindow(600,600);
	dibu();
}

void dibu()
{
	cleardevice();
	setlinestyle( 0,1,1 );
		
	setfillstyle(1,DARKGRAY);
	floodfill(1,1,WHITE);	
		
	setfillstyle(1,BLACK);        
	bar(100, 100, 200, 200); // cuadrado 1 
    
    setfillstyle(1,RED);
    bar(210, 100, 310, 200); // cuadrado 2
	
	setfillstyle(1,BLACK);
	bar(320, 100, 420, 200); // cuadrado 3
    
    setfillstyle(1,RED);
    bar(100, 210, 200, 300); // cuadrado 4 
    
    setfillstyle(1,BLACK);
	bar(210, 210, 310, 300); // cuadrado 5
    
    setfillstyle(1,RED);
	bar(320, 210, 420, 300); // cuadrado 6
    
    setfillstyle(1,BLACK);
    bar(100, 310, 200, 400); // cuadrado 7 
    
    setfillstyle(1,RED);
	bar(210, 310, 310, 400); // cuadrado 8
    
    setfillstyle(1,BLACK);
	bar(320, 310, 420, 400); // cuadrado 9
    
   setcolor(WHITE);            
   settextstyle( 4, 0, 1 );
   outtextxy(150,150, "1" );
   outtextxy(260,150, "2" );
   outtextxy(370,150, "3" );
   outtextxy(150,260, "4" );
   outtextxy(260,260, "5" );
   outtextxy(370,260, "6" );
   outtextxy(150,360, "7" );
   outtextxy(260,360, "8" );
   outtextxy(370,360, "9" ); 
    
}

void cuadro1()
{
    setlinestyle( 0,1,4 );
    setcolor(YELLOW);      
	rectangle(100, 100, 200, 200); // cuadrado 1 
	setcolor(WHITE);
	outtextxy(150,150, "1" );
	delay(TI);
	dibu();
}


void cuadro2()
{
	setlinestyle( 0,1,4 );
    setcolor(YELLOW);     
	rectangle(210, 100, 310, 200); // cuadrado 2
	setcolor(WHITE);
	outtextxy(260,150, "2" );
	delay(TI);
	dibu();
}


void cuadro3()
{
	setlinestyle( 0,1,4 );
    setcolor(YELLOW);      
	rectangle(320, 100, 420, 200); // cuadrado 3
	setcolor(WHITE);
    outtextxy(370,150, "3" );   
	delay(TI);
	dibu();
}

void cuadro4()
{
	setlinestyle( 0,1,4 );
    setcolor(YELLOW);      
	rectangle(100, 210, 200, 300); // cuadrado 4 
	setcolor(WHITE);
    outtextxy(150,260, "4" );
	delay(TI);
	dibu();
}

void cuadro5()
{
	setlinestyle( 0,1,4 );
    setcolor(YELLOW);         
	rectangle(210, 210, 310, 300); // cuadrado 5
	setcolor(WHITE);
    outtextxy(260,260, "5" );
	delay(TI);
	dibu();
}

void cuadro6()
{
	setlinestyle( 0,1,4 );
    setcolor(YELLOW);        
	rectangle(320, 210, 420, 300); // cuadrado 6
	setcolor(WHITE);
    outtextxy(370,260, "6" );
	delay(TI);
	dibu();
}


void cuadro7()
{
	setlinestyle( 0,1,4 );
    setcolor(YELLOW);          
	rectangle(100, 310, 200, 400); // cuadrado 7
	setcolor(WHITE);
    outtextxy(150,360, "7" );
	delay(TI);
	dibu();
}

void cuadro8()
{
    setlinestyle( 0,1,4 );
    setcolor(YELLOW);       
	rectangle(210, 310, 310, 400); // cuadrado 8
	setcolor(WHITE);
    outtextxy(260,360, "8" );
	delay(TI);
	dibu();
}

void cuadro9()
{
	setlinestyle( 0,1,4 );
    setcolor(YELLOW);        
	rectangle(320, 310, 420, 400); // cuadrado 9
	setcolor(WHITE);
    outtextxy(370,360, "9" ); 
	delay(TI);
	dibu();
}








