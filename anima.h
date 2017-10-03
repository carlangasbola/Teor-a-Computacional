#include <winbgim.h>
#include <conio.h>
#define TIME 800

void pinta(void);
void inie1(void);
void e1_12(void);
void e12_1(void);
void e12_135(void);
void e135_12(void);
void e135_1(void);
void e12_12(void);
void e135_146(void);
void e135_15(void);
void e146_12(void);
void e146_1(void);
void e1_15(void);
void e15_15(void);
void e15_12(void);
void e15_1(void);
void e15_16(void);
void e146_15(void);
void e16_12(void);
void e16_1(void);
void e16_15(void);
void e1_1(void);
void e16_17(void);
void e146_17(void);
void e17_12(void);
void e17_15(void);
void e17_1(void);
void e17_18(void);
void e18_12(void);
void e18_15(void);
void e18_1(void);
void comenzar(void);

void comenzar()
{
	initwindow(800,800);
	pinta();
	inie1();
}

void e18_1()
{
	setlinestyle( 0,1,4 );
    setcolor(3);
    arc(300,310,185,335,260); // arco de 18 a 1
    delay(TIME);
    pinta();
    setlinestyle( 0,1,4 );
    setcolor(1);
    circle(40,290,40); // Circulo 1
    delay(TIME);
    pinta();
}

void e18_15()
{
	setlinestyle( 0,1,4 );
	setcolor(3);
    arc(330,250,224,321,250); // arco de 18 a 15
    delay(TIME);
    pinta();
    setlinestyle( 0,1,4 );
    setcolor(1);
    circle(140,390,40); // circulo 15
    delay(TIME);
    pinta();
}

void e18_12()
{
	setlinestyle( 0,1,4 );
    moveto(560,350); // linea de 18 a 12
      setcolor(3);
     lineto(140,230);
    delay(TIME);
    pinta();
    setlinestyle( 0,1,4 );
    setcolor(1);
    circle(140,190,40); // Circulo 12
    delay(TIME);
    pinta();
}

void e17_18()
{
	setlinestyle( 0,1,4 );
    moveto(460,390); // linea de 17 a 18
    setcolor(3);
    lineto(520,390);
    delay(TIME);
    pinta();
    setlinestyle( 0,1,4 );
    setcolor(1);
     circle(560,390,40); // circulo 18
     setcolor(15);
     circle(560,390,35); // estado final
    delay(TIME);
    pinta();
}

void e17_1()
{
	setlinestyle( 0,1,4 );
	setcolor(3);
    arc(230,300,185,323,210); // arco de 17 a 1
    delay(TIME);
    pinta();
    setlinestyle( 0,1,4 );
    setcolor(1);
    circle(40,290,40); // Circulo 1
    delay(TIME);
    pinta();
}

void e17_15()
{
	setlinestyle( 0,1,4 );
	setcolor(3);
    arc(280,370,203,335,120); // arco de 17 a 15
    delay(TIME);
    pinta();
    setlinestyle( 0,1,4 );
    setcolor(1);
    circle(140,390,40); // circulo 15
    delay(TIME);
    pinta();
}

void e17_12()
{
	setlinestyle( 0,1,4 );
    moveto(420,350); // linea de 17 a 12
    setcolor(3);
    lineto(140,230);
    delay(TIME);
    pinta();
    setlinestyle( 0,1,4 );
    setcolor(1);
    circle(140,190,40); // Circulo 12
    delay(TIME);
    pinta();
}

void e146_17()
{
	setlinestyle( 0,1,4 );
    setcolor(3);
    arc(340,290,328,33,120); // arco de 17 a 146
    delay(TIME);
    pinta();
    setlinestyle( 0,1,4 );
    setcolor(1);
    circle(420,390,40); // circulo 17
    delay(TIME);
    pinta();
}

void e16_17()
{
	setlinestyle( 0,1,4 );
    moveto(320,390); // linea de 16 a 17
    setcolor(3);
    lineto(380,390);
    delay(TIME);
    pinta();
    setlinestyle( 0,1,4 );
    setcolor(1);
    circle(420,390,40); // circulo 17
    delay(TIME);
    pinta();
}

void e1_1()
{
	inie1();
	pinta();
	delay(TIME);
}

void e16_15()
{
	setlinestyle( 0,1,4 );
    setcolor(3);
    arc(210,320,241,295,120); // arco de 15 a 16
    delay(TIME);
    pinta();
    setlinestyle( 0,1,4 );
    setcolor(1);
    circle(140,390,40); // circulo 15
    delay(TIME);
    pinta();
}

void e16_1()
{
	setlinestyle( 0,1,4 );
    setcolor(3);
    arc( 190,260,195,295,190); // arco de 1 a 16
    delay(TIME);
    pinta();
    setlinestyle( 0,1,4 );
    setcolor(1);
    circle(40,290,40); // Circulo 1
    delay(TIME);
    pinta();
}

void e16_12()
{
	setlinestyle( 0,1,4 );
    setcolor(3);
    moveto(280,350); // linea de 16 a 12
    lineto(140,230);
    delay(TIME);
    pinta();
    setlinestyle( 0,1,4 );
    setcolor(1);
   circle(140,190,40); // Circulo 12
    delay(TIME);
    pinta();
}

void e146_15()
{
	setlinestyle( 0,1,4 );
     setcolor(3);
     moveto(420,230); // flecha de 146 a 15
     lineto(140,350);  
    delay(TIME);
    pinta();
    setlinestyle( 0,1,4 );
    setcolor(1);
   circle(140,390,40); // circulo 15
    delay(TIME);
    pinta();
}

void e15_16()
{
	setlinestyle( 0,1,4 );
	 moveto(180,390); // linea de 15 a 16
     setcolor(3);
     lineto(240,390);
    delay(TIME);
    pinta();
    setlinestyle( 0,1,4 );
    setcolor(1);
    circle(280,390,40); // circulo 16
    delay(TIME);
    pinta();
}

void e15_1()
{
	setlinestyle( 0,1,4 );
	setcolor(3);
    arc (140,300,193,255,120); // arco 1 a 15
    delay(TIME);
    pinta();
    setlinestyle( 0,1,4 );
    setcolor(1);
    circle(40,290,40); // Circulo 1
    delay(TIME);
    pinta();
}

void e15_12()
{
	setlinestyle( 0,1,4 );
	setcolor(3);
    arc(218,290,148,213,120); // arco de 12 a 15
    delay(TIME);
    pinta();
    setlinestyle( 0,1,4 );
    setcolor(1);
    circle(140,190,40); // Circulo 12
    delay(TIME);
    pinta();
}


void e15_15()
{
	setlinestyle( 0,1,4 );
	setcolor(10);
    arc(130,420,160,350,30); // w 15 consigo mismo
    delay(TIME);
    pinta();
    setlinestyle( 0,1,4 );
    setcolor(1);
    circle(140,390,40); // circulo 15
    delay(TIME);
    pinta();
}


void e1_15()
{
	setlinestyle( 0,1,4 );
	setcolor(3);
    moveto(60,320);    // Flecha de 1 a 15 W
    lineto(110,370 );
    delay(TIME);
    pinta();
    setlinestyle( 0,1,4 );
    setcolor(1);
    circle(140,390,40); // circulo 15
    delay(TIME);
    pinta();
}

void e135_15()
{
	setlinestyle( 0,1,4 );
	setcolor(3);
    moveto(280,230); // flecha de 135 a 15
     lineto(140,350);
    delay(TIME);
    pinta();
    setlinestyle( 0,1,4 );
    setcolor(1);
    circle(140,390,40); // circulo 15
    delay(TIME);
    pinta();
}



void e146_1()
{
	setlinestyle( 0,1,4 );
    setcolor(3);
    arc(240,250,30,180,200); //arco de 1 a 146
    delay(TIME);
    pinta();
    setlinestyle( 0,1,4 );
    setcolor(1);
    circle(40,290,40); // Circulo 1
    delay(TIME);
    pinta();
}


void e146_12()
{
	setlinestyle( 0,1,4 );
    setcolor(3);
    arc(280,270,44,136,160); // arco de 12 a 146
    delay(TIME);
    pinta();
    setlinestyle( 0,1,4 );
    setcolor(1);
    circle(140,190,40); // Circulo 12
    delay(TIME);
    pinta();
}

void e135_146()
{
	setlinestyle( 0,1,4 );
    moveto(320,190);    // flecha de 135 a 146
    setcolor(3);
    lineto(380,190 );
    delay(TIME);
    pinta();
    setlinestyle( 0,1,4 );
    setcolor(1);
    circle(420,190,40);  // circulo 146
    setcolor(15);
    circle(420,190,35);  // estado final
    delay(TIME);
    pinta();
}


void e12_12()
{
	setlinestyle( 0,1,4 );
    setcolor(10);
    arc(130,150,-7,220,30); // w 12 consigo mismo
    delay(TIME);
    pinta();
    setlinestyle( 0,1,4 );
    setcolor(1);
    circle(140,190,40); // Circulo 12
    delay(TIME);
    pinta();
}


void e135_1()
{
	setlinestyle( 0,1,4 );
    setcolor(3);
    arc(180,250,43,180,151); // arco de 1 a 135
    delay(TIME);
    pinta();
    setlinestyle( 0,1,4 );
    setcolor(1);
    circle(40,290,40); // Circulo 1
    delay(TIME);
    pinta();
}


void e135_12()
{
	setlinestyle( 0,1,4 );
    setcolor(3);
    arc(220,220,60,131,70); // arco de 12 a 135
    delay(TIME);
    pinta();
    setlinestyle( 0,1,4 );
    setcolor(1);
    circle(140,190,40); // Circulo 12
    delay(TIME);
    pinta();
}


void e12_135()
{
	setlinestyle( 0,1,4 );
    moveto(180,190);   // flecha de 12 a 135
    setcolor(3);
    lineto(240,190 );
    delay(TIME);
    pinta();
    setlinestyle( 0,1,4 );
    setcolor(1);
     circle(280,190,40); // circulo 135
    delay(TIME);
    pinta();
}


void inie1()
{
	setlinestyle( 0,1,4 );
    setcolor(1);
    circle(40,290,40); // Circulo 1
    delay(TIME);
    pinta();
}

void e12_1()
{
	setlinestyle( 0,1,4 );
    setcolor(3);
    arc( 140,260, 110, 175, 100 );	// arco de 1 a 12
    delay(TIME);
    pinta();
    setlinestyle( 0,1,4 );
    setcolor(1);
    circle(40,290,40); // Circulo 1
    delay(TIME);
    pinta();
}

void e1_12()
{
	setlinestyle( 0,1,4 );
    setcolor(3);
    moveto(65,259);    // Flecha de 1 a 12 W
    setcolor(3);
	lineto(105,215 );
    delay(TIME);
    pinta();
    setlinestyle( 0,1,4 );
    setcolor(1);
    circle(140,190,40); // Circulo 12
    delay(TIME);
    pinta();
}


void pinta ()
{
    cleardevice();
	setlinestyle( 0,1,1 );	
     
     setcolor(1);
     circle(40,290,40); // Circulo 1
     moveto(65,259);    // Flecha de 1 a 12 W
     
     setcolor(3);
	 lineto(105,215 );
     moveto(60,320);    // Flecha de 1 a 15 W
     lineto(110,370 );
     

     /*ARCOS */
     setcolor(3);
     arc( 140,260, 110, 175, 100 );	// arco de 1 a 12
     arc(180,250,43,180,151); // arco de 1 a 135
     arc(220,220,60,131,70); // arco de 12 a 135
     arc(280,270,44,136,160); // arco de 12 a 146
     arc(240,250,30,180,200); //arco de 1 a 146
     arc(210,320,241,295,120); // arco de 15 a 16
     arc(218,290,148,213,120); // arco de 12 a 15
     arc(340,290,328,33,120); // arco de 17 a 146
     arc (140,300,193,255,120); // arco 1 a 15
     arc( 190,260,195,295,190); // arco de 1 a 16
     arc(280,370,203,335,120); // arco de 17 a 15
	 arc(330,250,224,321,250); // arco de 18 a 15
     arc(300,310,185,335,260); // arco de 18 a 1
     arc(230,300,185,323,210); // arco de 17 a 1
     
     setcolor(1);
     circle(140,190,40); // Circulo 12
     moveto(180,190);   // flecha de 12 a 135
     setcolor(3);
     lineto(240,190 );
     setcolor(10);
     
     arc(130,150,-7,220,30); // w 12 consigo mismo
     arc(130,420,160,350,30); // w 15 consigo mismo
     
      setcolor(1);
     circle(280,190,40); // circulo 135
     moveto(320,190);    // flecha de 135 a 146
      setcolor(3);
     lineto(380,190 );
     moveto(280,230); // flecha de 135 a 15
     lineto(140,350);
     
      setcolor(1);
     circle(420,190,40);  // circulo 146
     setcolor(15);
     circle(420,190,35);  // estado final
     setcolor(3);
     moveto(420,230); // flecha de 146 a 15
     lineto(140,350);     
     
      setcolor(1);
     circle(140,390,40); // circulo 15
     moveto(180,390); // linea de 15 a 16
      setcolor(3);
     lineto(240,390);
   
      setcolor(1);
     circle(280,390,40); // circulo 16
     moveto(320,390); // linea de 16 a 17
      setcolor(3);
     lineto(380,390);
     moveto(280,350); // linea de 16 a 12
     lineto(140,230);
     
      setcolor(1);
     circle(420,390,40); // circulo 17
     moveto(460,390); // linea de 17 a 18
      setcolor(3);
     lineto(520,390);
     
      setcolor(1);
     circle(560,390,40); // circulo 18
     setcolor(15);
     circle(560,390,35); // estado final
     moveto(560,350); // linea de 15 a 12
      setcolor(3);
     lineto(140,230);  //
     
     moveto(420,350); // linea de 17 a 12
      setcolor(3);
     lineto(140,230);
     
     // flechas representadas por circulos
     
     setcolor(15);
	 circle(110,215,5);   // Dibuja flecha de 1 a 12
     floodfill (110,215,15);
     
	 circle(110,370,5);   // Dibuja flecha de 1 a 15
     floodfill (110,370,15);
     
	 circle(140,230,5);   // Dibuja flecha de 15,16,17,18 a 12
     floodfill (140,230,15);
  
	 circle(240,390,5);   // Dibuja flecha de 15 a 16
     floodfill (240,390,15);
     
	 circle(380,390,5);   // Dibuja flecha de 16 a 17
     floodfill (380,390,15);
     
     circle(380,390,5);   // Dibuja flecha de 16 a 17
     floodfill (380,390,15);
     
     circle(380,190,5);   // Dibuja flecha de 135 a 146
     floodfill (380,190,15);
     
     circle(240,190,5);   // Dibuja flecha de 12 a 135
     floodfill (240,190,15);
     
     circle(520,390,5);   // Dibuja flecha de 17 a 18
     floodfill (520,390,15);
     
     circle(140,350,5);   // Dibuja flecha de 135 y 146 a 1
     floodfill (140,350,15);
     
     circle(122,220,5);   // Dibuja flecha de 15 a 12
     floodfill (122,220,15);
     
     circle(175,170,5);   // Dibuja flecha de 135 a 12
     floodfill (175,170,15);
     
     circle(170,160,5);   // Dibuja flecha de 146 a 12
     floodfill (170,160,15);
     
     circle(144,360,5);   // Dibuja flecha de 146 a 12
     floodfill (144,360,15);
     
     circle(144,360,5);   // Dibuja flecha de 146 a 12
     floodfill (144,360,15);
     
     circle(440,360,5);   // Dibuja flecha de 146 a 17
     floodfill (440,360,15);
     
     circle(156,423,5);
     floodfill(156,423,15);
     
     circle(170,412,5);
     floodfill(170,412,15);
     
     circle(40,330,5);
     floodfill(40,330,15);
     
     circle(25,320,5);
     floodfill(25,320,15);
     
     circle(40,250,5);
     floodfill(40,250,15);
     
     circle(30,250,5);
     floodfill(30,250,15);
     
     circle(10,310,5);
     floodfill(10,310,15);
     
     // Circulo dibujado de otro color para identificar con mayor facilidad y no
     setcolor(10);
     circle(108,167,5);
     floodfill(108,167,10);
     
     circle(105,410,5);
     floodfill(105,410,10);
     
     
     
     //Texto a salir
     settextstyle(6,0,1);
     outtextxy(10,10,"Coversión del AFN a un AFD");
     
     setcolor(14);
     settextstyle(5,0,1);
     outtextxy(35,280,"1");
     outtextxy(130,185,"12");
     outtextxy(265,185,"135");
     outtextxy(405,185,"146");
     outtextxy(130,390,"15");
     outtextxy(270,390,"16");
     outtextxy(410,380,"17");
     outtextxy(550,380,"18");
     outtextxy(75,210,"w");
     outtextxy(80,350,"e");
     outtextxy(105,280,"w");
     outtextxy(220,125,"w");
     outtextxy(300,80,"w");
     outtextxy(170,270,"w");
     outtextxy(200,199,"e");
     outtextxy(360,199,"b");
     outtextxy(465,250,"a");
     outtextxy(475,360,"y");
     outtextxy(205,365,"b");
     outtextxy(340,365,"a");
     outtextxy(125,125,"w");
     outtextxy(548,321,"w");
     outtextxy(410,321,"w");
     outtextxy(287,230,"e");
     outtextxy(424,235,"e");
     outtextxy(220,410,"e");
     outtextxy(360,410,"e");
     outtextxy(490,410,"e");
     outtextxy(90,380,"e");
     settextstyle(2,0,4);
     outtextxy(180,70,"[E-b-e-w]");
     outtextxy(380,70,"[E-a-e-w]");
     outtextxy(530,450,"[E-e-w]");
     outtextxy(349,500,"[E-e-w-y]");
     outtextxy(190,515,"[E-a-e-w]");
     outtextxy(272,438,"[E-b-e-w]");
     outtextxy(50,165,"[E-e-w]");
     outtextxy(0,242,"E-e-w");
     
}
