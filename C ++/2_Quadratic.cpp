#include<iostream.h>
#include<conio.h>

class quadratic{
 public:
  int a,b,c;

  void get(){
   cout<<"\nEnter value for a: ";
   cin>>a;
   cout<<"Enter value for b: ";
   cin>>b;
   cout<<"Enter value for c: ";
   cin>>c;
  }

  void show(){
   cout<<a<<"x2+"<<b<<"x+"<<c;
  }

  quadratic operator +(quadratic &p){
   quadratic res;
   res.a=a+p.a;
   res.b=b+p.b;
   res.c=c+p.c;
   return res;
  }

  void eval(){
   quadratic res;
   int x;
   cout<<"\nEnter value for x";
   cin>>x;
   a=a*(x*x);
   b=b*x;
   c=c;
   cout<<"Result: "<<a+b+c;
  }

  friend ostream &operator<<(ostream &out, quadratic &p);
  friend istream &operator>>(istream &in, quadratic &p);
};

ostream &operator<<(ostream &out, quadratic &p){
 out<<p.a<<"x2+"<<p.b<<"x+"<<p.c;
 return out;
}

istream &operator >>(istream &in, quadratic &p){
 cout<<"\nEnter value for a: ";
 in>>p.a;
 cout<<"Enter value for b: ";
 in>>p.b;
 cout<<"Enter value for c: ";
 in>>p.c;
 return in;
}

void main(){
 quadratic a,b,c;
 clrscr();
 cout<<"\nEnter First Polynomial";
 cin>>a;
 cout<<"\nEnter Second Polunomial";
 b.get();
 cout<<"\nPolynomial 1: ";
 cout<<a;
 cout<<"\nPolynomial 2: ";
 b.show();
 c=a+b;
 cout<<"\nAddition: ";
 c.show();
 cout<<"\n\nEvaluation of 1st Expression: ";
 a.eval();
 getch();
}






