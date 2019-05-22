#include <iostream>
#include <conio.h>

using namespace std;

int main()


{
	
	int i, max,min, n=10;
    double Lowest, Highest, sum, average;
	int num[10];
	

    cout << "Input 10 numbers: \n";
   
   
 	for(i = 0;i < 10; i++)
		num[i] = 0.0;
	for(i = 0;i < 10; i++)
		cin >> num[i];
	
	min = 0;
		for (i = 1;i < 10; i++)
			if (num[min] > num[i])
			min = i;	
			
	max = 0;
		for (i = 1;i < 10; i++)
			if (num[max] < num[i])
			max = i;
	Highest = num[max];
		cout << "\nHighest Number: " << Highest << endl;		
	Lowest = num[min];
		cout << "\nLowest Number: " << Lowest << endl;
		
	sum = 0;
		for (i = 0;i < 10; i++)
		sum = sum + num[i];
		cout <<"\nSum of the integers : " << sum << endl;
		
	average = sum / 10;
		cout << "\nAverage of the integers: " << average << endl;	
		
			
    _getch();
	return 0;
    
}
