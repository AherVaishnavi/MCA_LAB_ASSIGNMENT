/* Write a function in C++ to count and display the number of lines not starting with alphabet 'A' present in a text file "STORY.TXT".
   Example:
      If the file "STORY.TXT" contains the following lines, The roses are red.
      A girl is playing there. There is a playground.
      An aeroplane is in the sky.
      Numbers are not allowed in the password. T
      he function should display the output as 3. */

#include<iostream.h>
#include<conio.h>
#include<fstream.h>
int main()
{
	clrscr();
	ifstream ob;
	ob.open("abc.txt");
	char s[100];
	int cnt=0;
	ob.getline(s,100);
	while(!ob.eof())
	{

		 ob.getline(s,100);
		if(s[0]!='a'&&s[0]!='A')
		cnt++;
	}
	ob.close();
	cout<<"\n\n*************************************************\n";
	cout<<"\nThe no lines which do not start with A are : "<<cnt;
getch();
return 0;
}
