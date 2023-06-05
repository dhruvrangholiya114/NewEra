#include<iostream>
#include<string.h>
using namespace std;

class House{
	public:
	int h_no;
	char h_n[100];
	char h_add[100];
	int h_r;
	int h_rs;
	
};

int main()
{
	House h;
	h.h_no=7;
	strcpy(h.h_n,"DHRUV");
	strcpy(h.h_add,"SURAT");
	h.h_r=3;
	h.h_rs=20;
	
	
	cout<<"House Number is "<<h.h_no<<endl;
	cout<<"House Name is "<<h.h_n<<endl;
	cout<<"House Address is "<<h.h_add<<endl;
	cout<<"House Room = "<<h.h_r<<endl;
	cout<<"House Room Size = "<<h.h_rs<<endl; 	
}

