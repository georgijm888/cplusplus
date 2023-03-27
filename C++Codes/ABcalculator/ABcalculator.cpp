//Error#1 - unkown key

#include <conio.h>
#include <iostream>

using namespace std;
int main()
{
char Key;
	system("color 8f");
	while(true)
	{


    int a, b, sol1, sol2, sol3, sol4, sol4_1;
    
      cout << "Press A to to swap"<<endl;
        cout << "Press S to make A, B"<<endl;
          cout << "Press D to A B to TWO-DIGIT"<<endl;
           cout<<endl;
          		    
Key = _getch();
    if(Key == 'a')
    {
    cout << "a=";
    cin>> a;
    cout<<endl;
    sol1 = a/10;
    sol2 = a%10;
    sol3 = sol2*10+sol1;
    cout << a <<"="<< sol3 <<endl; 
    }
    
        if(Key == 's')
    {
    cout << "a=";
    cin>> a;
    cout<<endl;
    sol1 = a/10;
    sol2 = a%10;
    cout <<"a="<<sol1<<" b="<<sol2 <<endl; 
    }
    
        if(Key == 'd')
    {
    cout << "a=";
    cin>> a;
        cout << "b=";
    cin>> b;
    cout<<endl;

    cout << "ab="<<a <<b<<endl; 
    }

    
    
    cout<<endl;
    
         cout << "Press A to exit"<<endl; 
     cout << "Press D to continue"<<endl;
     
Key = _getch();
    if(Key == 'a')
    {
    	//break;
    	exit(0);
	}

	if(Key == 'd')
    {
    	cout<<endl;
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
