#include<iostream.h>
#include<dir.h>
#include<process.h>
#include<conio.h>
#include<fstream.h>
#include<dos.h>
#include<stdio.h>
//#include<graphics.h>
#include<string.h>
#include<direct.h>


void main()
{
    int k;



     void cbox(void);    //for menu box
     void box(int,int,int,int,int);//for print box
     int curser(void);   //for move using arrow keys
     int visitor(void);  //for visitor no
     void user_account(void);     //For access user account
     void load(void);
     void call(void);
  //   load();




      int r=visitor();
     if(r==1)
     {
     mkdir("c:\\sandipan");
     }



     user_account();       //FOR USER ACCOUNT
      x:
      clrscr();
     cbox(); //for print box

	gotoxy(48,24);
     textcolor(26);
     cprintf("YOU ARE VISITOR NO:");
     cout<<r;



    int menu;
    menu=curser();

     switch(menu)
     {
     case 1:void copy(void);/////for copy files
     copy();

     goto x;

     case 2:void move(void);   ////for move files
     move();
     goto x;

     case 3:void renamef(void);//////for rename file
     renamef();
     goto x;

     case 4:void delete1(void); //////for delete files
     delete1();
     goto x;

     case 5:void createfldr(void);///////for create new folder
     createfldr();
     goto x;

     case 6:void overw(void);///////////////////overwrite file
     overw();
     goto x;

     case 7:
     clrscr();
     box(5,10,75,12,14);
     textcolor(11);
     gotoxy(17,11);
     system("ver");
     getch();
     system("cls");
     goto x;

     case 8:void help(void); ///////for softwere help
     help();
     goto x;

     case 9:void dir(void);
     dir();
     goto x;

     case 10:void view(void);
     view();
     goto x;

     case 11:void searchf(void);
     searchf();
     goto x;

     case 12:void about(void); //////about us
     about();
     goto x;

     case 13:system("cls");
     system("command");
     goto x;

     case 14:void setd(void);
     setd();
     goto x;

     case 15:void dfree(void);
     dfree();
     goto x;

     case 16:exit(0); //for exit


     }



 }





	  /*For print main menu box*/

 void cbox(void)
{

     int b=3;
     void box(int,int,int,int,int);
      int colour(void);
    // b=colour();

	   ///////////////////for first line///////////////////

     box(5,2,21,6,b);
     gotoxy(9,4);
     textcolor(12);
     cprintf("FILE COPY");


     box(23,2,39,6,b);
     gotoxy(27,4);
     textcolor(12);
     cprintf("FILE MOVE");

     box(41,2,57,6,b);
     gotoxy(44,4);
     textcolor(12);
     cprintf("FILE RENAME");

     box(59,2,75,6,b);
     gotoxy(63,4);
     textcolor(12);
     cprintf("FILE DELETE");


	      ////////for second line////////////////
     box(5,7,21,11,b);
     gotoxy(9,9);
     textcolor(12);
     cprintf("NEW FOLDER");


     box(23,7,39,11,b);
     gotoxy(25,9);
     textcolor(12);
     cprintf("OVERWRITE FILE");

     box(41,7,57,11,b);
     gotoxy(44,9);
     textcolor(12);
     cprintf("DOS VERSION");

     box(59,7,75,11,b);
     gotoxy(66,9);
     textcolor(12);
     cprintf("HELP");

	     ////////////////for third line////////////////
     box(5,12,21,16,b);
     gotoxy(8,14);
     textcolor(12);
     cprintf("DIRECTORIES");


     box(23,12,39,16,b);
     gotoxy(27,14);
     textcolor(12);
     cprintf("VIEW FILE");
     gotoxy(24,15);
     textcolor(5);
     cprintf("Text Files Only") ;

     box(41,12,57,16,b);
     gotoxy(44,14);
     textcolor(12);
     cprintf("FILE SEARCH");

     box(59,12,75,16,b);
     gotoxy(63,14);
     textcolor(12);
     cprintf("ABOUT US");
      ////////////for fourth line//////////////
     box(5,17,21,21,b);
     gotoxy(10,19);
     textcolor(12);
     cprintf("DOS BOX");

     box(23,17,39,21,b);
     gotoxy(27,19);
     textcolor(12);
     cprintf("SET DRIVE");

     box(41,17,57,21,b);
     gotoxy(45,19);
     textcolor(12);
     cprintf("FREE SPACE");

     box(59,17,75,21,b);
     gotoxy(65,19);
     textcolor(12);
     cprintf("EXIT");

       ///////////for time,date and visitor///////////////////
       box(10,23,24,25,b);   //time
       box(26,23,43,25,b);  //date
       box(45,23,70,25,b);  //visitor


       }
  ////////////////////////////////End////////////////////////////////////




		   /*For move with arrow keys*/

int curser(void)
{
int a,p=2;

void box(int,int,int,int,int);

int a1=5,a2=2,a3=21,a4=6;

box(a1,a2,a3,a4,9);

void cbox(void);                   //for print box common


while(1)
{

  do
  {
 time t;             //for time
 gettime(&t);
 gotoxy(11,24);
 textcolor(26);
 cprintf("TIME:");
 printf("%d",t.ti_hour);
 cout<<":";
 printf("%d",t.ti_min);
 cout<<":";
 printf("%d",t.ti_sec);


 date d;       //for date
 getdate(&d);
 gotoxy(28,24);
 textcolor(26);
 cprintf("DATE:");
 printf("%d",d.da_day);
 cout<<"/";
 printf("%d",d.da_mon);
 cout<<"/";
 printf("%d",d.da_year);
 }
 while(!kbhit());


 a=getch();
switch(a)
{


case 72://up
cbox();
a2=a2-5;
a4=a4-5;
if(a2<2)
{
a2=a2+20;
a4=a4+20;
}
box(a1,a2,a3,a4,9);
p=p-6;

if(p==-4)
p=20;

if(p==-3)
p=21;

if(p==-2)
p=22;

if(p==-1)
p=23;
break;


case 80://down
cbox();
a2=a2+5;
a4=a4+5;
if(a4>21)
{
a2=a2-20;
a4=a4-20;
}
box(a1,a2,a3,a4,9);
p=p+6;

if(p==26)
p=2;

if(p==27)
p=3;

if(p==28)
p=4;

if(p==29)
p=5;
break;




case 77://right
a1=a1+18;
a3=a3+18;
cbox();
if(a3>75)
{
a1=a1-72;
a3=a3-72;
}
box(a1,a2,a3,a4,9);
p++;

if(p==6)
p=2;

if(p==12)
p=8;

if(p==18)
p=14;

if(p==24)
p=20;

break;

		     ////////////// left////////////

case 75:

cbox();
a1=a1-18;
a3=a3-18;
if(a1<5)
{
a1=a1+72;
a3=a3+72;
}
box(a1,a2,a3,a4,9);
p--;

if(p==1)
p=5;

if(p==7)
p=11;

if(p==13)
p=17;

if(p==19)
p=23;

break;



case 13:     ////for return final value
if(p==2||p==3||p==4||p==5)
p=p-1;
if(p==8||p==9||p==10||p==11)
p=p-3;
if(p==14||p==15||p==16||p==17)
p=p-5;
if(p==20||p==21||p==22||p==23)
p=p-7;
goto s;

}

}
s:


return p;
}
///////////////////////////////End/////////////////////////////////////////


		  /*For visitor number*/


int visitor(void)
{

int k=0;

  ofstream v1("c:\\visitor.txt",ios::app);
  {
  v1.close();
  }


ifstream v2("c:\\visitor.txt",ios::in);
{
while(!v2.eof())
{
v2>>k;
}
v2.close();
}


ofstream v3("c:\\visitor.txt",ios::out);
{
k=k+1;
v3<<k;
v3.close();
}

ifstream v4("c:\\visitor.txt",ios::in);
{
while(!v4.eof())
{
v4>>k;
}
v4.close();
}
return k;
 }

 //////////////////////////////end//////////////////////////////////


       /*Function for user account*/

 void user_account()
{
 p:
     clrscr();
	int s;

     void box(int,int,int,int,int);
     box(32,8,48,18,11);

   textcolor(2);
   gotoxy(34,10);
   cprintf("1.ADD USER");
   gotoxy(34,12);
   cprintf("2.LOG IN");
   gotoxy(34,14);
   cprintf("3.REMOVE USER");
   gotoxy(34,16);
   cprintf("4.EXIT");



  char a;
   while(1)
   {

  a=getch();

  switch(a)
  {


  case '1':int user_add(void);
   if(user_add()==0)
   {
   goto p;
   }
   else
   {
    gotoxy(23,12);
    textcolor(11);
    cprintf("!!!!!ACCOUNT CREATED SUCCESSFULLY!!!!!");
    getch();
    clrscr();
    goto e;
    }


   r:                    //for a back loop
  case '2':int user_login(void);



       if(user_login()==1)
       {
       clrscr();
       goto e;
       }
       else
       {
       gotoxy(18,23);
       textcolor(4);
       cprintf("please enter a valid username and password!!!!!");

       getch();

	 a=2;
	goto r;
       }




  case '3': clrscr();
  int user_remove(void);
  s=user_remove();
  if(s==0)
  {
  clrscr();
  gotoxy(28,13);
  textcolor(92);
  cprintf("!!!!ACCOUNT NOT FOUND!!!!");
  getch();
  goto p;
  }
  else
  {
  getch();
  goto p;
  }

  case '4':exit(0);

  default:
  gotoxy(27,22);
  textcolor(4);
  cprintf("please hit a valid option!!!!!");
  break;
  }


  }
 e:
 }



 /////////////////////add user account//////////////////////////////

int user_add()
{
 clrscr();


 struct udetails
{
char usern[80];
char userp[80];
}*get;





 ofstream check1("c:\\SANDIPAN\\user.dat",ios::app);
 {
 check1.close();
 }

   int n=0;

 ifstream check("c:\\SANDIPAN\\user.dat",ios::in|ios::binary);
 {

 while(!check.eof())
 {
 check.read((char *)&get[n],sizeof(get[n]));
 n++;

 }
 check.close();
 }



  n--;




   if(n>2)
   {

   void box(int,int,int,int,int);
   box(20,10,63,14,9);
   gotoxy(22,12);
   textcolor(4);
   cprintf("You have reached max. no of user already");
   getch();
   return 0;
   }

 else
 {


 void box(int,int,int,int,int);
 box(17,11,67,15,5);
 gotoxy(19,12);
 textcolor(2);
 cprintf("Enter User Name:");


 cin>>get[n].usern;



      gotoxy(19,14);
      textcolor(2);
      cprintf("Enter password:");
	     int i=0;
char a[80];

      while(1)
      {
      a[i]=getch();



 if(a[i]==13) //for enter
  {
  a[i]='\0';
  goto x10;
  }

       if(a[i]==8)  //for back space
       {
       --i;

       cout<<"\b \b";
       }


else
{
 cout<<"*";
 i++;
 }
 }


 x10:

 strcpy(get[n].userp,a);


  ofstream uuser("c:\\SANDIPAN\\user.dat",ios::app|ios::binary);
  {
  uuser.write((char *)&get[n],sizeof(get[n]));
  uuser.close();
  }
  clrscr();

   return 1;
  }
 }
 /////////////////////////////////////////////////////////////////////



      //////////////////For login with exsisting user account//////////////

int user_login()
{


struct udetails1
{

char usern[80];
char userp[80];
}get1[3];

 clrscr();



 int k=0;


 char name[80];
 char pass[80];

void box(int,int,int,int,int);
box(17,8,67,14,3);
gotoxy(19,10);
textcolor(2);
cprintf("Enter the username:");

cin>>name;
gotoxy(19,12);
textcolor(2);
cprintf("Enter the password:");


    int l=0;
char a[80];

      while(1)
      {
      a[l]=getch();



 if(a[l]==13) //for enter
  {
  a[l]='\0';
  goto x10;
  }

       if(a[l]==8)  //for back space
       {
       --l;

       cout<<"\b \b";
       }


else
{
 cout<<"*";
 l++;
 }
 }
 x10:
strcpy(pass,a);

int n1=0;

ifstream user_login("c:\\SANDIPAN\\user.dat",ios::in|ios::binary);
{

while(!user_login.eof())
{
user_login.read((char *)&get1[n1],sizeof(get1[n1]));

if(strcmp(get1[n1].usern,name)==0 && strcmp(get1[n1].userp,pass)==0)
{
k=1;
break;
}

n1++;

} //eof

user_login.close();
}      //file

return k;

 }           //function

 ////////////////////////////////////////////////////////////////////////////


 ///////////////////////////for remove user account//////////////////////////

int user_remove(void)
{



struct udetails1  //for checking user input
{
char usern[80];
char userp[80];
}get1[3];


 struct udetails3
 {
 char usern[80];
 char userp[80];
 }get3;

 struct udetails4
 {
 char usern[80];
 char userp[80];
 }get4;

 clrscr();



 int k=0;   //for decting true or false





 char name[80];
 char pass[80];

void box(int,int,int,int,int);
box(17,8,67,14,3);
gotoxy(19,10);
textcolor(2);
cprintf("Enter the username:");

cin>>name;
gotoxy(19,12);


textcolor(2);
cprintf("Enter the password:");


    int l=0;
char a[80];

      while(1)
      {
      a[l]=getch();



 if(a[l]==13) //for enter
  {
  a[l]='\0';
  goto x10;
  }

       if(a[l]==8)  //for back space
       {
       --l;

       cout<<"\b \b";
       }


else
{
 cout<<"*";
 l++;
 }

 }  //for while
 x10:

strcpy(pass,a);




int n1=0;
int pos;     //for fix compiler bug


ifstream user_check("c:\\SANDIPAN\\user.dat",ios::in|ios::binary);
{

while(!user_check.eof())
{
user_check.read((char *)&get1[n1],sizeof(get1[n1]));



    if(strcmp(get1[n1].usern,name)==0 && strcmp(get1[n1].userp,pass)==0)
      {
      k=1;
       pos=n1;
      break;
      }



} // while eof
user_check.close();
}      //file






if(k==1)    ////condition true
{
clrscr();




ifstream step1("c:\\SANDIPAN\\user.dat",ios::in|ios::binary);
{
     ofstream step2("c:\\SANDIPAN\\temp.dat",ios::out|ios::binary);
     {


   while(!step1.eof())
	{
   step1.read((char *)&get3,sizeof(get3));


	    if(strcmp(get3.usern,name)==0 && strcmp(get3.userp,pass)==0)
	      {
	       continue;
	      }


	      else
	      {
   step2.write((char *)&get3,sizeof(get3));
	      }



}  /////while

step1.close();
step2.close();
}
}///////file



 system("del c:\\SANDIPAN\\user.dat");
 rename("c:\\SANDIPAN\\temp.dat","c:\\SANDIPAN\\user.dat");

///////////////////for fixing compiler bug////////////////////////////


 if(pos!=2)
 {

 int t=0;
 ifstream r("c:\\SANDIPAN\\user.dat",ios::in|ios::binary);
       {

     ofstream w("c:\\SANDIPAN\\temp.dat",ios::out|ios::binary);
     {


   while(t<2)
	{
   r.read((char *)&get4,sizeof(get4));

   w.write((char *)&get4,sizeof(get4));
	t++;

	}  /////while
      r.close();
      w.close();
      }
      }
   system("del c:\\SANDIPAN\\user.dat");
 rename("c:\\SANDIPAN\\temp.dat","c:\\SANDIPAN\\user.dat");
     }
  ///////////////////////////////////////////////////////////////////

 gotoxy(25,13);
 textcolor(82);

 cout<<"!!ACCOUNT SUCCESSFULLY REMOVED!!";
 } ///if


 return k;
 }           //function

 ////////////////////////////////////////////////////////////////////////////






////////////////////////////////BOX//////////////////////////////////
void box(int y1,int x1, int y2, int x2,int a)
  {

   textcolor(a);
   gotoxy(y1,x1);
   cprintf("É");
   for(int i=y1+1;i<y2;i++)
     {
      textcolor(a);
      gotoxy(i,x1);
      cprintf("Í");
      }
   gotoxy(y2,x1);
    textcolor(a);
    cprintf("»");

   for(i=y1+1;i<y2;i++)
     {
      textcolor(a);
      gotoxy(i,x2);
      cprintf("Í");
      }
   textcolor(a);
   gotoxy(y1,x2);
   cprintf("È");

      for(i=x1+1;i<x2;i++)
     {
      gotoxy(y1,i);
      textcolor(a);
       cprintf("º");
      }

   gotoxy(y2,x2);
   textcolor(a);
   cprintf("¼");
   for(i=x1+1;i<x2;i++)
     {
      gotoxy(y2,i);
       textcolor(a);
       cprintf("º");
      }

  }


///////////////////////////////////END/////////////////////////////////////



/////////////////////////////about us///////////////////////////////
void about(void)
{
clrscr();
box(5,5,75,20,14);
gotoxy(36,6);
textcolor(13);
cprintf("ABOUT US");
textcolor(10);
gotoxy(11,9);
cprintf("This is a project based on the language c++");
gotoxy(11,10);
cprintf("Made by:");
gotoxy(11,11);
cprintf("Sandipan Roy");
gotoxy(11,12);
cprintf("Guided by S.K.Mahato(PGT COMPUTER SCIENCE)");
gotoxy(11,13);
cprintf("Contact:");
gotoxy(11,14);
cprintf("Mobile:9547157049");
gotoxy(11,15);
cprintf("Email:sandipanroy177@gmail.com");
gotoxy(27,17);
textcolor(11);
cprintf("SOFTWERE VERSION:1.0");
getch();
system("cls");
}
///////////////////////////end////////////////////////////////


///////////////////////copy directory///////////////////////////////////
void copy(void)
{
clrscr();
char dir1[20];
char dir2[20];
char *s1="copy ";


box(5,2,75,7,14);
gotoxy(37,3);
textcolor(4);
cprintf("EXAMPLE");
gotoxy(6,4);
textcolor(10);
cprintf("Enter directory to copy:");
textcolor(11);
cprintf("c:\\\\a.txt");
gotoxy(6,5);
textcolor(10);
cprintf("Enter directory to paste:");
textcolor(11);
cprintf("c:\\\\tc\\\\");


box(5,10,75,16,14);

box(2,18,60,25,14);
gotoxy(27,19);
textcolor(4);
cprintf("MASSAGE BOX");

textcolor(11);

gotoxy(6,12);
cprintf("Enter directory to copy:");
cin>>dir1;
gotoxy(7,19);
cout<<dir1;

gotoxy(6,14);
cprintf("Enter directory to paste:");
cin>>dir2;
gotoxy(8,20);
cout<<dir2;

strcat(s1,dir1);
strcat(s1," ");
strcat(s1,dir2);


gotoxy(35,20);


if(system(s1)==0)
{
gotoxy(37,22);
cout<<"SUCCESS";
}

else
{
gotoxy(3,22);
perror("system()");
}

box(2,18,60,25,14);

getch();
system("cls");
}
//////////////////////////move directory//////////////////////////////

void move(void)
{
clrscr();
char a[80];
char b[80];
int p;

box(5,10,75,16,14);

box(1,18,60,25,14);
gotoxy(27,19);
textcolor(4);
cprintf("MASSAGE BOX");

box(5,2,75,7,14);
gotoxy(37,3);
textcolor(4);
cprintf("EXAMPLE");
gotoxy(6,4);
textcolor(10);
cprintf("Enter directory to move:");
textcolor(11);
cprintf("c:\\\\a.txt");
gotoxy(6,5);
textcolor(10);
cprintf("Enter directory to paste:");
textcolor(11);
cprintf("c:\\\\tc\\\\a.txt");



textcolor(11);

gotoxy(6,12);
cprintf("Enter directory to move:");
cin>>a;
gotoxy(12,20);
cout<<a;

gotoxy(6,14);
textcolor(11);

cprintf("Enter directory to paste:");
cin>>b;
gotoxy(12,22);
cout<<b;

gotoxy(35,20);

p=rename(a,b);
 if(p==0)
 {
 cout<<"SUCCESS";
 }
 else
 {
  gotoxy(3,20);
 perror("rename");
 }



getch();
system("cls");
}



//////////////////////////////////////////////////////////////
void help(void)
{
clrscr();
box(5,5,75,20,14);
gotoxy(38,6);
textcolor(4);
cprintf("HELP");
gotoxy(11,9);
textcolor(10);
cprintf("THIS IS LIKE COMMAND PROMT");
gotoxy(11,10);
cprintf("ENTER THE SPECIFIED DIRECTORIES TO MAKE OPERATIONS");
gotoxy(11,11);
cprintf("LIKE-->C:\\\\AB\\\\AB.TXT");
gotoxy(11,12);
cprintf("IF YOU DON'T KNOW ABOUT FILE POSITION");
gotoxy(11,13);
cprintf("YOU CAN SEE DIRECTORIES");
gotoxy(11,15);
textcolor(4);
cprintf("NOTE:");
textcolor(10);
cprintf("To work on another logical drive,please set drive first");
getch();
system("cls");
}
//////////////////////////////////////////////////////////////////////////

//////////////////for create new folder///////////////////////////////
void createfldr(void)
{
clrscr();
char *dir1;

box(1,18,60,25,14);
gotoxy(27,19);
textcolor(4);
cprintf("MASSAGE BOX");

box(5,2,75,5,14);
gotoxy(37,3);
textcolor(4);
cprintf("EXAMPLE");
gotoxy(6,4);
textcolor(10);
cprintf("Enter directory:");
textcolor(11);
cprintf("c:\\\\a");

box(5,10,75,12,14);
textcolor(11);
gotoxy(6,11);
cout<<"Enter directory:";
cin>>dir1;

gotoxy(25,22);
if(mkdir(dir1)==0)
{
cout<<"Folder created successfully";
}
else
{
gotoxy(3,22);
perror("mkdir()");
}
getch();
system("cls");
}
///////////////////////////rename file///////////////////////////////////////////////
void renamef(void)
{
clrscr();
char d1[80];
char d2[80];

box(5,10,75,16,14);

box(1,18,60,25,14);
gotoxy(27,19);
textcolor(4);
cprintf("MASSAGE BOX");

box(5,2,75,7,14);
gotoxy(37,3);
textcolor(4);
cprintf("EXAMPLE");
gotoxy(6,4);
textcolor(10);
cprintf("Enter old dir. to rename:");
textcolor(11);
cprintf("c:\\\\a.txt");
gotoxy(6,5);
textcolor(10);
cprintf("Enter new dir. to rename:");
textcolor(11);
cprintf("c:\\\\b.txt");

gotoxy(6,12);
textcolor(11);
cprintf("Enter old dir.to rename:");
cin>>d1;


gotoxy(6,14);
textcolor(11);
cprintf("Enter new dir. to rename:");
cin>>d2;

if(rename(d1,d2)==0)
{
gotoxy(10,20);
cout<<"File renamed successfully";
}

else
{
gotoxy(3,20);
perror("rename");
}

getch();
system("cls");
}
///////////////////////////////////////////////////////////////////





     /*
////////////////////////////////LOADING//////////////////////////////
void load()
{

   int gdriver = DETECT, gmode;

   int i;

   initgraph(&gdriver, &gmode, "c:\\Tc\\BGI");


      settextstyle(TRIPLEX_FONT, HORIZ_DIR, 3);

	  setbkcolor(1);
	   gotoxy(12,15);


	     outtextxy(240, 200, "FILE EXPLORER");



   int a=35,s=17;
   for(int j=1;j<=6;j++)
   {
   gotoxy(a,s);
   sleep(1);
   textcolor(10);
   cout<<".";
   a=a+2;
   }


   closegraph();

}
//////////////////////////////////////////////////////////////////////
       */
////////////////////for delete////////////////////////////////
void delete1(void)
{
clrscr();
char *dir3;

box(1,18,60,25,14);
gotoxy(27,19);
textcolor(4);
cprintf("MASSAGE BOX");

box(5,2,75,5,14);
gotoxy(37,3);
textcolor(4);
cprintf("EXAMPLE");
gotoxy(6,4);
textcolor(10);
cprintf("Enter directory to delete:");
textcolor(11);
cprintf("c:\\\\a.txt");

box(5,10,75,12,14);
textcolor(11);
gotoxy(6,11);
cprintf("Enter directory to delete:");
gets(dir3);


gotoxy(25,22);
if(remove(dir3)==0)
{
cout<<"     success";
}
else
{
gotoxy(3,22);
perror("remove()");
}
getch();
system("cls");
}
////////////////////////view directory//////////////////////////////////////
  void dir(void)
  {
  char *h;
  char a;
  clrscr();
  x:

  box(30,10,53,13,9);
  textcolor(14);
  gotoxy(32,11);
  cprintf("1.CURRENT DIRECTORY");
  gotoxy(32,12);
  cprintf("2.CUSTOM DIRECTORY");
 a=getch();

  switch(a)
  {
  case '1':
  clrscr();
  system("dir/w");
  break;

  case '2':
  clrscr();
 box(5,2,75,5,14);
gotoxy(37,3);
textcolor(4);
cprintf("EXAMPLE");
gotoxy(6,4);
textcolor(10);
cprintf("Enter directory-->");
textcolor(11);
cprintf("c:\\\\a\\\\");

box(1,18,60,25,14);
gotoxy(27,19);
textcolor(4);
cprintf("MASSAGE BOX");

  box(12,10,70,12,14);
  textcolor(11);
  gotoxy(14,11);
  cprintf("Enter directory-->");
  gets(h);

  if(chdir(h)==0)
  {
  clrscr();
  system("dir/w");
  }
  else
  {
  gotoxy(25,22);
  textcolor(4);
  cprintf("!! INVALID DIRECTORY !!");
  }
  break;

  default:
  gotoxy(29,15);
  textcolor(4);
  cprintf("PLEASE ENTER A VALID CHOICE");

  goto x;
  }
  getch();
  system("cls");
  }

  //////////////////for view text files/////////////////////////
  void view(void)
  {
  clrscr();
  char *st1;
  int flag=0;
  char s1;

box(5,10,75,12,14);


box(1,18,60,25,14);
gotoxy(27,19);
textcolor(4);
cprintf("MASSAGE BOX");

box(5,2,75,5,14);
gotoxy(37,3);
textcolor(4);
cprintf("EXAMPLE");
gotoxy(6,4);
textcolor(10);
cprintf("ENTER FILE DIRECTORY TO VIEW:");
textcolor(11);
cprintf("c:\\\\a.txt");


textcolor(11);
gotoxy(6,11);
  cout<<"ENTER FILE DIRECTORY TO VIEW:";
gets(st1);

      gotoxy(25,22);
     ifstream c(st1);
     {
     if(!c)
     {
     cout<<"FILE NOT EXIST";
     flag=1;
     }
     c.close();
     }


     if(flag==0)
     {
     system("cls");
     ifstream s(st1);
     {
     while(!s.eof())
     {
     s.get(s1);
     cout<<s1;
     }
     s.close();
     }
     }
     getch();
     system("cls");
     }




 ///////////////////////overwrite file////////////////////////

 void overw(void)
 {
 clrscr();
 char *d1;
 char *d2;


 int flag=1;

box(5,10,75,12,14);

box(1,18,60,25,14);
gotoxy(27,19);
textcolor(4);
cprintf("MASSAGE BOX");

box(5,2,75,5,14);
gotoxy(37,3);
textcolor(4);
cprintf("EXAMPLE");
gotoxy(6,4);
textcolor(10);
cprintf("ENTER DIRECTORY TO OVERWRITE-->");
textcolor(11);
cprintf("c:\\\\a.txt");


textcolor(11);
gotoxy(6,11);
 cout<<"ENTER DIRECTORY TO OVERWRITE-->";

 gets(d1);

 ifstream ch(d1);
 {
 if(!ch)
 {
 flag=0;
  gotoxy(25,22);
 cout<<"!!!DIRECTORY NOT EXIST!!!";
 }
 ch.close();
 }

 if(flag==1)
 {
 ofstream ow(d1);
 {
 clrscr();
  gotoxy(25,2);
 cout<<"WRITE THE TEXT HERE\n\n\n";
 gets(d2);
 ow<<d2;
 ow.close();
 }
 }
 getch();
 system("cls");
 }
 ///////////////////////////////////////////////////////////////


 /////////////////////////////search file////////////////////////////
 void searchf(void)
 {
    clrscr();


   char *dir1;
   char dir2[MAXPATH];
   char *dir3;
   char *dir4;
   char curdir[MAXPATH];

   box(5,10,75,16,14);

box(1,18,60,25,14);
gotoxy(27,19);
textcolor(4);
cprintf("MASSAGE BOX");

box(5,2,75,7,14);
gotoxy(37,3);
textcolor(4);
cprintf("EXAMPLE");
gotoxy(6,4);
textcolor(10);
cprintf("ENTER DIRECTORY TO SEARCH:");
textcolor(11);
cprintf("c:\\\\a\\\\");
gotoxy(6,5);
textcolor(10);
cprintf("ENTER FILE NAME TO SEARCH:");
textcolor(11);
cprintf("c:\\\\a.txt");

   strcpy(curdir, "X:\\");
   curdir[0] = 'A' + getdisk();
   getcurdir(0,curdir+3);
 strcpy(dir2,curdir);
	gotoxy(6,12);
	cout<<"ENTER DIRECTORY TO SEARCH:";



	gets(dir1);
	chdir(dir1);

	gotoxy(6,14);
	cout<<"ENTER FILE NAME TO SEARCH:";
	gets(dir3);
	dir4=searchpath(dir3);

	 gotoxy(10,22);
	if(dir4==NULL)
	{
	textcolor(6);
	cprintf("!! FILE NOT EXIST IN THIS DIRECTORY !!");
	}
	else
	{
	cout<<" FILE EXIST IN THIS DIRECTORY ";
	gotoxy(10,23);
	cout<<"PATH--> "<<dir4;
	}
	chdir(dir2);

   getch();
	system("cls");

 }
    /////////////////for set disk/////////////////
 void setd(void)
 {
 clrscr();
 int dir;

box(5,10,75,16,14);

box(1,18,60,25,14);
gotoxy(27,19);
textcolor(4);
cprintf("MASSAGE BOX");

box(5,2,75,7,14);
gotoxy(37,3);
textcolor(4);
cprintf("EXAMPLE");
gotoxy(25,4);
textcolor(11);
cprintf("ENTER DISK NUMBER TO SET");
gotoxy(15,5);
textcolor(11);
cprintf("1 FOR 1ST DRIVE, 2 FOR 2ND DRIVE , AND SO ON");

   gotoxy(6,13);
 cout<<"ENTER DISK NUMBER-->";
 cin>>dir;


      gotoxy(10,22);

      if(_chdrive(dir)==0)
      {
      unsigned maxdrives;
     _dos_setdrive(dir,&maxdrives);

      cout<<"successfully changed";
      }

      else
      {
      textcolor(4);
      perror("_chdrive()");
      }
 textcolor(10);
 getch();
 system("cls");
  textcolor(10);
 }

 //////////////////disk free space////////////////////////////////
 void dfree(void)
{
  clrscr();
  struct diskfree_t free;
  long avail;
  box(10,10,70,12,14);

  if (_dos_getdiskfree(3, &free) != 0) {
    gotoxy(15,11);
    printf("Error in _dos_getdiskfree() call\n");
    getch();
  }
  avail = (long) free.avail_clusters
	* (long) free.bytes_per_sector
	* (long) free.sectors_per_cluster;
  gotoxy(15,11);
  printf("The current drive has %ld bytes available\n", avail);
  getch();
}
//////////////////////////////////////////////////////////////
