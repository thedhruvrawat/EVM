#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <dos.h>
#include <string.h>
#include <graphics.h>
#include <stdlib.h>
#include <time.h>
void ranpass();
void pass()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"..\\bgi");
	char ch;
	int r=0,b,c;
	char arr[30]="dhruv",arr2[30]="dhruv",forget_code[30]="admin@123",name[20],new_pass[20];
	char pass[20],pass1[20];
	int a,len, hasCapLetter, hasSmallLetter, hasSpecial, hasNum, flag, i;
	char x;
	i=0;

 Main:
	for(;;)
	{
		cleardevice();
		gotoxy(13,3) ;
		cout <<"-------------------------------------------------------" ;
		gotoxy(13,4) ;
		cout<<"  E L E C T I O N     V O T I N G     S O F T W A R E" ;
		gotoxy(13,5) ;
		cout <<"-------------------------------------------------------" ;
		gotoxy(13,7) ;
		cout <<"      * * * *  PASSWORD SECURITY SYSTEM  * * * *" ;
		gotoxy(13,8) ;
		cout <<"              ~~~~~~~~~~~~~~~~~~~~~~~~~~        " ;



		gotoxy(10,11);
		cout<<"Press F if forgot password.";
		gotoxy(10,13);
		cout<<"Press C to change password.";
		gotoxy(10,15);
		cout<<"Press R to generate random passwords.";
		gotoxy(10,20);
		cout<<"Enter the password to initialize the voting procedure : ";
		r=0;
		for(int i=0;;i++)
		{
		 //Again:

			ch=getch();
			if(ch==67)
			{

			   Pass:
				flag=0;
				cleardevice();
				gotoxy(13,3) ;
				cout <<"-------------------------------------------------------" ;
				gotoxy(13,4) ;
				cout<<"  E L E C T I O N     V O T I N G     S O F T W A R E" ;
				gotoxy(13,5) ;
				cout <<"-------------------------------------------------------" ;
				gotoxy(13,7) ;
				cout <<"      * * * *      CHANGE PASSWORD     * * * *" ;
				gotoxy(13,8) ;
				cout <<"                  ~~~~~~~~~~~~~~~~~             " ;

				gotoxy(10,11);
				cout<<"Enter old password: ";
				gotoxy(40,11);
				gets(pass1);
				if(strcmp(arr,pass1)==0)
				{
					New:
					gotoxy(10,13);
					cout<<"Enter new password: ";
					gotoxy(40,13);
					gets(arr);
					gotoxy(10,15);
					cout<<"Enter new password again: ";
					gotoxy(40,15);
					gets(new_pass);
					if(strcmp(arr,new_pass)==0)
					{
						if(strlen(arr)<=4)
						{
							gotoxy(30,22);
							cout<<"PASSWORD TOO SHORT...";
							getch();
							cleardevice();
							gotoxy(13,3) ;
							cout <<"-------------------------------------------------------" ;
							gotoxy(13,4) ;
							cout<<"  E L E C T I O N     V O T I N G     S O F T W A R E" ;
							gotoxy(13,5) ;
							cout <<"-------------------------------------------------------" ;
							gotoxy(13,7) ;
							cout <<"      * * * *      CHANGE PASSWORD     * * * *" ;
							gotoxy(13,8) ;
							cout <<"                  ~~~~~~~~~~~~~~~~~             " ;

							gotoxy(10,11);
							cout<<"Enter old password: ";
							gotoxy(40,11);
							puts(pass1);
							goto New;

						}
						else
						{
							if (strcmp(new_pass,pass1)==0)
							{
								gotoxy(30,22);
								cout<<"NEW PASSWORD MATCHES WITH OLD";
								getch();
								cleardevice();
								gotoxy(13,3) ;
								cout <<"-------------------------------------------------------" ;
								gotoxy(13,4) ;
								cout<<"  E L E C T I O N     V O T I N G     S O F T W A R E" ;
								gotoxy(13,5) ;
								cout <<"-------------------------------------------------------" ;
								gotoxy(13,7) ;
								cout <<"      * * * *      CHANGE PASSWORD     * * * *" ;
								gotoxy(13,8) ;
								cout <<"                  ~~~~~~~~~~~~~~~~~             " ;
								gotoxy(10,11);
								cout<<"Enter old password: ";
								gotoxy(40,11);
								puts(pass1);
								goto New;
							}
							else
							{
								hasCapLetter=hasSmallLetter=hasSpecial = 0;
								hasNum = flag = 0;
								while(pass1[i]!='\0')
								{
									x=pass1[i];

									if((x >= 'A') && (x <= 'Z')) { hasCapLetter = 1; flag+= 10;}
									if((x >= 'a') && (x <= 'z')) { hasSmallLetter = 1; flag+= 10;}
									if(((x >= '[') && (x <= '`')) || ((x >= '!') && (x <= '/')) || ((x >= ':') && (x <= '@')) || ((x >= '{') && (x <= '~')) ) { hasSpecial = 1; flag+= 10;}
									if((x >= '0') && (x <= '9')) { hasNum = 1; flag+= 10;}
									i++;
								}
	for(b=0;b<400;b++)
	{
		if(flag<=10)
		{
			setcolor(RED);
			outtextxy(100+b,260,"!");
			delay(10);
			gotoxy(18,19);
			cout<<"PASSWORD STRENGTH: VERY WEAK";
			if(b==50)
				break;
		}
		if(flag==20)
		{
			setcolor(MAGENTA);
			outtextxy(100+b,260,"!");
			delay(10);
			gotoxy(18,19);
			cout<<"PASSWORD STRENGTH: WEAK";
			if(b==100)
				break;
		}
		if(flag==30)
		{
			setcolor(LIGHTRED);
			outtextxy(100+b,260,"!");
			delay(10);
			gotoxy(18,19);
			cout<<"PASSWORD STRENGTH: OKAY";
			if(b==150)
				break;
		}
		if(flag==40)
		{
			setcolor(LIGHTMAGENTA);
			outtextxy(100+b,260,"!");
			delay(10);
			gotoxy(18,19);
			cout<<"PASSWORD STRENGTH: GOOD";
			if(b==200)
				break;
		}
		if(flag==50)
		{
			setcolor(YELLOW);
			outtextxy(100+b,260,"!");
			delay(10);
			gotoxy(18,19);
			cout<<"PASSWORD STRENGTH: VERY GOOD";
			if(b==250)
				break;
		}
		if(flag==60)
		{
			setcolor(CYAN);
			outtextxy(100+b,260,"!");
			delay(10);
			gotoxy(18,19);
			cout<<"PASSWORD STRENGTH: EXCELLENT";
			if(b==300)
				break;
		}
		if(flag>=70)
		{
			setcolor(GREEN);
			outtextxy(100+b,260,"!");
			delay(10);
			gotoxy(18,19);
			cout<<"PASSWORD STRENGTH: OUTSTANDING";
			if(b==350)
				break;
		}

	}
	flag=0;
							}
						}


						gotoxy(30,24);
						cout<<"PASSWORD CHANGED SUCCESSFULLY";
					       //	gotoxy(30,22);
						//cout<<hasCapLetter<<endl<<hasSmallLetter<<endl<<hasSpecial<<endl<<hasNum<<endl<<flag;
						//cout<<" PRESS ANY KEY TO CONTINUE...";
						getch();
						goto Main;
					}
					if(strcmp(arr,new_pass)!=0)

					{
						gotoxy(23,20);
						cout<<"ENTERED PASSWORDS DON'T MATCH. TRY AGAIN.";
						getch();
						cleardevice();
						gotoxy(13,3) ;
						cout <<"-------------------------------------------------------" ;
						gotoxy(13,4) ;
						cout<<"  E L E C T I O N     V O T I N G     S O F T W A R E" ;
						gotoxy(13,5) ;
						cout <<"-------------------------------------------------------" ;
						gotoxy(13,7) ;
						cout <<"      * * * *      CHANGE PASSWORD     * * * *" ;
						gotoxy(13,8) ;
						cout <<"                  ~~~~~~~~~~~~~~~~~             " ;
						gotoxy(10,11);
						cout<<"Enter old password: ";
						gotoxy(40,11);
						puts(pass1);
						goto New;
					}
				}

				else
				{
					gotoxy(30,20);
					delay(500);
					cout<<"WRONG PASSWORD";
					getch();
					goto Pass;
				}
			}
			if(ch==70)
			{

				cleardevice();
				gotoxy(13,3) ;
				cout <<"-------------------------------------------------------" ;
				gotoxy(13,4) ;
				cout<<"  E L E C T I O N     V O T I N G     S O F T W A R E" ;
				gotoxy(13,5) ;
				cout <<"-------------------------------------------------------" ;
				gotoxy(13,7) ;
				cout <<"      * * * *      FORGOT PASSWORD     * * * *" ;
				gotoxy(13,8) ;
				cout <<"                  ~~~~~~~~~~~~~~~~~             " ;
				gotoxy(10,13);
				cout<<"Security Question: ";
				gotoxy(15,15);
				cout<<"Enter the EVM security code: \t";
				gets(name);
				if(stricmp(name,forget_code)==0)
				{
					gotoxy(15,17);
					cout<<"Welcome ADMINISTRATOR, the password is ";
					puts(arr);
					gotoxy(17,20);
					cout<<"PRESS ANY KEY TO CONTINUE...";
					getch();
					goto Main;
				}

			}
			if(ch==13)
			{
				pass[r]='\0';
				break;
			}
			if(ch==82)
			{
				cleardevice();
				gotoxy(13,3) ;
				cout <<"-------------------------------------------------------" ;
				gotoxy(13,4) ;
				cout<<"  E L E C T I O N     V O T I N G     S O F T W A R E" ;
				gotoxy(13,5) ;
				cout <<"-------------------------------------------------------" ;
				gotoxy(13,7) ;
				cout <<"    * * * *    RANDOM PASSWORD GENERATOR    * * * *" ;
				gotoxy(13,8) ;
				cout <<"              ~~~~~~~~~~~~~~~~~~~~~~~~~~~       " ;
				gotoxy(10,13);
				ranpass();
				gotoxy(17,30);
				cout<<"PRESS ANY KEY TO CONTINUE...";
				getch();
				goto Main;


			}
			if(ch==8)
			{
				if(i>0)
				{
					cout<<ch<<" "<<ch;
					i-=2;
					r--;
				}
				else
					i--;
			}
			else
			{
				cout<<"* ";
				pass[r]=ch;
				r++;
			}

		}
		if(strcmp(arr,pass)==0)
		{
			break;
		}
		else
		{
			cout<<"\n\n\t\t\a!! INVALID PASSWORD HAS BEEN ENTERED BY YOU !!";
			delay(300);
			cout<<"\n\n\t\t\t------> PLEASE TRY AGAIN <------";
			getch();
		}

	}
	closegraph();
}
void ranpass()
{

	char alphabets[100] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','D','E','G','H','I','J','K','L','M','N','O','P','Q','S','T','U','V','W','X','Y','Z','1','2','3','4','5','6','7','8','9','0','`','!','@','#','$','%','^','&','*','(',')','-','+','=','[',']','{','}',':',';','"',',','.','<','>','/','?','_'};
	char rString[50];

	srand(time(NULL));
	int m,n,j;
	gotoxy(15,12) ;
	cout<<"Enter the number of characters required: ";
	cin>>n;
	gotoxy(15,14) ;
	cout<<"Enter the number of passwords required: ";
	cin>>j;
	for(int k=0;k<j;k++)
	{
		m=0;
		while(m<n) {
			int temp = rand() % 87;
			rString[m] = alphabets[temp];
			m++;
		}
			cout<<endl<<"\t\t\t"<<k+1<<") ";
			for(m=0; m<n; m++)
				cout<<rString[m];
			cout<<endl;
	}
}