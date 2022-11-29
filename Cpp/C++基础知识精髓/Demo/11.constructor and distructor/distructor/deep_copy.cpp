#include <iostream>
#include <string.h>
using namespace std;

class Mystring{
    public:
      Mystring(char *str, int counter){
         m_str = new char[counter+1];
         memcpy(m_str, str, counter);
         m_counter = counter;
         m_str[counter+1] = '\0';
      }
      //��ʾ���忽�����캯�� �������(Ҳ���ǽ����ڴ�Ŀ���)
       Mystring(const Mystring &str){
        // m_str =  str.m_str; // error!
         cout <<"deep copy constructor" << endl;
         this->m_str = new char[str.m_counter+1];
         memcpy(m_str, str.m_str, str.m_counter);
         this->m_counter = str.m_counter;		
         m_str[m_counter+1] = '\0';
      }
     ~Mystring(){
         cout <<"distructor" << endl;
         delete []m_str;
      }
      void disp(){
         cout <<hex<<m_str<< endl;
      }

    private:
     char *m_str;
     int m_counter;
};

int main(void)
{
    Mystring str("briupemsd1109", 13);
    str.disp();
    Mystring str1 = str;  //��һ�����еĶ���ȥ����һ���µĶ���
    str1.disp();
    return 0;
}





