/*Write a C++ program create a calculator for an arithmetic operator (+, -, *, /).
  The program should take two operands from user and performs the operation on those two operands
  depending upon the operator entered by user. Use a switch statement to select the operation.Finally, display the result.
  Some sample interaction with the program might look like this:
      Enter first number, operator, second number: 10 / 3 Answer =3.333333
      Do another (y/n)?y
      Enter first number, operator, second number: 12 + 100 Answer = 112 
      Do another (y/n)? n */

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
