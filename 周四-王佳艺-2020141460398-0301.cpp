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
			cout<<"������"<<bookname <<endl;
	        cout<<"���ߣ�"<<author <<endl;
	        cout<<"�۸�"<<price <<endl;
			cout<<"��ǰ������Ϊ��"<<number<<endl;
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
	b1.bookname="c++�������";
	b1.author="̷��ǿ"; 
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
