#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<fstream.h>
#include<process.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
   char bus[10];
       char mfrom[20],mto[20],arr[20],dep[20],fare[10];
       int x,p=0,z,j;
	fstream f,g;
class reservation
{
public:
char file[50];

char name[20],from[20],to[20],ddate[20],adate[20],id[20],con[15];
int busno,seatno,age;
void input()
{

 cout<<" \n\t\tMADRID BUS SERVICE ";

     cout<<" \n\t\tBUS NUMBER : "<<x<<"\t\tFare : "<<fare<<endl;
     cout<<" \n\t\tFROM    : "<<mfrom<<"      TO :"<<mto;
     cout<<" \n\t\tARRIVAL : "<<arr<<"        DEPART :"<<dep;
     cout<<"\n................................................................";
     busno=x;
     cout<<endl<<"\nEnter Name: ";
     gets(name);
     cout<<"\nEnter Age: ";
     cin>>age;
      cout<<"\nEnter Contact Number: ";
     gets(con);
	cout<<"\nEnter Departure Date: ";
     gets(ddate);
     cout<<"\nEnter Arrival Date: ";
     gets(adate);
     cout<<"\nEnter ID: ";
     gets(id);
    randomize();
     seatno=random(30)+1;
     cout<<"\n\n\tYour Seat Number Is: "<<seatno<<endl;
     cout<<endl;

      }
void display()
{
cout<<endl<<" \tBUS NUMBER : "<<x<<endl;
cout<<"FROM    : "<<mfrom<<"           TO :"<<mto<<"         ARRIVAL : "<<arr<<"        DEPART :"<<dep<<endl;
cout<<"................................................................";
cout<<endl<<"Name		Age		Mobile No. "<<endl;
cout<<name<<"\t\t";
cout<<age<<"\t\t";
cout<<con;
cout<<endl<<"Journey Date		Arrival Date		ID  "<<endl;
cout<<ddate<<"\t\t\t";
cout<<adate<<"\t\t\t";
cout<<id<<endl;
cout<<"Seat No.   : ";
cout<<seatno<<endl;
cout<<"Fare : "<<fare<<endl;
cout<<"*******************************************************************************";
}
    void update()
    {
       cout<<"Enter ID Whose Record Is To Be Updated:"<<"\t";
	cin>>m;



    while(f.read((char *)&s,sizeof(s)))
       {
	     if(strcmpi(s.id,m)==0)
	       {
		 k++;
		 break;
	       }
	}
	      f.clear();
	     if(k==0)
		cout<<"\n\n\t\tRecord Not Found.......!!!!!!\n\n\t\t\tPress Any Key";
	     else
	       {
		 cout<<"\n\n\t\tRecord Found Successfully...!!!!!!\n\n\t\t\tPress Any Key";
		 getch();
		 clrscr();
		 cout<<endl<<"1. Press A To Update Contact No"<<endl;
															       //	 cout<<"2. Press B To Update name"<<endl;
																     //	 cout<<"3. Press C To Update age"<<endl;
		 cout<<endl<<"Enter Your Choice:";
		 cin>>c;
		 f.seekp(f.tellp()-sizeof(s));
		 switch(c)
		  {
		    case 'A':
		     {
		       cout<<"Enter New Mobile Number:";
		       gets(mn);
		       strcpy(s.con,mn);
		       break;
		     }
		    default:

		       clrscr();
		       cout<<"\n\n\n\t\tPlease Enter A Valid Choice!!!!!\n\n\n\t\t\tPress Any Key";
					 break;

		}
		 f.write((char*)&s,sizeof(s));
	    }
       }


}s;
char c,m[8],mn[12],a[10],up[7];
 int k=0,l=0;
int n;
void input1(void);
void display1(void);
void update1(void);
void delete1(void);
void main()
{
clrscr();
    textbackground(WHITE);
  textcolor(BLACK);
cout<<"********************************************************************************";
cout<<"\n\t\t\tDEPARTMENT OF COMPUTER SCIENCE";
cout<<"\n\t\t\t------------------------------";
sleep(1);
cout<<"\n\t\t AMRITSAR COLLEGE OF ENGINEERING AND TECHNOLOGY";
sleep(1);
cout<<"\n\n\n\n\t\t\t\t  * PROJECT ON *            ";
cout<<"\n\t\t	     BUS RESERVATION SYSTEM "<<"\n\t\t\t\t"<<"MADRID BUS SERVICE";
sleep(1);
cout<<"\n\n\n\n\t SUBMITTED TO:                          SUBMITTED BY:";
cout<<"\n   HOD (Computer Science Department)     1. Yash Udaiwal   (1800339)";
cout<<"\n         Amritsar College                2. Yash Jhalani   (1800338)";
cout<<"\n                Of                       3. Vishal Plathia (1800336)";
cout<<"\n     Engineering And Technology          4. Vishal Kumar   (1800335)";
cout<<"\n\n\n\t\t\tPress any key to continue!!";
    getch();
    clrscr();
int choice;
cout<<"\n\n********************************************************************************";
cout<<"\n\n\n\t\t* ENTER THE MODE YOU WANT TO CHOOSE:-";
cout<<"\n\t\t  ----------------------------------";
cout<<"\n\n\n\t\t   1. LOGIN To Portal\n\n\t\t   2. EXIT\n\t";
cout<<endl;
sleep(1);
cout<<"\n\n\t\t* ENTER THE CHOICE:-";
cin>>choice;
clrscr();
char user1[10],pass1[6],c,a[10];
int z,t=1;
char pass[6]="admin";
char user[10]="user";

switch(choice)
{
case 1:
cout<<"\n********************************************************************************";
cout<<"\n    WELCOME TO LOGIN PAGE:-";
cout<<"\n      MADRID BUS SERVICE";
cout<<"\n   ------------------------";
cout<<"\n\n\n\t\t********** LOGIN FORM **********"<<endl;
cout<<"\n\n\t\t\t\tUsername: ";
gets(user1);
	if(strcmp(user1,user)==0)
   {
     x:
	cout<<endl<<"\n\t\t\t\tPassword: ";
	for(z=0;z<5;z++)
	{
	c=getch();
	pass1[z]=c;
	cout<<"*";
	}
	pass1[5]='\0';
	getch();
    while(t<3)
    {
    if(strcmp(pass,pass1)==0)
    {cout<<"  Correct Password..!!";
    getch();
    clrscr();
    break;
     }


   else
   {cout<<"Invalid Password..!!:";
    t++;
    goto x;
    }
    }
    if(t==3)
    exit(0);
    }
	else
	 {
	cout<<"\n\t\t\t\tWrong username....!!";
	getch();
	exit(0);
	}

	break;


    case 2:
    exit(0);
    getch();
    break;
    default:
    exit(0);
    getch();
}

int ch,r,i,n;
do{

       cout<<"\n\n\t\t*********MADRID BUS SERVICE*********";
       cout<<"\n\n\n\t1. Press 1 To Book Reservations";
       cout<<"\n\n\t2. Press 2 To Display Reservations";
       cout<<"\n\n\t3. Press 3 To Update A Reservation";
       cout<<"\n\n\t4. Press 4 To Cancel A Reservation";
       cout<<"\n\n\t5. Press 5 To Exit Portal"<<endl;
       cout<<"\n\n\tEnter Your Choice:  ";
       cin>>ch;
     switch(ch)

       {
	 case 1:
	     clrscr();
 cout<<"     >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
 cout<<"\n\t\t\t**********MADRID BUS SERVICE**************";
 cout<<"\t\t\t AVAILABLE BUSES ARE :   ";
 cout<<"\n\t\tBus Number\tFrom  \tTo     \tDEP. \tARR.\tFare"<<endl;
 cout<<"\n\t\t1234      \tMumbai\tDelhi  \t11:00\t14:30\t700"<<endl;
 cout<<"\n\t\t3456      \tDelhi \tManali \t12:00\t14:45\t900"<<endl;
 cout<<"\n\t\t4321      \tMumbai\tGoa    \t11:15\t13:30\t500"<<endl;
 cout<<"\n\t\t6534      \tPune  \tMumbai \t14:00\t22:30\t300"<<endl;
 cout<<"\n\t\t9067      \tDelhi \tLucknow\t14:45\t17:30\t1100"<<endl;
 cout<<"\n\t\t5678      \tPune  \tShirdi \t15:40\t23:00\t600"<<endl;
 cout<<"\n    ......................................................................"<<endl;
 cout<<"\n Enter The Bus Number : ";
 gets(bus);
 if((strcmp(bus,"1234")==0))
 {
 strcpy(mfrom,"MUMBAI");
 strcpy(mto,"DELHI");
 strcpy(arr,"11:00");
 strcpy(dep,"14:30");
 strcpy(fare,"700");
 x=1234;
 p=1;
 input1();
 break;
}
if((strcmp(bus,"3456")==0))
{
strcpy(mfrom,"DELHI");
strcpy(mto,"MANALI");
 strcpy(arr,"12:00");
 strcpy(dep,"14:45");
strcpy(fare,"900");
x=3456;
p=2;
input1();
break;
}
 if((strcmp(bus,"4321")==0))
 {
 strcpy(mfrom,"MUMBAI");
 strcpy(mto,"GOA");
 strcpy(arr,"11:15");
 strcpy(dep,"13:30");
 strcpy(fare,"500");
 x=4321;
 p=3;
 input1();
 break;
}
if((strcmp(bus,"6534")==0))
{
strcpy(mfrom,"PUNE");
strcpy(mto,"MUMBAI");
 strcpy(arr,"14:00");
 strcpy(dep,"22:30");
 strcpy(fare,"300");
x=6534;
p=4;
input1();
break;
}
 if((strcmp(bus,"9067")==0))
 {
 strcpy(mfrom,"DELHI");
 strcpy(mto,"LUCKNOW");
 strcpy(arr,"14:45");
 strcpy(dep,"17:30");
 strcpy(fare,"1100");
 x=9067;
 p=5;
 input1();
 break;
}
if((strcmp(bus,"5678")==0))
{
strcpy(mfrom,"PUNR");
strcpy(mto,"SHIRDI");
strcpy(arr,"15:40");
strcpy(dep,"23:00");
strcpy(fare,"600");
x=5678;
p=6;
input1();
break;
}

else  {
cout<<" BUS NOT AVAILABLE !!!!! ";
getch(); }
clrscr();
getch();
		     break;

       case 2:
       clrscr();
       display1();
       break;

	 case 3:
	     clrscr();
	     update1();
	     break;

	 case 4:
	      clrscr();
	      delete1();
	      break;

	case 5:
	 cout<<"\n\n\n\t\t\t\tTHANK YOU\n\n\n\t\t\tPress any 2 Keys  ";
	 getch();
	 break;

	default:
	 cout<<"\n\n\t\t You've Entered An Invalid Choice....!!\n\n\n\t\t\tPress Any Key....!!!!";
	 getch();
	 break;
     }
       clrscr();
  }
  while(ch!=5);
  getch();
}

    void input1()
	    {
	       clrscr();


       f.open("entryy.dat",ios::app|ios::binary);
	       s.input();
	       f.write((char*)&s,sizeof(s));
	       getch();

	       cout<<"\n\tRecord Added Successfully...!!Press Any Key"<<endl;
	       getch();
	       f.close();


	       f.open("entryy.dat",ios::app|ios::binary);
	       char cc='y';
	       cout<<"Reserve more y/n: ";
	       cin>>cc;

	       while(cc=='y')
	       {
	       s.input();
	       f.write((char*)&s,sizeof(s));
	       cout<<"\n\n\t Reservation Completed\n";

	       cout<<"\n\t Do you want to add more Reservation(y/n):  " ;
	       cin>>cc;
	       clrscr();
	       }
	       f.close();
	       clrscr();

		    }

	    void display1()
	    {
	     f.open("entryy.dat",ios::in|ios::out|ios::ate);
	      f.seekg(0);
	       while(f.read((char*)&s,sizeof(s)))
	       {
		 s.display();
			getch();
	     }
	      getch();
	       f.close();

		    }

	    void update1()
	    {
	       f.open("entryy.dat",ios::in|ios::out|ios::ate);
	       f.seekg(0);
	       s.update();
	       if(c=='A'||c=='B'||c=='C')									//  if(c=='A'||c=='B'||c=='C')
		 cout<<"\n\n\n\t\t\tRecord Updated Successfully";
	       getch();

	       f.close();
	    }

	    void delete1()
	      {
		 f.open("entryy.dat",ios::in);
		 g.open("entryy1.dat",ios::out);
		 f.seekg(0);
		  cout<<"Enter ID Whose Record Is To Be Deleted: ";
		  gets(m);
		  cout<<endl;
		 while(f.read((char*)&s,sizeof(s)))
		   {
		     if(strcmpi(s.id,m)!=0)
		       {
			g.write((char*)&s,sizeof(s));
		       }
		    }
		  f.clear();
		f.close();
		g.close();
		 if(strcmpi(s.id,m)==0)
		   l++;
	      if(l==0)
		cout<<"Record Not Found..!!";
	      else
	       {
		 remove("entryy.dat");
		 rename("entryy1.dat","entryy.dat");
		 cout<<"Record Deleted Successfully....!!";
	       }
		 getch();
	      }

