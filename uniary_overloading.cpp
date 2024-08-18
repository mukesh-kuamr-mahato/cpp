#include<iostream>
using namespace std;


class mark
{
    int math;
    
    public:
        void input()
        {
            cin>>math;
        }

        void display()

        {
            
            cout<<math;
        }
        
        void operator ++()

        {
            math = math +1;
        }
        
};


       //void mark::operator ++()
        

 


int main()
{
    mark m;
    m.input();
    ++m;
    m.display();
}   