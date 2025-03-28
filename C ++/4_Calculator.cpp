#include<iostream.h>
#include<conio.h>

void main(){
 float num1, num2, sum;
 char op, loop;
 clrscr();

 do{
  cout<<"\n----- Arithmetic Calculator ------\n";

  cout<<"\nEnter First Number: ";
  cin>>num1;
  cout<<"Enter Second Number: ";
  cin>>num2;

  cout<<"Enter the Operator (+, -, *, /): ";
  cin>>op;

  switch(op){
   case '+':
    sum = num1+num2;
    cout<<"Addition is: "<<sum;
    break;

   case '-':
    sum = num1-num2;
    cout<<"Substraction is: "<<sum;
    break;

   case '*':
    sum = num1*num2;
    cout<<"Multiplication is: "<<sum;
    break;

   case '/':
    sum = num1/num2;
    cout<<"Division is: "<<sum;
    break;

   default:
    cout<<"Entered operator is not valid";
  }

  cout<<"\n\nDo another(y/n): ";
  cin>>loop;

  if(loop == 'n'){
   cout<<"Thank You!";
   cout<<"\nEnter any key to Exit";
  }
 }while(loop == 'y');

 getch();
}