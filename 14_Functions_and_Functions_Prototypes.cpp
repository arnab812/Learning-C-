// Functions : A function is a group of statements (instructions) that performs a specific task. 
/*

#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}

***** In the above function 'a' and 'b' are Formal parameters.  

int main(){
    int num1, num2;
    cout<<"Enter the first number : "<<endl;
    cin>>num1;
    cout<<"Enter the second number : "<<endl;
    cin>>num2;
    cout<<"The sum of the two numbers is : "<<sum(num1,num2); // Return value function key. 
    return 0;
}

***** In the above function 'num1' and 'num2' are Actual parameters. 
*/

// Function Prototyping : Actual parameters and Formal parameters : 

#include<iostream>
using namespace std;

// Syntax : 
// int sum(int a, int b); => Acceptable. 
int sum(int, int); // => ***** Acceptable. 
// int sum(int a, b); => Not acceptable. 

void nothing();

int main(){
    int num1, num2; // Actual parameters. 
    cout<<"Enter the first number : "<<endl;
    cin>>num1;
    cout<<"Enter the second number : "<<endl;
    cin>>num2;
    cout<<"The sum of the two numbers is : "<<sum(num1,num2)<<endl; // Return value function key. 
    nothing();
    return 0;
}

void nothing(){
    cout<<"Programming in C++";
}

int sum(int a, int b){ // Formal parameters. 
    int c = a + b; 
    return c;
}

// Note : Formal parameters 'a' and 'b' will take values from Actual parameters 'num1' and 'num2' and then perform the task.

