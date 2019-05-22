#include <iostream>
#include <conio.h>

using namespace std;

int main () 

{

   int provinceA[7]; 
   int provinceB[7]; 
   int provinceC[7]; 
   int a,b,c;
   
   cout<<"Enter the Temperature of Province A for this week: "  <<endl;
       
  for ( int x = 1; x <=7; x++ ) 
	{
    	cout<<"Province A, Day " << x << ": ";
        cin >> provinceA[x];
   }
 cout<<"Enter the Temperature of Province A for this week: "  <<endl;
   for ( int x = 1; x <=7; x++ ) 
   {
   	cout<<"Province B, Day " << x << ": ";
	cin >> provinceB[x];
   }
   
    cout<<"Enter the Temperature of Province A for this week: "  <<endl;
   for ( int x = 1; x <=7; x++ ) 
   {
	cout<<"Province C, Day " << x << ": ";
	cin >> provinceC[x];
   }
   
   cout << endl << "Temperatures for each provinces: " << endl;
 
   for ( int y = 1; y <= 7; y++ )
    {
      a = provinceA[y];
      cout << "Province A, Day "<< y <<" = "<< a << endl;
   	}

   for ( int y = 1; y <= 7; y++ ) 
   {
      b = provinceB[y];
   	  cout << "Province B, Day "<< y <<" = "<< b << endl;
   }

   for ( int y = 1; y <= 7; y++ ) 
   {
    c = provinceC[y];
    cout << "Province C, Day "<< y <<" = "<< c << endl;
   }
 
_getch();

 return 0;

}
