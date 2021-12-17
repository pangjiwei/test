#include<iostream>
using namespace std;
class Person{
public:	
	int age;
	int high;
	void jump();
	Person(int real_age,int real_high);
	Person();
	void eat(){
		
		cout<<"eat"<<endl;
	};

};
 void  Person::jump(){
		
		cout<<"jump"<<endl; 
	}
 Person::Person(int real_age,int real_high){
 	
 	age=real_age;
 	high=real_high;
 }	
Person::Person(){
 	age=0;
 	high=0;
 	
 }	
int main(){
	
	Person one(1,1);
	Person two;
	cout<<one.age<<endl;
	cout<<two.age<<endl;
	
}
/*
类的创建： class 类的名称 {
    数据成员
    类的方法声明 
} 
数据成员： 数据类型  数据名称  
类的方法： 数据类型 方法名称() 
具体类的方法： 数据类型 类名称：：方法名称(){} 
构造方法：类名称() 在里声明 
构造方法(具体)： 类名称::类名称(){} 
小结：类的方法可以写在类内外部，构造方法允许重载，标准类一定要写get set 方法 

*/
