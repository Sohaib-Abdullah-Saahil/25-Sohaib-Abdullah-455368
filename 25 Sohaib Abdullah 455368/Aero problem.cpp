#include <iostream>
using namespace std;
int main()
{
	int AR; //initializing variable for aspect ratio
	int WS=0;//initializing wingspan
	cout<<"Enter wing span: "<<endl;
	cin>>WS;
	
	int WA=0;//initializing wing area
	cout<<"Enter area of wing:"<<endl;
	cin>>WA;
	
	AR=(WS*WS)/WA;//formula of aspect ratio
	
	cout<<"The aspect ration of wing is:"<<AR;
	
	return 0;
	
	}
