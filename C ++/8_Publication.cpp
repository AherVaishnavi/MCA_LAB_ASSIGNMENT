/* Imagine a publishing company which does marketing for book and audiocassette versions.
    Create a class publication that stores the title (a string) and price (type float) of a publication.
    From this class derive two classes: book, which adds a page count (type int),and tape, which adds a playing time in minutes (type float).
    Write a program that instantiates the book and tape classes, allows user to enter data and
    displays the data members. If an exception is caught, replace all the data member values
    with zero values. */

#include<iostream.h>
#include<conio.h>
#include<string.h>

class Publication{
	private:
		char title[50];
		float price;

	public:
		void get_publication(){
			cout<<"\nPublication name: ";
			cin>>title;
			cout<<"Price: ";
			cin>>price;
		}

		void show_publication(){
			cout<<"\nPublication name: "<<title<<endl;
			cout<<"Price: "<<price<<endl;
		}
};

class Book : public Publication{
	int page_count;

	public:
		void get_book(){
			cout<<"Enter page count: ";
			cin>>page_count;
		}

		void show_book(){
			cout<<"Page count: "<<page_count<<endl;
		}
};

class Tape: public Publication{
	float tape_time;

	public:
		void get_tape(){
			cout<<"Enter play time(in min): ";
			cin>>tape_time;
		}

		void show_tape(){
			cout<<"Playing time(in min): "<<tape_time<<endl;
		}
};

void main(){
	Book b1;
	Tape t1;
	clrscr();

	cout<<"----- Enter book detail -----"<<endl;
	b1.get_publication();
	b1.get_book();

	cout<<"\n----- Enter tape detail ----- "<<endl;
	t1.get_publication();
	t1.get_tape();

	cout<<"\n----- Book details -----"<<endl;
	b1.show_publication();
	b1.show_book();

	cout<<"\n----- Tape Details -----"<endl;
	t1.show_publication();
	t1.show_tape();

	getch();
}
