#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

template<class T>
class vector
  {
  T v[20];
    int size;
    public:

     void create();
     void display();
     void multiply();
     void modify();
  };

  template<class T>
  void vector<T>::create()
  {
   int i;
   T value;
   char ans;
   size=0;
   do{
    cout<<"enter the index:";
    cin>>i;
    cout<<"enter the value:";
    cin>>value;
    v[i]=value;
    size++;
    cout<<"Do you want more elements? (y/n)!";
    cin>>ans;
    }while(ans=='y' || ans=='Y');
   }
  template<class T>
  void vector<T>::display()
  {
   int i;
   cout<<"Size of vector"<<size<<endl;
   cout<<"Elements of vector are:"<<endl;
   cout<<"(";
   for(i=1; i<size+1;i++)
   {
    cout<<v[i]<<",";
   }
   cout<<")";
  }
  template<class T>
  void vector<T>::multiply()
  {
   int i;
   int scalarval;
   cout<<"enter the scalar value for multiplication:";
   cin>>scalarval;
   for(i=1;i<size+1;i++)
   {
    v[i]=v[i] * scalarval;
   }
  }
  template<class T>
  void vector<T>::modify()
  {
   int i;
   int newval;
   cout<<"Enter the index to modify:"<<endl;
   cin>>i;
   cout<<"enter the new value:";
   cin>>newval;
   v[i]=newval;
  }

  int main()
  {
   int choice;
   clrscr();
   vector<int>obj;
   do{
     cout<<"\n\n---------PROGRAM FOR TEMPLATE CLASS---------"<<endl;
     cout<<"\n --MAIN MENU--"<<endl;
     cout<<"\n 1.CREATE:"<<endl;
     cout<<"\n 2.DISPLAY:"<<endl;
     cout<<"\n 3.MULTIPLY:"<<endl;
     cout<<"\n 4.MODIFY:"<<endl;
     cout<<"\n 5.EXIT:"<<endl;
      cout<<"\n Enter your choice:"<<endl;
     cin>>choice;
     switch(choice){
     case 1:obj.create();
	break;
    case 2:obj.display();
	break;
    case 3:obj.multiply();
	break;
    case 4:obj.modify();
	break;
   default:
    cout<<"\n Invalid choice..!"<<endl;
   }
  }while(choice!=5);
  getch();
  return 0;
}


