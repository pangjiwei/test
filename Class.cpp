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
��Ĵ����� class ������� {
    ���ݳ�Ա
    ��ķ������� 
} 
���ݳ�Ա�� ��������  ��������  
��ķ����� �������� ��������() 
������ķ����� �������� �����ƣ�����������(){} 
���췽����������() �������� 
���췽��(����)�� ������::������(){} 
С�᣺��ķ�������д�������ⲿ�����췽���������أ���׼��һ��Ҫдget set ���� 

*/
