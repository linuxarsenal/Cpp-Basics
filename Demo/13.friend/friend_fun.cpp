#include <iostream>
using namespace std;

class Boy{
    public:
      Boy(double mount){
        this->m_money = mount;
      }
     ~Boy(){}
     double getMoney(){
         return m_money;
     }
     double getMoney_back();

    //��void geti(Boy &)�����������Ԫ����
    friend void get(Boy &);
    //��Girl������ΪBoy����Ԫ��
    friend class Girl;
    private:
     double m_money;
};

class Girl{
   public: 
      Girl(double mon = 0):m_money(mon){}
      ~Girl(){}
      double getmoney(Boy &boy){
          cout <<"get boy's money: "<<boy.m_money << endl;
      }
   //��Boy��һ����Ա��������Ϊ�����һ����Ԫ
   friend double Boy::getMoney_back();
   private:
      double m_money;
      

};

double Boy::getMoney_back()
{
    Girl girl(10);
    cout <<"get back "<<girl.m_money<<"��" << endl;
    return girl.m_money;
}



void get(Boy &b)
{
    cout <<b.m_money << endl;   //���Է������˽�г�Ա
}



int main(void)
{
    Boy boy(100);
   // cout <<boy.getMoney()<< endl;
   // get(boy);
    Girl girl;
    girl.getmoney(boy);
    boy.getMoney_back(); 
    return 0;
}




