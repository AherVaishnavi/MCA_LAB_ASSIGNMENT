#include<iostream.h>
#include<conio.h>
class Convert
{
	 protected:
	 double val1,val2;
	 public:
	 Convert(double init)
	 {
		 val1=init;
		 val2=0.0;
	 }
	 double getinit()
	{
		 return val1;
	}
	 double getconv()
	 {
		 return val2;
	 }
	 virtual void compute()=0;
};
class fc:public Convert
{
	 public:
	 fc(double c):Convert(c)
	 {
	 }
	 void compute()
	 {
		 val2=((val1-32)*5)/9;
	 }
};
void main()
{
	clrscr();
	Convert *c;
	float fh;
	cout<<"Enter the temprature in ferahanhite:";
	cin>>fh;
	fc f(fh);
	c=&f;
	cout<<"\nFeranhite:"<<c->getinit();
	c->compute();
	cout<<"\nCelcius:"<<c->getconv();
	getch();
}