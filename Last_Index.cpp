// Input : str = "geeks", x = 'e'
// Output : 2
// Last index of 'e' in "geeks" is: 2 

// Input : str = "Hello world!", x = 'o'
// Output : 7
// Last index of 'o' is: 7 

#include <iostream> 
using namespace std; 
  
// Returns last index of x if it is present. 
// Else returns -1. 
int findLastIndex(string& str, char x) 
{ 
    int index = -1; 
    for (int i = 0; i < str.length(); i++) 
        if (str[i] == x) 
            index = i; 
    return index; 
} 
  
// Driver code 
int main() 
{ 
    // String in which char is to be found 
    string str = "geeksforgeeks"; 
  
    // char whose index is to be found 
    char x = 'e'; 
    int index = findLastIndex(str, x); 
    if (index == -1) 
        cout << "Character not found"; 
    else
        cout << "Last index is " << index; 
    return 0; 
} 
