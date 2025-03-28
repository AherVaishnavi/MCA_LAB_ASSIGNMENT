/* Write C++ Program with base class convert declares two variables, val1 and val2, which
  hold the initial and converted values, respectively. It also defines the functions getinit( )
  and getconv( ), which return the initial value and the converted value. These elements of
  convert are fixed and applicable to all derived classes that will inherit convert. However,
  the function that will actually perform the conversion, compute( ), is a pure virtual
  function that must be defined by the classes derived from convert. The specific nature of
  compute( ) will be determined by what type of conversion is taking place. */

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
