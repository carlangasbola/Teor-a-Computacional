#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <winbgim.h>
#define TIME 800


void igrafico();
void iiniq0();
void iq0_q1();
void iq1_q1();
void iq0_q0();
void iq1_q0();
void iq1_q2();
void iq2_q1();
void iq2_q0();
void iq2_q3();
void iq3_q1();
void iq3_q0();
void iestado_final();

void iinicializa()
{
	initwindow(800,600);
	igrafico();
	iiniq0();
}

void iestado_final()
{
	setlinestyle( 0,1,4 );
    setcolor(15);
	circle(550,200,30);  //estado final
    delay(TIME);
    igrafico();
}

void iq3_q0()
{
	setlinestyle( 0,1,4 );
    setcolor(3);
    arc(325, 260 , 25, 156, 240); // union de q0 con q3
    delay(TIME);
    igrafico();
    setlinestyle( 0,1,4 );
    setcolor(14);
    circle(100,200,40);	 //q0
    delay(TIME);
    igrafico();
}

void iq3_q1()
{
	setlinestyle( 0,1,4 );
    setcolor(3);
    arc( 400,120, 220, 320, 150 ); // union de q3 con q1
    delay(TIME);
    igrafico();
    setlinestyle( 0,1,4 );
    setcolor(14);
    circle(250,200,40);  //q1
    delay(TIME);
    igrafico();
}

void iq2_q3()
{
	setlinestyle( 0,1,4 );
    setcolor(3);
    moveto(440,200);
    lineto(510,200 );
    delay(TIME);
    igrafico();
    setlinestyle( 0,1,4 );
    setcolor(15);
    circle(550,200,40); //3
    delay(TIME);
    igrafico();

}

void iq2_q0()
{
	setlinestyle( 0,1,4 );
    setcolor(3);
    arc(250, 240 , 30, 150, 155); // union entre q0 y q2
    delay(TIME);
    igrafico();
    setlinestyle( 0,1,4 );
    setcolor(14);
    circle(100,200,40);	 //q0
    delay(TIME);
    igrafico();
}

void iq2_q1()
{
	setlinestyle( 0,1,4 );
    setcolor(3);
    arc( 330,250 ,60 ,125,100 );  // union de q2 con q1	
    delay(TIME);
    igrafico();
    setlinestyle( 0,1,4 );
    setcolor(14);
    circle(250,200,40);  //q1
    delay(TIME);
    igrafico();
}

void iq1_q2()
{
	setlinestyle( 0,1,4 );
	setcolor(3);
    moveto(290,200);
    lineto(360,200 );
    delay(TIME);
    igrafico();
    setlinestyle( 0,1,4 );
    setcolor(14);
	circle(400,200,40); //q2
    delay(TIME);
    igrafico();
}

void iiniq0()
{
	setlinestyle( 0,1,4 );
    setcolor(14);
    circle(100,200,40);	 //q0
    delay(TIME);
    igrafico();
}


void iq1_q0()
{
    setlinestyle( 0,1,4 );
    setcolor(3);
    arc(175, 210 , 40, 140, 65); //Union de q0 y q1
    delay(TIME);
    igrafico();
    setlinestyle( 0,1,4 );
    setcolor(14);
    circle(100,200,40);	 //q0
    delay(TIME);
    igrafico();
}

void iq0_q0()
{
	setlinestyle( 0,1,4 );
    setcolor(3);
    arc(70, 210 , 95, 300, 35); // union de q0 consigomismo
    delay(TIME);
    igrafico();
	setlinestyle( 0,1,4 );
    setcolor(14);
    circle(100,200,40);	 //q0
    delay(TIME);
    igrafico();
}

void iq0_q1()
{   
    setlinestyle( 0,1,4 );
    setcolor(3);
    moveto(140,200);   
    lineto( 210,200 );
    delay(TIME);
    igrafico();
    setlinestyle( 0,1,4 );
    setcolor(14);
    circle(250,200,40);  //q1
    delay(TIME);
    igrafico();
}

void iq1_q1()
{   
    setlinestyle( 0,1,4 );
    setcolor(3);
    arc(250, 260 , 130, 48, 35); //union de q1 consigomismo	
    delay(TIME);
    igrafico();
    setlinestyle( 0,1,4 );
    setcolor(14);
    circle(250,200,40);  //q1
    delay(TIME);
    igrafico();
}


void igrafico (  )
{	
    cleardevice();
	setlinestyle( 0,1,1 );							
	setcolor(14);						
	circle(100,200,40);	 //q0						
	circle(250,200,40);  //q1
	circle(400,200,40); //q2
	circle(550,200,40); //3
	
    setcolor(5);
    circle(550,200,30);  //estado final
    
    setcolor(3);
    moveto(140,200);   
    lineto( 210,200 );
 
    setcolor(3);
    moveto(290,200);
    lineto(360,200 );
    
    setcolor(3);
    moveto(440,200);
    lineto(510,200 );
    
    arc(70, 210 , 95, 300, 35); // union de q0 consigomismo
    arc(175, 210 , 40, 140, 65); //Union de q0 y q1   
    arc(250, 240 , 30, 150, 155); // union entre q0 y q2
    arc(250, 260 , 130, 48, 35); //union de q1 consigomismo	
    arc(325, 260 , 25, 156, 240); // union de q0 con q3
	arc( 330,250 ,60 ,125,100 );  // union de q2 con q1	
    arc( 400,120, 220, 320, 150 ); // union de q3 con q1	


// circulos que son las flecahas
setcolor( 5 ); 
{
circle(285,220,5); 
floodfill (285,220,5);
}
    
setcolor( 5 ); 
{
circle(67,176,5); 
floodfill (67,176,5);
}
    
setcolor( 5 ); 
{
circle(116,163,5); 
floodfill (116,163,5);
}
setcolor( 5 ); 
{
circle(106,163,5); 
floodfill (106,163,5);
}

setcolor( 5 ); 
{
circle(126,169,5);  
floodfill (126,169,5);
}


setcolor( 5 ); 
{
circle(275,169,5);  
floodfill (275,169,5);
}



setcolor( 5 ); 
{
circle(273,234,6); 
floodfill (273,233,5);
}
    


////////////////////////////////////7
setcolor( 5 ); 
{
circle(210,200,6); 
floodfill (210,200,5);
}

setcolor( 5 );                      //// Dibujo de direccion de i,n,g
{
circle(360,200,6); 
floodfill (360,200,5);
}

setcolor( 5 ); 
{
circle(510,200,6); 
floodfill (510,200,5);
}
///////////////////////////////////
    
       
    //Der,abajo 
     setcolor(9);
     outtextxy(10,170, "Not I"); 
     outtextxy(71,195, "Notghing");  
     outtextxy(230,195, "Saw I"); 
     outtextxy(380,195, "Saw IN"); 
     outtextxy(520,195, "Saw Ing"); 
     outtextxy(170,210, "I"); 
     outtextxy(320,210, "N"); 
     outtextxy(470,210, "G");
	 outtextxy(250,300, "I"); 
	 outtextxy(150,130, "Not I or N"); 
	 outtextxy(330,135, "I"); 
	 outtextxy(390,275, "I");
	 outtextxy(390,140, "Not I or G"); 
     outtextxy(550,140, "Not I");
	 outtextxy(550,300, "Finish");
     
}



