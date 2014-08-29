// exp 6 5 10.cpp : Defines the entry point for the console application.
//

//# include "stdafx.h"
# include"stdio.h"
# include<windows.h>
# include<stdio.h>
# include<fstream.h>
# include<ctype.h>
# include<time.h>

class blackground
{
private:
    int x;
    int y;
    int m;
	int n;
    WORD w;
public:
blackground::blackground(int x0,int y0,int m0,int n0,WORD w0);   //重载blackground（）
    display0();
    display1();
	display2();
};
blackground::blackground(int x0,int y0,int m0,int n0,WORD w0)
   	{		 m=m0;
			 n=n0;
			 y=y0;
			 x=x0;
			 w=w0;

             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),w);
			 COORD pos;
			 pos.X=x+m;
			 pos.Y=y+n;
			 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	}
blackground::display0()
	{	   
	         printf(" ");
	}
blackground::display1()
	{	   
	         printf(" ");
	}
blackground::display2()
{      SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|BACKGROUND_GREEN|BACKGROUND_INTENSITY);
          COORD pos1;
	      pos1.X=85;
		  pos1.Y=9;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos1);
    printf("play again!"); 
	}
//////////////////////定义动态双链表
 struct node
{   char x;
    char y;
	char color;
    struct node * rear;
	struct node * next;
};

////////////////获取鼠标当前点击的位置,选择模块
HANDLE hOut,hIn;
void HandleMouse(MOUSE_EVENT_RECORD Mouse,int a[2])
{
  
  if(Mouse.dwButtonState==1)
  {  a[0]=Mouse.dwMousePosition.X;
	 a[1]=Mouse.dwMousePosition.Y;
  }
}
///////////////获取需要填充的区域
HANDLE hOut1,hIn1;
void HandleMouse1(MOUSE_EVENT_RECORD Mouse,int a0[2])
{
  
  if(Mouse.dwButtonState==1)
  {  a0[0]=Mouse.dwMousePosition.X;
	 a0[1]=Mouse.dwMousePosition.Y;
  }
}


void beijing1()
{   int m,n;
	for(n=0;n<22;n++)
    {
		for(m=0;m<42;m++)
		{
			blackground z0(10,7,m,n,BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z0.display1();
        }
    }
}

void beijing2()
{	int m,n;
	for(n=0;n<22;n++)
    {
		for(m=0;m<38;m++)
		{
			blackground z0(66,7,m,n,BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z0.display1();
        }
    }
}

void mukuai()
{   int m,n;
    for(n=0;n<3;n++)
	{   for(m=0;m<15;m++)
		{  	blackground z0(86,8,m,n,BACKGROUND_GREEN|FOREGROUND_INTENSITY);
			 z0.display1();
        } 
	}        
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|BACKGROUND_GREEN|BACKGROUND_INTENSITY);
          COORD pos1;
	      pos1.X=88;
		  pos1.Y=9;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos1);
    printf("play again!"); 

	for(n=0;n<3;n++)
	{    for(m=0;m<8;m++)
		{    blackground z1(74,25,m,n,BACKGROUND_GREEN|FOREGROUND_INTENSITY);
			 z1.display1();
		}
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|BACKGROUND_GREEN|BACKGROUND_INTENSITY);
          COORD pos2;
	      pos2.X=76;
		  pos2.Y=26;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos2);
    printf("save"); 
	
	for(n=0;n<3;n++)
	{    for(m=0;m<8;m++)
		{    blackground z2(84,25,m,n,BACKGROUND_GREEN|FOREGROUND_INTENSITY);
			 z2.display1();
		}
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|BACKGROUND_GREEN|BACKGROUND_INTENSITY);
          COORD pos3;
	      pos3.X=86;
		  pos3.Y=26;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos3);
    printf("open"); 

	for(n=0;n<3;n++)
	{    for(m=0;m<8;m++)
		{    blackground z2(94,25,m,n,BACKGROUND_GREEN|FOREGROUND_INTENSITY);
			 z2.display1();
		}
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|BACKGROUND_GREEN|BACKGROUND_INTENSITY);
          COORD pos4;
	      pos4.X=96														;
		  pos4.Y=26;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos4);
    printf("over"); 
}

void mu1(int x,int y,char po[24],int f)
{   int m,n;
    int i=0;
	//char po[12]={0};
	for(m=0;m<2;m++)
    {
    	for(n=0;n<3;n++)
		{ blackground z0(x,y,m,n,BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z0.display0();
			 if(f&&i<24)
             {
				po[i++]=x+m;             //  x
				po[i++]=y+n;             //  y
				po[i++]=1;              //  颜色 
             }
			 
		}
    }   
}

void  mu2(int x,int y,char po[24],int f)
{   int m,n;
    int i=0;
    for(m=0,n=0;m<6;m++)
	{ blackground z0(x,y,m,n,BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z0.display1();
	         if(f&&i<24)
             {
				po[i++]=x+m;             //  x
				po[i++]=y+n;             //  y
				po[i++]=1;              //  颜色 
             }
	}
}
    ////////////////////////////////////////////
void  mu3(int x,int y,char po[24],int f)
{   int m,n;
    static int i=0;

	for(m=0;m<2;m++)
	{		 
       for(n=0;n<3;n++)
	   {
         blackground z1(x,y,m,n,BACKGROUND_BLUE|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z1.display1();
		     if(f&&i<24)
             {
				po[i++]=x+m;             //  x
				po[i++]=y+n;             //  y
				po[i++]=2;              //  颜色 
             }
	   }
	}

	for(n=0,m=0;m<2;m++)
    {
	   blackground z10(x+2,y+1,m,n,BACKGROUND_BLUE|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z10.display1();
		     if(f&&i<24)
             {
				po[i++]=x+m+2;             //  x
				po[i++]=y+n+1;             //  y
				po[i++]=2;              //  颜色 
             }
	}
}

void  mu4(int x,int y,char po[24],int f)
{   int m,n;
    static int i=0;
    for(n=0,m=0;m<6;m++)
	{  blackground z11(x,y,m,n,BACKGROUND_BLUE|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z11.display1();
		     if(f&&i<24)
             {
				po[i++]=x+m;             //  x
				po[i++]=y+n;             //  y
				po[i++]=2;              //  颜色 
             }
	}
	for(n=0,m=0;m<2;m++)
    {
	   blackground z12(x+2,y+1,m,n,BACKGROUND_BLUE|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z12.display1();
		     if(f&&i<24)
             {
				po[i++]=x+m+2;             //  x
				po[i++]=y+n+1;             //  y
				po[i++]=2;              //  颜色 
             }
	}
}

void  mu5(int x,int y,char po[24],int f)
{   int m,n;
    static int i=0;
    for(n=0,m=0;m<6;m++)
	{  blackground z13(x,y,m,n,BACKGROUND_BLUE|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z13.display1();
		     if(f&&i<24)
             {
				po[i++]=x+m;             //  x
				po[i++]=y+n;             //  y
				po[i++]=2;              //  颜色 
             }
	}
	for(n=0,m=0;m<2;m++)
    {
	   blackground z14(x+2,y-1,m,n,BACKGROUND_BLUE|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z14.display1();
             if(f&&i<24)
             {
				po[i++]=x+m+2;             //  x
				po[i++]=y+n-1;             //  y
				po[i++]=2; 
             }
	}
}

void  mu6(int x,int y,char po[24],int f)
{   int m,n;
   static int i=0;
    for(m=0;m<2;m++)
	{		 
       for(n=0;n<3;n++)
	   {
         blackground z15(x,y,m,n,BACKGROUND_BLUE|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z15.display1();
		     if(f&&i<24)
             {
				po[i++]=x+m;             //  x
				po[i++]=y+n;             //  y
				po[i++]=2;              //  颜色 
             }
	   }
	}
	for(n=0,m=0;m<2;m++)
    {
	   blackground z16(x-2,y+1,m,n,BACKGROUND_BLUE|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z16.display1();  
		     if(f&&i<24)
             {
				po[i++]=x+m-2;             //  x
				po[i++]=y+n+1;             //  y
				po[i++]=2;              //  颜色 
             }
	}			 
}

    //////////////////////////////////////////////
void  mu7(int x,int y,char po[24],int f)
{   int m,n;
    static int i=0;
	for(m=0;m<2;m++)
	{		 
       for(n=0;n<3;n++)
	   {
         blackground z2(x,y,m,n,BACKGROUND_GREEN|BACKGROUND_RED|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z2.display1();
		     if(f&&i<24)
             {
				po[i++]=x+m;             //  x
				po[i++]=y+n;             //  y
				po[i++]=3;              //  颜色 
             }
	   }
	}
	for(n=0,m=0;m<2;m++)
    {
	   blackground z20(x+2,y,m,n,BACKGROUND_GREEN|BACKGROUND_RED|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z20.display1();
		     if(f&&i<24)
             {
				po[i++]=x+m+2;             //  x
				po[i++]=y+n;             //  y
				po[i++]=3;              //  颜色 
             }
	}
}

void  mu8(int x,int y,char po[24],int f)
{   int m,n;
    static int i=0;
	for(n=0,m=0;m<2;m++)
    {
	   blackground z21(x,y,m,n,BACKGROUND_GREEN|BACKGROUND_RED|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z21.display1();
		     if(f&&i<24)
             {
				po[i++]=x+m;             //  x
				po[i++]=y+n;             //  y
				po[i++]=3;              //  颜色 
             }
	}
    for(n=0;m<8;m++)
	{  blackground z22(x-2,y+1,m,n,BACKGROUND_GREEN|BACKGROUND_RED|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z22.display1();
		     if(f&&i<24)
             {
				po[i++]=x+m-2;             //  x
				po[i++]=y+n+1;             //  y
				po[i++]=3;              //  颜色 
             }
	}
}

void  mu9(int x,int y,char po[24],int f)
{   int m,n;
    static int i=0;
    for(m=0;m<2;m++)
	{		 
       for(n=0;n<3;n++)
	   {
         blackground z2(x,y,m,n,BACKGROUND_GREEN|BACKGROUND_RED|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z2.display1();
		     if(f&&i<24)
             {
				po[i++]=x+m;             //  x
				po[i++]=y+n;             //  y
				po[i++]=3;              //  颜色 
             }
	   }
	}
	for(n=0,m=0;m<2;m++)
    {
	   blackground z20(x-2,y+2,m,n,BACKGROUND_GREEN|BACKGROUND_RED|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z20.display1();
		     if(f&&i<24)
             {
				po[i++]=x+m-2;             //  x
				po[i++]=y+n+2;             //  y
				po[i++]=3;              //  颜色 
             }
	}
}

void  mu10(int x,int y,char po[24],int f)
{   int m,n;
    static int i=0;
	for(n=0,m=0;m<2;m++)
    {
	   blackground z21(x,y,m,n,BACKGROUND_GREEN|BACKGROUND_RED|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z21.display1();
		     if(f&&i<24)
             {
				po[i++]=x+m;             //  x
				po[i++]=y+n;             //  y
				po[i++]=3;              //  颜色 
             }
	}
    for(n=0;m<8;m++)
	{  blackground z22(x-6,y-1,m,n,BACKGROUND_GREEN|BACKGROUND_RED|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z22.display1();
		     if(f&&i<24)
             {
				po[i++]=x+m-6;             //  x
				po[i++]=y+n-1;             //  y
				po[i++]=3;              //  颜色 
             }
	}
}

	//////////////////////////////////////////////
void  mu11(int x,int y,char po[24],int f)
{   int m,n;
    static int i=0;
	for(m=0;m<4;m++)
	{		 
       for(n=0;n<2;n++)
	   {
         blackground z3(x,y,m,n,BACKGROUND_BLUE|BACKGROUND_RED|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z3.display1();
		     if(f&&i<24)
             {
				po[i++]=x+m;             //  x
				po[i++]=y+n;             //  y
				po[i++]=4;              //  颜色 
             }
	   }
	}
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY);
	printf("\n");
}

void choose(char po[24])
{   mu1(68,8,po,0);mu2(76,9,po,0);mu3(68,14,po,0);mu4(76,14,po,0);mu5(86,16,po,0);mu6(98,14,po,0);mu7(68,20,po,0);mu8(76,21,po,0);mu9(88,20,po,0);mu10(100,21,po,0);mu11(68,26,po,0);
}


/////////////存储操作过程

struct node * insert(char c[24],struct node * head)
{    int n=0;
     char ch;
	 int m;
	 struct node * p,* q;
     p=head;
	 if(head!=0)
     while(p->next!=0)
		{
		  p=p->next;
		} 
     //printf("~~~~~~~~~~~~~~~~");
	 for(n=0;n<24;n++)
	 {  
		 q=(struct node* )malloc(sizeof(struct node));
           if(n%3==2) 
		   {    if(c[n-1]==0)   break;
		        else
                {    q->color=c[n];
				     q->y=c[n-1];
				   	 q->x=c[n-2];
                     p->next=q;
		             p=q;
				}
			}
     }
	 p->next=0;
     return(head);
}

///////////////////存数随机(有错)

struct node * creat(int c[378])
{   
    struct node * head,* p,* q;
    char ch,ch1;
	int n=0;
	int m;
    q=(struct node* )malloc(sizeof(struct node));
	head=0;
	for(n=0;n<378;n++)
	{   
			p=(struct node* )malloc(sizeof(struct node));
		          if(n%3==2) 
				 {     if(c[n-1]==0)  break;
					   else
					   {   p->color=c[n];
				           p->y=c[n-1];
						   p->x=c[n-2];
						   if(n==2)  head=p;
		                   else q->next=p;
				           q=p;
                       }
				 }
		
	}
	q->next=0;
	return(head);
}

void suiji(int r[21],int po1[378])
{   int i,m,n,N;
    int k=0;
    int j=10;
    srand((int)time(0));
  for(i=0;i<21;i++)
  {  
     r[i]=rand()%4;
	 N=r[i];
	 //printf("%d",r[i]);
	 if(N)
     { for(n=0;n<N;n++)
		{
			for(m=0;m<2;m++)
			{   blackground s1(j,28,m,-n,BACKGROUND_RED|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
				s1.display1();
				po1[k++]=j+m;
				po1[k++]=28-n;
				po1[k++]=5;
			}   
		} 
	 } j=j+2; 
  }                      
         //存储
}

void print(struct node * head)
{   int m,n,x1,y1,c1;
	for(n=0;n<22;n++)
    {
		for(m=0;m<42;m++)
		{
			blackground z0(10,32,m,n,BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z0.display1();
        }
    }
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_INTENSITY|BACKGROUND_INTENSITY);
    COORD pos2;
		  pos2.X=15;
		  pos2.Y=33;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos2);
	printf("------> 上次操作的记录 <------");
	struct node * p;
	p=head;
    if(head!=0)
		do  
		{ x1=p->x;
		  y1=p->y;
		  c1=p->color;
		  if(c1==1)
          {blackground z(x1,y1+25,0,0,BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
		  z.display1();}
		  else if(c1==2)
		  {blackground z(x1,y1+25,0,0,BACKGROUND_BLUE|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
          z.display1();}
		  else if(c1==3)
		  {blackground z(x1,y1+25,0,0,BACKGROUND_GREEN|BACKGROUND_RED|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
          z.display1();}
          else if(c1==4)
		  {blackground z(x1,y1+25,0,0,BACKGROUND_BLUE|BACKGROUND_RED|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
          z.display1();}
          else if(c1==5)
		  {blackground z(x1,y1+25,0,0,BACKGROUND_RED|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
          z.display1();}
		 // printf("x=%d,y=%d,color=%d",p->x,p->y,p->color);
		  p=p->next;
		} while(p!=0);
	
}


////////////清屏
void clear(int r[21],int po1[378], char po[24])    //  初始化数组
{ int i,N,n,m;
  int j=10;
  int k=0;
  for(i=0;i<24;i++)
	  po[i]=0;
  for(i=0;i<378;i++)
	  po1[i]=0;
  beijing1();
for(i=0;i<21;i++)
  {  
	 N=r[i];
	 if(N)
     { for(n=0;n<N;n++)
		{
			for(m=0;m<2;m++)
			{   blackground s1(j,28,m,-n,BACKGROUND_RED|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
				s1.display1();
				po1[k++]=j+m;
				po1[k++]=28-n;
				po1[k++]=5;
			}   
		} 
	 } j=j+2; 
  }                      
}

int save(struct node * head)               // 保存
{   char ch;
	ofstream SaveFile("1.dat",ios::out);
	struct node * p;
	p=head;
    int n=0;
    if(head!=0)
	  do  
	  {
          if(n==0)
		  {   ch=p->x;
			  SaveFile<<ch;
			  n++;
		  }
          else if(n==1)
		  {	  ch=p->y;
		      SaveFile<<ch;
		      n++;
		  }
          else if(n==2)
		  {   ch=p->color;
		      SaveFile<<ch;
		      n=0;
		      p=p->next;
		  }
	  } while(p!=0);
SaveFile.close();
return 1;
}

/////////////打开1.dat
/*void open()
{ 
   struct node * head,* p,* q;
    p=q=(struct node* )malloc(sizeof(struct node));
	head=0;
    char ch;
	int n=-1;

    ifstream OpenFile("1.dat");
       while(!OpenFile.eof()) 
			 {   n++;
		         OpenFile.get(ch);
				// p=(struct node * )malloc(sizeof(struct node));
				 if(n%3==0)
				 { p->x=ch;  printf("p->x=%d,",ch);}
                 else if(n%3==1)
				 {   p->y=ch;   printf("p->y=%d,",ch);}
				 else if(n%3==2)
				 { p->color=ch;   printf("p->c=%d\n",ch);
				           if(n==2)  head=p;
					       else q->next=p;
                     q=p;
		           p=(struct node * )malloc(sizeof(struct node));
                 
				 } 
				 
				     //SaveFile<<ch;
				
			 }
    q->next=0;
	OpenFile.close();
    //SaveFile.close();
	return(head);
}*/

void main()
{ int x,y,x0,y0;
  int flag=0;
  int flag1=1;
  struct node * head;
  struct node * head2;
  int m[1]={0};
  int r[21];
  int po1[378]={0};
  char po[24]={0};
  beijing1();
  beijing2();
  choose(po);
  mukuai();
  suiji(r,po1);
  head=creat(po1); 
//  print(head);
  while(1)
  {
    HANDLE hOut,hIn;
    DWORD Result;
    INPUT_RECORD Buf;
 
	 hOut=GetStdHandle(STD_OUTPUT_HANDLE);
	 hIn=GetStdHandle(STD_INPUT_HANDLE);
	 int a[2];
	 do
		{
			ReadConsoleInput(hIn,&Buf,1,&Result);
			if(Buf.EventType==MOUSE_EVENT)
			{
				HandleMouse(Buf.Event.MouseEvent,a);
				x=a[0];
	   			y=a[1];
			}
		} while(!(Buf.EventType==MOUSE_EVENT&&Buf.Event.MouseEvent.dwEventFlags==DOUBLE_CLICK));


  
	HANDLE hOut1,hIn1;
	DWORD Result1;
	INPUT_RECORD Buf1;
	hOut1=GetStdHandle(STD_OUTPUT_HANDLE);
	hIn1=GetStdHandle(STD_INPUT_HANDLE);
	int a0[2];
    do
		{
			ReadConsoleInput(hIn1,&Buf1,1,&Result1);
			if(Buf1.EventType==MOUSE_EVENT)
			{
				HandleMouse1(Buf1.Event.MouseEvent,a0);
				x0=a0[0];
	   			y0=a0[1];
			}
		} while(!(Buf1.EventType==MOUSE_EVENT&&Buf1.Event.MouseEvent.dwEventFlags==DOUBLE_CLICK)); 
     

	//  清屏的按钮
   /*  if(x0>=86&&x0<=100&&y0>=8&&y0<=10)
     {   clear(r,po1,po);
	     free(head);

	     continue;
	 }*/
	  if(x0>=74&&x0<=82&&y0>=25&&y0<=27)	
         flag=save(head);
	 
	  // if(x0>=85&&x0<=93&&y0>=25&&y0<=27)	
       //  open();
	 
	   if(x0>=96&&x0<=104&&y0>=25&&y0<=27)	
	   {   ////// 上次运行的结果
		   if(flag1==1)
			{ flag1=0;
		      //print(head);
		      SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|BACKGROUND_GREEN|BACKGROUND_INTENSITY);
              COORD pos1;
	          pos1.X=0;
		      pos1.Y=60;
	          SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos1);
			}  
		    
		   if(flag==1)
			{ flag=0;
		      print(head);
		      SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|BACKGROUND_GREEN|BACKGROUND_INTENSITY);
              COORD pos1;
	          pos1.X=0;
		      pos1.Y=60;
	          SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos1);
              break; 
			}
		  else if(flag==0)
			{   
			  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_INTENSITY);
              COORD pos0;
	          pos0.X=10;
		      pos0.Y=32;
	          SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos0);
			  printf("    请您先保存 !    ");
			}
			  //   保存
	 }
		
		

     if(x0>=10&&x0<=51&&y0>=7&&y0<=28)
	 {  x0=x0/2*2;  //   取偶数点
		    if(x>=68&&x<=69&&y>=8&&y<=10)            
			{ 
				mu1(x0,y0-2,po,1);    head2=insert(po,head); // print(head2);  
			}
			          
		    else if(x>=76&&x<=81&&y==9)                
			{ 
			    mu2(x0-4,y0,po,1);    head2=insert(po,head);  // print(head2);
			}     
		    else if(x>=68&&x<=73&&y>=14&&y<=16)        
			{ mu3(x0-2,y0-1,po,1);    head2=insert(po,head);  // print(head2);   
			}    
			else if(x>=76&&x<=81&&y>=14&&y<=16)        
			{ mu4(x0-2,y0-1,po,1);      head2=insert(po,head);  // print(head2);   
			}  
			else if(x>=86&&x<=91&&y>=14&&y<=16)        
			{ mu5(x0-2,y0+1,po,1);      head2=insert(po,head);   // print(head2);   
			}   
			else if(x>=98&&x<=103&&y>=14&&y<=16)       
			{ mu6(x0-5,y0,po,1);      head2=insert(po,head);   // print(head2);    
			}                 
			else if(x>=68&&x<=73&&y>=20&&y<=22)        
			{ mu7(x0,y0-2,po,1);      head2=insert(po,head);  // print(head2);   
			}                 
			else if(x>=76&&x<=81&&y>=20&&y<=22)        
			{ mu8(x0-4,y0-1,po,1);    head2=insert(po,head);  // print(head2);    
			}
			else if(x>=86&&x<=91&&y>=20&&y<=22)        
			{ mu9(x0,y0-2,po,1);      head2=insert(po,head);  // print(head2);   
			}              
			else if(x>=99&&x<=104&&y>=20&&y<=22)       
			{ mu10(x0,y0,po,1);       head2=insert(po,head);  // print(head2);   
			} 
			else if(x>=68&&x<=71&&y>=26&&y<=28)        
			{ mu11(x0-2,y0-1,po,1);   head2=insert(po,head);  // print(head2);    
			}
	}
  }	
}


