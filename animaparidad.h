#include <winbgim.h>
#include <conio.h>
#define TIME 800

void q0_q1(void);
void q1_q0(void);
void q0_q2(void);
void q2_q0(void);
void q1_q3(void);
void q3_q1(void);
void q2_q3(void);
void q3_q2(void);
void iniq0(void);
void grafico(void);
void comienza(void);

void comienza()
{
	initwindow(600,600);
	grafico();
	iniq0();
}

void iniq0(void)
{
    setlinestyle( 0,1,4 );
    setcolor(10);
	circle ( 100,100,40 ); //dibuja q0
    delay(TIME);
    grafico();
}

void q3_q2()
{
	setlinestyle( 0,1,4 );
	setcolor(4);
    ellipse(250, 407 , 180, 0, 110,50);
    delay(TIME);
    grafico();
    setlinestyle( 0,1,4 );
    setcolor(10);
	circle ( 100,400,40 ); //dibuja q2
    delay(TIME);
    grafico();
}


void q2_q3()
{
	setlinestyle( 0,1,4 );
	setcolor(5);
    ellipse(250, 394 , 0, 180, 110,50);
    delay(TIME);
    grafico();
    setlinestyle( 0,1,4 );
    setcolor(10);
	circle ( 400,400,40 ); //dibuja q3
    delay(TIME);
    grafico();
}


void q3_q1()
{
	setlinestyle( 0,1,4 );
	setcolor(5);
    ellipse(390, 250 , 90, 270, 50,110);
    delay(TIME);
    grafico();
    setlinestyle( 0,1,4 );
    setcolor(10);
	circle ( 400,100,40 ); //dibuja q1
    delay(TIME);
    grafico();
}


void q1_q3()
{
	setlinestyle( 0,1,4 );
	setcolor(4);
    ellipse(410, 250 , 270, 90, 50,110);
    delay(TIME);
    grafico();
    setlinestyle( 0,1,4 );
    setcolor(10);
	circle ( 400,400,40 ); //dibuja q3
    delay(TIME);
    grafico();
}


void q2_q0()
{
	setlinestyle( 0,1,4 );
	setcolor(4);
    ellipse(110, 250 , 270, 90, 50,110);
    delay(TIME);
    grafico();
    setlinestyle( 0,1,4 );
    setcolor(10);
	circle ( 100,100,40 ); //dibuja q0
    delay(TIME);
    grafico();
}


void q0_q2()
{
	setlinestyle( 0,1,4 );
	setcolor(5);
    ellipse(90, 250 , 90, 270, 50,110);
    delay(TIME);
    grafico();
    setlinestyle( 0,1,4 );
    setcolor(10);
	circle ( 100,400,40 ); //dibuja q2
    delay(TIME);
    grafico();
}


void q1_q0()
{
	setlinestyle( 0,1,4 );
	setcolor(5);
    ellipse(250, 100 , 180, 0, 103,50);
    delay(TIME);
    grafico();
    setlinestyle( 0,1,4 );
    setcolor(10);
	circle ( 100,100,40 ); //dibuja q0
    delay(TIME);
    grafico();
}


void q0_q1()
{
	setlinestyle( 0,1,4 );	
    setcolor(4);
	ellipse(250, 100 , 0, 180, 103,50);
    delay(TIME);
    grafico();
    setlinestyle( 0,1,4 );
    setcolor(10);
	circle ( 400,100,40 ); //dibuja q1
    delay(TIME);
    grafico();
}


void grafico ()
{
    cleardevice();
	setlinestyle( 0,1,1 );	
			
	setcolor(10);
	settextstyle( 10, 0, 1 );
	circle ( 100,100,40 ); //dibuja q0
	
	setcolor(11);
	outtextxy(90,90, "q0");
	circle ( 100,100,30 ); //dibuja el estado final
	
	setcolor(10);	
	outtextxy(390,90, "q1");			
	circle ( 400,100,40 ); //dibuja q1
	
	setcolor(10);
	outtextxy(90,390, "q2");
	circle ( 100,400,40 ); //dibuja q2
	
 	
 	setcolor(10);
 	outtextxy(390,390, "q3");
	circle ( 400,400,40 ); //dibuja q3
	
	
	// linea de 0 y 1
	setcolor(3);
	outtextxy(250,155, "1");
	outtextxy(250,30, "1");
	
	outtextxy(30,250, "0");
	outtextxy(165,250, "0");
	
	outtextxy(330,250, "0");
	outtextxy(470,250, "0");
	
	outtextxy(250,350, "1");
	outtextxy(250,460, "1");
	
     // Dibuja las elipses
	/// arriba
	setcolor(4);
	ellipse(250, 100 , 0, 180, 103,50);
	circle (140,95, 8); 
    floodfill(140,95,4);
    
    setcolor(5);
    ellipse(250, 100 , 180, 0, 103,50);
	circle (360,95, 8);
	floodfill(360,95,5);
    
	// abajo
	setcolor(5);
	ellipse(250, 394 , 0, 180, 110,50);
	circle (140,400, 8); 
    floodfill(140,400,5);
	
	setcolor(4);
	ellipse(250, 407 , 180, 0, 110,50);
    circle (360,400, 8);
	floodfill(360,400,4);
					
	// derecha 
	setcolor(5);
	circle (100,140, 8); 
	ellipse(90, 250 , 90, 270, 50,110);
    floodfill(100,140,5);
	
	setcolor(4);
	circle (100,360, 8);
	ellipse(110, 250 , 270, 90, 50,110);
	floodfill(100,360,4);
    
	// izquierda
	setcolor(5);
	circle (400,140, 8); 
	ellipse(390, 250 , 90, 270, 50,110);
	floodfill(400,140,5);
	
	setcolor(4);
	circle (400,360, 8);
	ellipse(410, 250 , 270, 90, 50,110);
	floodfill(400,360,4);				
			
}

