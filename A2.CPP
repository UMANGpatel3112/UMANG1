#include<iostream.h>
#include<conio.h>
class A
{
public:
int a;
long int b;
char c[20],d[20];
void print()
{
cout<<"enter the name:"<<endl;
cin>>c;
cout<<"enter the roll no.:"<<endl;
cin>>a;
cout<<"enter the no."<<endl;
cin>>b;
cout<<"enter the add.:"<<endl;
cin>>d;
cout<<"the name:"<<c<<endl;
cout<<"the roll no.:"<<a<<endl;
cout<<"the no.:"<<b<<endl;
cout<<"the add.:"<<d<<endl;
}
};
class B
{
public:
int e;
long int f;
char g[20],h[20];
void show()
{
cout<<"enter the name:"<<endl;
cin>>g;
cout<<"enter the roll no.:"<<endl;
cin>>e;
cout<<"enter the no."<<endl;
cin>>f;
cout<<"enter the add.:"<<endl;
cin>>h;
cout<<"the name:"<<g<<endl;
cout<<"the roll no.:"<<e<<endl;
cout<<"the no.:"<<f<<endl;
cout<<"the add.:"<<h<<endl;
}
};
void main()
{
clrscr();
A a1;
B b1;
a1.print();
b1.show();
getch();
}
