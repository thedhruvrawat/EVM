#include <iostream.h>
#include <conio.h>
#include <dos.h>
#include <graphics.h>
void description()
{
	int i,gd=DETECT,gm;
	initgraph(&gd,&gm,"..\\bgi");

	char ar[]={"DESCRIPTION : In this C++ project, a REGISTERED set of"};

	char arr[]={"VOTERS will be able to CAST their VOTE. They will have"};

	char arr1[]={"to PROVE their IDENTITY by giving their IDENTIFICATION"};

	char arr2[]={"NUMBER . An AUTHENTICATED USER'S VOTE will be accepted."};

	char arr3[]={"A user WHO HAS ALREADY CASTED A VOTE could NOT be able"};

	char arr4[]={"to VOTE again. After VOTING has FINISHED, RESULTS will"};

	char arr5[]={"be DECLARED. An EDIT option , will ALLOW to create NEW"};

	char arr6[]={"VOTERS and CHOOSE CANDIDATES."};


	delay(2500);
      cout<<"\n\t       ---------------------------------------------------     	\n";
	cout<<"\t         E L E C T I O N   V O T I N G   S O F T W A R E 	\n";
	cout<<"\t       ---------------------------------------------------	\n\n";
	delay(500);
	cout<<"\t     ";
	for(i=0;ar[i]!='\0';i++)
	{
		delay(50);
		cout<<ar[i];
	}
	cout<<"\n\n\t     ";
	for(i=0;arr[i]!='\0';i++)
	{
		delay(50);
		cout<<arr[i];
	}
	cout<<"\n\n\t     ";
	for(i=0;arr1[i]!='\0';i++)
	{
		delay(50);
		cout<<arr1[i];
	}
	cout<<"\n\n\t     ";
	for(i=0;arr2[i]!='\0';i++)
	{
		delay(50);
		cout<<arr2[i];
	}
	cout<<"\n\n\t     ";
	for(i=0;arr3[i]!='\0';i++)
	{
		delay(50);
		cout<<arr3[i];
	}
	cout<<"\n\n\t     ";
	for(i=0;arr4[i]!='\0';i++)
	{
		delay(50);
		cout<<arr4[i];
	}
	cout<<"\n\n\t     ";
	for(i=0;arr5[i]!='\0';i++)
	{
		delay(50);
		cout<<arr5[i];
	}
	cout<<"\n\n\t     ";
	for(i=0;arr6[i]!='\0';i++)
	{
		delay(50);
		cout<<arr6[i];
	}
	cout<<"\n\n\n";
	delay(1200);
	cout<<"\n\t\tPLEASE PRESS ENTER TO CONTINUE or Esc. TO EXIT\t";
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
		cout<<"\n\n\t\t\t PRESS ENTER ";
	}
	closegraph();

}

