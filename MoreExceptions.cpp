// Objective
// Yesterday's challenge taught you to manage exceptional situations by using try and catch blocks. In today's challenge, you're going to practice throwing and propagating an exception. Check out the Tutorial tab for learning materials and an instructional video!

// Task
// Write a Calculator class with a single method: int power(int,int). The power method takes two integers,  and , as parameters and returns the integer result of . If either  or  is negative, then the method must throw an exception with the message: n and p should be non-negative.

// Note: Do not use an access modifier (e.g.: public) in the declaration for your Calculator class.

// Input Format

// Input from stdin is handled for you by the locked stub code in your editor. The first line contains an integer, , the number of test cases. Each of the  subsequent lines describes a test case in  space-separated integers denoting  and , respectively.

// Constraints

// No Test Case will result in overflow for correctly written code.
// Output Format

// Output to stdout is handled for you by the locked stub code in your editor. There are  lines of output, where each line contains the result of  as calculated by your Calculator class' power method.

// Sample Input

// 4
// 3 5
// 2 4
// -1 -2
// -1 3
// Sample Output

// 243
// 16
// n and p should be non-negative
// n and p should be non-negative
// Explanation


// :  and  are positive, so power returns the result of , which is .
// :  and  are positive, so power returns the result of =, which is .
// : Both inputs ( and ) are negative, so power throws an exception and  is printed.
// : One of the inputs () is negative, so power throws an exception and  is printed.


#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

//Write your code here
class Calculator
{   public:
    int power(int n,int p)
    {   
        if(n<0 || p<0)
        {
            throw runtime_error("n and p should be non-negative");
        }
        return pow(n,p);
    }
};

int main()
{
    Calculator myCalculator=Calculator();
    int T,n,p;
    cin>>T;
    while(T-->0){
      if(scanf("%d %d",&n,&p)==2){
         try{
               int ans=myCalculator.power(n,p);
               cout<<ans<<endl; 
         }
         catch(exception& e){
             cout<<e.what()<<endl;
         }
      }
    }
    
}