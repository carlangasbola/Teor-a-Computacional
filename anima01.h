#include <stdio.h>
#include <string.h>
#include <winbgim.h>

void imprimeq0(void);
void imprimeq1(void);
void imprimeq2(void);
void mensaje(void);


void mensaje()
{
	setcolor(14);
	settextstyle(6,0,1);
	outtextxy(10,10, "Estados de un AFN durante el proceso de entrada");
	settextstyle(0,0,1);
}

void imprimeq0(int z)
{       
		moveto(z-30,50);
		lineto(z,50);
		outtextxy(z,50, "q0");	
}

void imprimeq1(int t)
{
	moveto(t-30,54);
    lineto(t-1,98);
	outtextxy(t,100, "q1");
}

void imprimeq2(int s)
{
	moveto(s-30,105);
    lineto(s-1,145);
	outtextxy(s,150, "q2");
}

