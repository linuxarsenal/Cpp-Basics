#include <iostream>
#include <string>
using namespace std;

class Computer{
     public:
       Computer(){}
       Computer(Computer&){
         cout <<"----computer constructor----" << endl;
       }
       ~Computer(){}
     private:
       string name;
};


class Student{
     public:
       Student(){}
       Student(string name, int age){
           cout <<"----constructor----" << endl;
           Computer com;
           m_comp = com;
           this->name = name;
           this->age = age;
       }
       //�������캯��
        Student(const Student &s){
           cout <<"----copy constructor----" << endl;
           this->name = s.name;
           this->age = s.age;
       }
       ~Student(){}
       //��һ��������Ϊ����ֵ��ʱ�����øö����һ���������캯��
       Computer getComp(){
            cout <<"getComp()"<< endl;
            return m_comp;
         
       }
       Student getst(){
            return *this; //����øö���Ŀ������캯��
       }
       void disp(){
           cout <<"name: "<<name<<" age: "<<age << endl;
       }
     private:
       string name;
       int    age;
       Computer m_comp;
};

//�Ѷ�����Ϊ��������ֵ���ݵ�ʱ�򿽱����캯���ᱻ����
void disp_out(Student s)
{
     s.disp();
}


int main(void)
{
    Student s1("Lin", 20);
    s1.disp();
    Student s2 = s1;//�Զ����ÿ������캯��
    s2.disp(); 
    Student s3(s2);//��ʽʹ�ÿ������캯��
    s3.disp();
    cout <<"******************" << endl;
    disp_out(s3);  //��һ��������Ϊֵ���ݵ�ʱ�����ÿ������캯��
    cout <<"------------------" << endl;
    s1.getComp();
    s3.getst();
    return 0;
}









