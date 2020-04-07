#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <stdlib.h>
#include <iostream.h>
void loading()
{


	int i,k=0,gd=DETECT,gm;
	initgraph(&gd,&gm,"..\\bgi");
		gotoxy(13,3) ;
		cout <<"-------------------------------------------------------" ;
		gotoxy(13,4) ;
		cout<<"  E L E C T I O N     V O T I N G     S O F T W A R E" ;
		gotoxy(13,5) ;
		cout <<"-------------------------------------------------------" ;
	setcolor(WHITE);
	rectangle(72,166,578,204);
	setcolor(WHITE);
	for(i=50;i<550;i++)
	{
		line(25+i,170,25+i,200);
	}


	delay(2000);
	for(i=50;i<550;i++)
	{
		if(i%5==0)
			k++;
		setfillstyle(9,LIGHTGREEN);                 //** this is for green filling in the loading bar.
		bar(25+i,170,25+i,200);	 //** this is for increasing the size of green bar.
		gotoxy(70,10);                   //** for center use (40,12) for upper right (70,10)
		cout<<k<<"%";
		setcolor(WHITE);                 //** this is for the text color.
		settextstyle(TRIPLEX_FONT,0,5);   //** this is for the font style.
		outtextxy(100,220,"L O A D I N G");    //** text that you want to show.
		delay(10);		      //** delay for some seconds.

		setcolor(rand()%16);             //** this is for color full loading dots.
		settextstyle(SMALL_FONT,HORIZ_DIR,16);
		outtextxy(425,220,". . . .");        //** for showing the dots.
		delay(10);
	}

	gotoxy(20,20);
	delay(1200);
	setcolor(WHITE);
	settextstyle(SMALL_FONT,0,6);   //** this is for the font style.
	outtextxy(138,340,"The EVM Program has loaded completely.");
	outtextxy(103,375,"Please press ENTER to CONTINUE or Esc. to EXIT");
	char ch;
	for(;;)
	{
		ch=getch();
		if(ch==13)
			break;
		else
			if(ch==27)
				exit(-1);
			else
				cout<<"\n\n\t\t\t\a ! WRONG KEY ENTERED !";
		delay(300);
		cout<<"\n\n\n\n\t\t\t PRESS ENTER ";
	}

	closegraph();                   //** for closing the graph.

}