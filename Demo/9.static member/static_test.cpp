#include <iostream>
using namespace std;

class A{
    public:
      A(){}
     ~A(){}
     /*�Ǿ�̬��Ա���������Է�����ͨ��Ա����Ҳ���Է��ʾ�̬��Ա����*/
     void show(){
       cout <<"m_var1: "<<m_var1<<" m_var2: "<<m_var2 <<endl;
    }

    private:
     int m_var1;
     static int m_var2;
     static A a;
  //   A &b;
};
int A::m_var2 = 10;

int main()
{
    A a;
    a.show();
    return 0;
}



