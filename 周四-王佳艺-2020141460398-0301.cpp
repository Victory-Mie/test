#include <iostream>
using namespace std;
#include <string>
#include<stdlib.h>

class Book{
	public:
		Book()
		{
			author="wjy";
			number=100;
		}
	
		string bookname;
		string author="wjy";
		int price;
		int number=100;
		
		int display()
		{
			cout<<"书名；"<<bookname <<endl;
	        cout<<"作者："<<author <<endl;
	        cout<<"价格；"<<price <<endl;
			cout<<"当前存书量为："<<number<<endl;
			return number;
		 } 
		int borrow()
		{
			number--;
            display();
            return number;
		}
		int restore()
		{
			number++;
			display();
			return number;
		}
};
int main()
{
	Book b1;
	b1.bookname="c++程序设计";
	b1.author="谭浩强"; 
	b1.price=99;
	
	while(1)
	{
      char ch;
	  cin>>ch;
	  if(ch=='d')
	 {
	 	b1.display();
	 }
	  else if(ch=='b')
	 {
	    b1.borrow();
	    //cout<<b1.number<<endl;
	 }
	  else if(ch=='r')
	 {
	    b1.restore();
		//cout<<b1.number<<endl;	
	 }
	  else if(ch='e')
	 {
	   exit(0);
	 }
	}
	
	system("pause");
	return 0;
 } 
