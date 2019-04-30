
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<dos.h>
#include<process.h>
#include<string.h>

void menu();
void submenu_add();
void submenu_search();
void submenu_edit();
void submenu_booking();
void searchbook();
void searchauname();
void retrieveisue();
void retrveise();
void isname();
void isnme();
void showlstbk();
void modify();
void del();

class book
  {
     public:
	char boname[50], bocd[10], auname[45], botype[20];
	void in()
	  {
	    clrscr();
	    cout<<"\n\n\n\n\n\t\t\tNEW BOOK ENTRY";
	    cout<<"\n\t\t     ------------------";
	    cout<<"\n\n\n\n\t\tEnter the type of the book:-";
	    gets(botype);
	    cout<<"\n\t\tEnter the name of the book:-";
	    gets(boname);
	    cout<<"\n\t\tEnter the book code:-";
	    gets(bocd);
	    cout<<"\n\t\tEnter the author's name:-";
	    gets(auname);
	    cout<<"\n\n\n\n\n\t\tNEW BOOK CREATED!!!";
	  }
	void out()
	{
	clrscr();
	cout<<"\n\n\n\n\n\n\t\tThe type of the book is:-";
	puts(botype);
	cout<<"\n\t\tThe name of the book is:-";
	puts(boname);
	cout<<"\n\t\tThe book's code is:-";
	puts(bocd);
	cout<<"\n\t\tThe name of the author is:-";
	puts(auname);
	}
	char*getbookname()
	{
	return(boname);
	}

	char*getauthorname()
	{
	return(auname);
	}
	void show()
	{
	cout<<bocd<<" \t "<<boname<<" \t\t "<<auname<<"\t "<<botype<<" \n ";
	}
	void isn(char nb1[])
	{


	 if(strcmp(boname, nb1)==0)
	  {
	  cout<<"\n\n\t\t\tBook code is: "<<bocd;
	  cout<<"\n\n\t\t\tAuthor's name is: "<<auname;
	  cout<<"\n\n\n\t\t The book is successfully issued";
	  cout<<"\n\n\n\n\t\t NOTE:- Kindly return the book in 15 days.. or else you will be charged rs 10 per day..\n thankyou!! \n\t have a great day ahead..";

	  getch();
	  }


	}

    }b1;

void addbook()
{ char ch;
fstream f;
f.open("book.dat",ios::out|ios::app);
do
{
clrscr();
b1.in();
f.write((char*)&b1,sizeof(b1));
cout<<"\n\n\n\n\t\t Do u want to add again??    (y/n):\t";
cin>>ch;
}
while(ch=='y' ||ch=='Y');
f.close();
}
void retrievebook()
{

fstream f;
f.open("book.dat",ios::in);
f.read((char*)&b1,sizeof(b1));
while(!f.eof())
{
f.read((char*)&b1,sizeof(b1));
b1.out();
}
f.close();

}

class customer
{
char name[30], address[30], phno[10];
public:
void in1()
{
clrscr();
cout<<"\n\n\n\n\n\n\t\t\t**NEW MEMBER ENTRY**";
cout<<"\n\n\t\t\tEnter the name of the customer:-\t";
gets(name);
cout<<"\n\n\t\t\tEnter the address of the customer:-\t";
gets(address);
cout<<"\n\n\t\t\tEnter the phone no. of the customer:-\t";
gets(phno);
}
void out1()
{
clrscr();
cout<<"\n\n\n\n\n\n\t\t\tThe name of the customer is:-\t"<<name;
cout<<"\n\t\t\t\tThe adress of the customer is:-\t"<<address;
cout<<"\n\t\t\t\tThe phone no. of the customer is:-\t"<<phno;
cout<<"\n\n\n\t\t Congratulations!! U became the member of this library";
}
};
void addcustomer()
{
customer cu;
fstream f;
f.open("customer.dat",ios::out|ios::app);
cu.in1();
f.write((char*)&cu,sizeof(cu));
f.close();
}
void retrievecustomer()
{
customer cu;
fstream f;
f.open("customer.dat",ios::in);
f.read((char*)&cu,sizeof(cu));
while(!f.eof())
{
f.read((char*)&cu,sizeof(cu));
cu.out1();
}
f.close();
}

class booking
{
char bname[30], baddress[30], book[30], emid[40];
long double phone;
public:
void in2()
{
clrscr();
cout<<"\n\n\n\n\n\n\n\t\t\tISSUING DETAILS";
cout<<"\n\n\n\tEnter the name of the book you are taking:-\t";
gets(book);
cout<<"\n\tEnter the name of the issuer:-\t";
gets(bname);
cout<<"\n\tEnter the address of the issuer:-\t";
gets(baddress);
cout<<"\n\tEnter the email id of the issuer:-\t";
gets(emid);
cout<<"\n\tEnter the phone no. of the issuer:-\t";
cin>>phone;
}
void out2()
{
cout<<"\n\n\n\n\n\n\n\t\tIssuer Name:-\t"<<bname;
cout<<"\n\t\tIssuer Address:-\t"<<baddress;
cout<<"\n\t\tIssuer Email id:-\t"<<emid;
cout<<"\n\t\tIssuer Phone no.:-\t"<<phone;
}
}b;

void addbooking()
{
fstream f;
f.open("booking.dat",ios::out);
b.in2();
getch();
f.write((char*)&b,sizeof(b));
f.close();
}
void retrievebooking()
{
clrscr();
fstream f;
f.open("booking.dat",ios::in);
f.read((char*)&b,sizeof(b));
while(!f.eof())
{
b.out2();
getch();
f.read((char*)&b,sizeof(b));
}
f.close();
}

void intro()
{
    cout<<"\n\n\n\n\n\t\t\t\t******WELCOME TO******";
    cout<<"\n\n\n\t\t\t=======================================";
    cout<<"\t\t\t\t\t\t****FACULTY HIGHER SECONDARY SCHOOL****";
    cout<<"\t\t\t\t\t\t=======================================";
    cout<<"\n\n\n\n\t\t\t\t******************";
    cout<<"\n\t\t\t\t  PUBLIC LIBRARY";
    cout<<"\n\t\t\t\t******************";
    cout<<"\n\n\n\n\tPress any key to cont. ";
    getch();
    for(int i=0;i<5;i++)
    {
     gotoxy(14,14);
     cout<<"Please Wait while loading ";
     gotoxy(18,20);
     cout<<"Loading";
     gotoxy(28,20);
     cout<<"(";
     delay(100);
     clrscr();
     gotoxy(14,14);
     cout<<"Please Wait while loading ";
     gotoxy(18,20);
     cout<<"Loading";
     gotoxy(29,20);
     cout<<"~";
     delay(100);
     clrscr();
     gotoxy(14,14);
     cout<<"Please Wait while loading ";
     gotoxy(18,20);
     cout<<"Loading";
     gotoxy(30,20);
     cout<<")";
     delay(100);
     clrscr();
     gotoxy(14,14);
     cout<<"Please Wait while loading ";
     gotoxy(18,20);
     cout<<"Loading";
     gotoxy(29,20);
     cout<<"_";
     delay(100);
     clrscr();
    }
   cout<<"\n\n\n\n\n\n\t\t\t\t======================";
   cout<<"\t\t\t\t\t\t\t\t  LIBRARY MANAGEMENT";
   cout<<"\t\t\t\t\t\t\t\t======================";
   cout<<"\n\n\n\t\t\t\n\t It is designed for the";
   cout<<"\n\t\t\t\n\n\t issuing of books and for";
   cout<<"\n\n\n\t monitoring and controlling the transaction in a library.";
   cout<<"\n\n\n\n\n\n\t\t\t Press any key to continue.....!!!";
   getch();
   clrscr();
}
void menu()
{
clrscr();
int ch;
cout<<"\n\n\n\n\n\n\n\t\t\t\t===============";
cout<<"\n\t\t\t\t   MAIN MENU";
cout<<"\n\t\t\t\t===============";
cout<<"\n\n\n\t\t\t\t1.Add";
cout<<"\n\n\n\t\t\t\t2.Search";
cout<<"\n\n\n\t\t\t\t3.Edit";
cout<<"\n\n\n\t\t\t\t4.Issuing";
cout<<"\n\n\n\t\t\t\t5.Exit";
cout<<"\n\n\n\n\t\tEnter your choice:  ";
cin>>ch;
if(ch==1)
submenu_add();
else if(ch==2)
submenu_search();
else if(ch==3)
submenu_edit();
else if(ch==4)
submenu_booking();
else if(ch==5)
{
clrscr();
for(int i=0;i<35;i++)
{
gotoxy(i,20);
cout<<"Thank you for visiting..!!!! Do visit again..!!";
delay(160);
clrscr();
}
exit(0);
}
}
void submenu_add()
{
int ch;
clrscr();
cout<<"\n\n\n\n\n\n\n\t\t\t\t      TO ADD";
cout<<"\n\t\t\t       -------------------";
cout<<"\n\n\n\n\n\t\t\t1.Book";
cout<<"\n\n\t\t\t2.Issuer";
cout<<"\n\n\t\t\t3.Back";
cout<<"\n\n\n\n\t\t\t\tEnter your choice:-\t";
cin>>ch;
if(ch==1)
{
addbook();
retrievebook();
getch();
menu();
}
else if(ch==2)
{
customer c;
addcustomer();
showlstbk();
retrieveisue();
retrveise();
menu();
}
else if(ch==3)
menu();
}

class issue
{
public:
char nb[50], cod,aun;
void isname()
{
cout<<"\n\n\n\n\t\tEnter the name of the book from the above list";
cin>>nb;
cout<<"\n\t\tEnter the corresponding code:-";
cin>>cod;
cout<<"\n\t\tEnter the author name:-";
cin>>aun;
}
void isnme()
{
cout<<"\n\n\t\tThe book you issued:-\t"<<nb;
b1.isn("nb");
getch();

}
};
void retrieveisue()
{ issue is;
fstream f;
f.open("issuedetails.dat",ios::out);
is.isname();
f.write((char*)&is,sizeof(is));
f.close();
}

void retrveise()
{
issue is;
clrscr();
fstream f;
f.open("issuedetails.dat",ios::in);
f.read((char*)&is,sizeof(is));
while(!f.eof())
{
is.isnme();
f.read((char*)&b,sizeof(b));
}
f.close();
}
void showlstbk()
{
fstream f;
f.open("book.dat",ios::in);

cout<<"\n\n\t\t\t**BOOK LIST**\n\n";
cout<<"Book No. \t Book Name \t\t\t Author \t Type\n";
while(f.read((char*)&b1, sizeof(b1)))
{
b1.show();
}

f.close();
getch();
}

void submenu_search()
{
clrscr();
int ch;
cout<<"\n\n\n\n\n\n\n\t\t\t\tSEARCH YOUR BOOK VIA";
cout<<"\n\t\t\t     ---------------------------";
cout<<"\n\n\t\t\t1.Book Name";
cout<<"\n\n\t\t\t2.Author Name";
cout<<"\n\n\t\t\t3.Return to Menu";
cout<<"\n\n\n\t\t\t\tEnter your choice:-\t";
cin>>ch;
if(ch==1)
searchbook();
else if(ch==2)
searchauname();
else if(ch==3)
menu();
}

void searchbook()
{
clrscr();
book b1;
fstream f;
char bok[30];
char found='n';

cout<<"\n\n\n\n\n\n\n\n\tEnter the name of the book to be searched:-\t";
gets(bok);
f.open("book.dat",ios::in);
while(f.read((char*)&b1,sizeof(book)) &&found=='n');


{
if(strcmp(b1.getbookname(),bok)==0)
{
b1.out();
found='y';


}
}
if(found=='n')
{
cout<<"Sorry!! Book  not found";
getch();
menu();


}

f.close();
}

void searchauname()
{
clrscr();
book b1;
fstream f;
char aun[30], found='n';
cout<<"\n\n\n\n\n\n\n\n\t\tEnter the author name to be searched:-\t";
gets(aun);
f.open("book.dat",ios::in);
while(f.read((char*)&b1,sizeof(book)) && found=='n');

{
if(strcmp(b1.getauthorname(),aun)==0)
{b1.out();
found='y';
getch();
menu();
}
}
if(found=='n')
{
cout<<"\n\n\t\t\tSorry..!! "<<aun<<" author's name not found";
getch();
menu();
}

f.close();
}
void submenu_edit()
{
clrscr();
int ch;
clrscr();
cout<<"\n\n\n\n\n\n\n\t\t\t\tEDIT";
cout<<"\n\t\t\t  ------------------";
cout<<"\n\n\n\t\t\t\t1.Modify";
cout<<"\n\n\n\t\t\t\t2.Delete";
cout<<"\n\n\n\t\t\t\t3.Return to Menu";
cout<<"\n\n\n\t\t Enter ur Choice:-\t";
cin>>ch;
if(ch==1)
{
modify();
retrievebook();
getch();
menu();
}
else if(ch==2)
{
del();
getch();
clrscr();
retrievebook();
getch();
menu();
}
else if(ch==3)
menu();
}
void modify()
{
fstream f, f1;
f.open("book.dat",ios::in);
f1.open("temp.dat",ios::out);
char c[30];
clrscr();
cout<<"\n\n\tEnter the name of the book to be edited:-\t";
gets(c);
f.read((char*)&b1,sizeof(b1));
while(!f.eof())
{
if (strcmp(b1.getbookname(),c)==0)
{
b1.in();
f1.write((char*)&b1,sizeof(b1));
}
else
f1.write((char*)&b1,sizeof(b1));
f.read((char*)&b1,sizeof(b1));
}
f.close();
f1.close();
f.open("temp.dat",ios::in);
f1.open("book.dat",ios::out);
f.read((char*)&b1,sizeof(b1));
while(!f.eof())
{
f1.write((char*)&b1,sizeof(b1));
f.read((char*)&b1,sizeof(b1));
}
f.close();
f1.close();
}
void del()
{
fstream f, f1;
f.open("book.dat",ios::in);
f1.open("temp.dat",ios::out);
clrscr();
char c[30];
int flag=0;
cout<<"\n\n\n\n\n\n\nEnter the name of the book to be deleted:-\t";
gets(c);
f.read((char*)&b1,sizeof(b1));
while(!f.eof())
{
if(strcmp(b1.getbookname(),c)==0)
{
flag=1;
cout<<"\n\n\n\n\t\t\tYour book name has been successfully deleted..!!";
}
else
f1.write((char*)&b1,sizeof(b1));
f.read((char*)&b1,sizeof(b1));
}
if(flag==0)
{
cout<<"\n\n\n\t\tBook not found..!!";
}
f.close();
f1.close();
f.open("temp.dat",ios::in);
f1.open("book.dat",ios::out);
f.read((char*)&b1,sizeof(b1));
while(!f.eof())
{
f1.write((char*)&b1,sizeof(b1));
f.read((char*)&b1,sizeof(b1));
}
f.close();
f1.close();
}
void submenu_booking()
{
clrscr();
int ch;
clrscr();
cout<<"\n\n\n\n\n\n\n\t\t\t\tBOOKING";
cout<<"\n\t\t\t   -----------------";
cout<<"\n\n\n\t\t\t1.Add Issuing";
cout<<"\n\n\n\t\t\t2.View Issuing";
cout<<"\n\n\n\t\t\t3.Return";
cout<<"\n\n\n\n\n\t\tEnter your choice:-\t";
cin>>ch;
if(ch==1)
{
addbooking();
retrievebooking();
menu();
}
else if(ch==2)
{
retrievebooking();
getch();
menu();
}
else if(ch==3)
menu();
}
void main()
{
clrscr();
intro();
menu();
getch();
}
