//Program to demonstrate unary -(minus) operator overlosding without
//  using frind function
#include<iostream.h>
#include<conio.h>
class unary
{
      private:
	      int a,b,c;
      public:
	      void get();
	      void show();
	      void operator -();   //declaretion
};
void unary::get()
{
	cout<<"enter value of a = ";
	cin>>a;
	cout<<"enter value of b = ";
	cin>>b;
	cout<<"enter value of c = ";
	cin>>c;
}
void unary::show()
{
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	cout<<"c = "<<c<<endl;
}
void unary::operator -()    //defination
{
	a=-a;
	b=-b;
	c=-c;
	cout<<endl<<"***********************"<<endl;
	cout<<endl;
}
void main()
{
	clrscr();
	unary u;
	u.get();
	-u;           //operator function call
	u.show();
	getch();
}