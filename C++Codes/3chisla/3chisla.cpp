#include <fstream>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <conio.h>

using namespace std;


int main()
{
	
system("color 8f");

int a, b, c, Key;
	while(true)
	{
	
    
cout<< "chislo=";
Key = _getch();
Key = Key-48;
a = Key;
cout<<Key;
Key = _getch();
Key = Key-48;
b = Key;
cout<<Key;
 Key = _getch();
 Key = Key-48;
c = Key;
cout<<Key<<endl;

cout<<endl;
  
  
  if (a==c)
{
 cout<<"chisla ne mogut povtoriatsa";
}

     if (a==b)
{
 cout<<"chisla ne mogut povtoriatsa";
}

  if (b==c)
{
 cout<<"chisla ne mogut povtoriatsa";
}
else
cout<<"Rezultat:"<<endl;
  /////
 if (a>b&&b>c)
 {
     if(b>c)
     {
     cout<<a<<b<<c;      
     }
     else
     {
 cout<<a<<c<<b; 
}
}

 if (a>c&&c>b)
 {
     if(b>c)
     {
     cout<<a<<b<<c;      
     }
     else
     {
 cout<<a<<c<<b; 
}
}

  if (b>c&&c>a)
 {
     if(c>a)
     {
     cout<<b<<c<<a;      
     }
     else
     {
 cout<<b<<a<<c; 
}
}


  if (b>a&&a>c)
 {
     if(c>a)
     {
     cout<<b<<c<<a;      
     }
     else
     {
 cout<<b<<a<<c; 
}
}

  if (c>a&&a>b)
 {
     if(a>b)
     {
     cout<<c<<a<<b;      
     }
     else
     {
 cout<<c<<b<<a; 
}
}
  if (c>b&&b>a)
 {
     if(a>b)
     {
     cout<<c<<a<<b;      
     }
     else
     {
 cout<<c<<b<<a; 
}
} 

cout<<endl;

//////

 if (a>b&&b>c)
 {
     if (b>c)
     {
     cout<<c<<b<<a;      
     }
     else
     {
 cout<<b<<c<<a; 
}
}
else
 if (a>c&&c>b)
 {
     if (b>c)
     {
     cout<<c<<a<<b;      
     }
     else
     {
 cout<<b<<c<<a; 
}
}
///1111
else

  if (b>c&&c>a)
 {
     if (c>a)
     {
     cout<<a<<c<<b;      
     }
     else
     {
 cout<<c<<a<<b; 
}
}
else

  if (b>a&&a>c)
 {
     if (c>a)
     {
     cout<<a<<c<<b;      
     }
     else
     {
 cout<<c<<a<<b; 
}
}
else
///2222
  if (c>a&&a>b)
 {
 
     if (a>b)
     {
     cout<<b<<a<<c;      
     }
     else
     {
 cout<<a<<b<<c; 
}
}
else
  if (c>b&&b>a)
 {
     if (a>b)
     {
     cout<<b<<a<<c;      
     }
     else
     {
 cout<<a<<b<<c; 
}
}
    cout<<endl;
       cout<<endl;

     cout << "Press A to exit"<<endl; 
     cout << "Press D to continue"<<endl; 
    
    cout<<endl;
        cout<<endl;

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
	cout<<"Error(WrongKey)"<<endl;
	system("pause");
	exit(0);


}
}
}
