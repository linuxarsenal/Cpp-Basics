#include <iostream>
using namespace std;

class Person{
    public:
      Person(){}
      ~Person(){}
      void set(int var){
          this->m_var = var;
      }
      int get() const{  //����Ա���� 
        //  m_var2 = 12; //error!
          return m_var;
      }
    private:
      int m_var;
      int m_var2;

};

int main(void)
{
    const Person p;   //������
    //p.set(11); //error!
    const_cast<Person &>(p).set(11); //ok  ֻ�Ե�ǰ��Ч
    cout <<"const_cast: "<< p.get() <<endl;

    //p.set(12); //error! ͬ���ǲ��Ե�
    return 0;
}



