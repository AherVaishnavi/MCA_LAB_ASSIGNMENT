#include<iostream.h>
#include<conio.h>

class cppArray{
 int a[10], b[10], i, temp, n;
 public:
	void accept();
	void display();
	void range();
	void exchange();
	int size();
 };

 void cppArray :: accept(){
	cout<<"\nEnter Number of Elements in Array: ";
	cin>>n;
	cout<<"\Enter the Array Elements:\n";
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]: ";
		cin>>a[i];
	}
 }

 void cppArray :: display(){
	cout<<"\nEntered Array Elements are:\n";
	for(int i=0; i<n; i++){
		cout<<a[i]<<"\t";
	}
 }

 void cppArray :: range(){
	int min=a[0], max=a[0];
	cout<<"\n\nMinimum and Maximum of Array is:";
	for(i=0; i<n; i++){
		if(min>a[i]){
			min=a[i];
		}
		if(max<a[i]){
			max=a[i];
		}
	}
	cout<<"\nMin: "<<min;
	cout<<"\nMax: "<<max;
 }

 void cppArray :: exchange(){
	for(i=0; i<n; i++){
		b[i]=a[i];
	}
	cout<<"\n\nThe Array Elements are Exchanged:\n";
	for(i=0; i<n; i++){
		cout<<"b["<<i<<"] = "<<b[i]<<"\n";
	}
 }

 int cppArray :: size(){
	return n;
 }

 int main(){
  int t;
  clrscr();
  cppArray obj;
  obj.accept();
  obj.display();
  obj.range();
  obj.exchange();

  t = obj.size();
  cout<<"\nThe size of array is: "<<t;
  getch();
  return 0;
 }