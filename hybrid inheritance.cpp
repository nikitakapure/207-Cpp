#include<iostream.h>
#include<conio.h>
class stud
{
  private:
     int rollno;
     char name[20];
  public:
      void get();
      void display();
};
void stud::get()
{
  cout<<"Enter rollno:";
  cin>>rollno;
  cout<<"Enter name:";
  cin>>name;
  cout<<endl;
}
void stud::display()
{
  cout<<"Roll no:"<<rollno<<endl;
  cout<<"Name:"<<name<<endl;
  cout<<endl;
};
class mark:public stud
{
  protected:
      int m,m1;
  public:
      void get();
      void display();
};
void mark::get()
{
  stud::get();
  cout<<"Enter mark first sub:";
  cin>>m;
  cout<<"Enter mark second sub:";
  cin>>m1;
  cout<<endl;
}
void mark::display()
{
   stud::display();
   cout<<"Mark first sub:";
   cout<<"Mark second sub:";
   cout<<endl;

}
class info
