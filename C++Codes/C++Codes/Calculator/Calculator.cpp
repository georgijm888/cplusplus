//Error#1 - unkown key

#include <conio.h>
#include <iostream>

using namespace std;
int main()
{
	system("color 8f");
	while(true)
	{
	
    int a, b, sol1, sol2, sol3, sol4, sol4_1;
    
    cout << "a=";
    cin>> a;
    
      cout << "b=";
    cin>> b;
    
 
    cout<<endl;
    
    sol1 = a+b;
    cout << a <<"+"<< b << "=" << sol1<<endl; 
	   
    sol2 = a-b;
    cout << a <<"-"<< b << "=" << sol2<<endl; 
    
    sol3 = a*b;
    cout << a <<"*"<< b << "=" << sol3<<endl;
	 
    sol4 = a/b;
    cout << a <<"/"<< b << "=" << sol4; 
    
    if(a%b==0)
    {
    	cout<<endl;
	}
    else
    {
    	sol4_1 = a%b;
    cout << "(ost="<< sol4_1<<")"<<endl; 
	}
	cout<<endl;
	
     cout << "Press A to exit"<<endl; 
     cout << "Press D to continue"<<endl; 
    
    cout<<endl;
    char Key;
Key = _getch();

    if(Key == 'a')
    {
    	//break;
    	exit(0);
	}

	if(Key == 'd')
    {
    	cout<<endl;
    	continue;
	}
else
{
	cout<<"Error#1"<<endl;
	system("pause");
	exit(0);

	
}

}
}
