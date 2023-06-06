#include <iostream>
using namespace std;
class Time 
{
	public:
    int hrs,min,sec;
};
int main() 
{
    Time t1,t;

    cout << "Enter time in seconds: ";
    cin >>t.sec;
    
    
    t1.hrs = t.sec/3600;
    t1.min = (t.sec%3600)/60;
    t1.sec = (t.sec%3600)%60;
    
    cout<<"Time = "<<t1.hrs<<":"<<t1.min<<":"<<t1.sec;
	return 0;
}
