#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

int main()
{
char characters[1000];
int size;
    
    cout << "Enter the number of characters you want to input: ";
    cin >> size;
    
    cout << "\nInput " << size << " characters: \n";
    for (int i = 0; i < size; i++)
    {
        cin >> characters[i];
    }

   
    cout <<"\n" << "In reverse: \n"<< endl;
    for (int j = size ; j >= 0; j--)
    {
        cout << characters[j];
      
    }
_getch();
return 0;
}



 
