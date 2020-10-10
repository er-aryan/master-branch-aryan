/*#include<iostream>
using namespace std;

class Y;

class X{
	int data;
	public:
		void setData(int value){
			data = value;
		}
		friend void add(X,Y);
};
class Y{
	int num;
	public:
		void setData(int value){
			num = value;
		}
		friend void add(X,Y);
};
void add(X o1,Y o2){
	cout<<"summing data of X and Y is : "<<o1.data + o2.num<<endl;
}
int main(){
	X a;
	a.setData(5);
	 
	Y b;
	b.setData(6);
	
	add(a,b);
	return 0;
}*/

#include <iostream>
using namespace std;

class C2;

class C1
{
	int val1;
	public:
		void indata(int a){
			val1 = a;
		}
		void display(void){
			cout<<val1<<endl;
		}
		friend void exchange(C1 &, C2 &);
};
class C2
{
	int val2;
	public:
		void indata(int a){
			val2 = a;
		}
		void display(void){
			cout<<val2<<endl;
		}
		friend void exchange(C1 &, C2 &);
};
void exchange(C1 &x,C2 &y){
	int temp = x.val1;
	x.val1=y.val2;
	y.val2=temp;
}

int main(){
	C1 oc1;
	C2 oc2;
	oc1.indata(3);
	oc2.indata(6);
	exchange(oc1,oc2);
	cout<<"the value of a after exchanging is : ";
	oc1.display();
	cout<<"the value of b after exchanging is : ";
	oc2.display();
	
	return 0;
	
}
