#include<iostream>
#include<conio.h>

using namespace std; 

class Time
{
    int hr, min, sec;

    public:
       void input()
       {
            cin>>hr;
            cin>>min;
            cin>>sec;
       }

       void disp()
       {
            cout<<hr;
            cout<<endl;
            cout<<min;
            cout<<endl;
            cout<<sec;
            cout<<endl;

       }

       void add(Time t)
       {
          Time temp;

          temp.sec= sec + t.sec;
          temp.min = min+t.min+ (temp.sec/60);
          temp.hr=hr+t.hr+(temp.min/60);

          temp.disp();
       }

      bool comp(Time &t)
      {
        if(
            t.hr>hr ||
            t.hr==hr && t.min>min ||
            t.hr==hr && t.min==min && t.min>min           
        )
        {
            return true;
        }
        else
           return false;

    }


};



int main()
{
    Time t1,t2;
    int i;
    cin>>i;
    cout<<i;
// 
    t1.input();
    t2.input();

    t1.add(t2);\

    if(t1.comp(t2))
    {
        cout<<"t1 is greater"<<endl; 
    }

    else
       cout<<"t2 is greater"<<endl;

    return 0;
}