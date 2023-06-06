#include<iostream>
#include<string.h>

using namespace std;

class Distance{
	public:
	int feet,inch;
};

int main()
{
	Distance d1,d2,sum;
	
	cout<<"Enter First Distance in feet : ";
	cin>>d1.feet;
	
	cout<<"Enter Second Distance in feet : ";
	cin>>d2.feet;
	
	cout<<"Enter First Distance in inch : ";
	cin>>d1.inch;
	
	cout<<"Enter Second Distance in inch : ";
	cin>>d2.inch;
	
	
	sum.feet=d1.feet+d2.feet;
	sum.inch=d1.inch+d2.inch;
	
	while(sum.inch>=12)
	{
		sum.feet++;
		sum.inch=sum.inch-12;
		
	}
	cout<<"Total Distance : "<<sum.feet<<endl;
	cout<<"Total Distance in Inch "<<sum.inch<<endl;
	
	
	
}
