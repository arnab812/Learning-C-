/* What is sorting? 
=> Ordering of the elements in an array in a particular order. 

=>  Types of sorting :-

    1. Selection sort : Find the minimum element in the unsorted array and swap it with the element at the beginning. 
     => Sort the array  -> 12, 45, 23, 51, 19, 8
                        -> 8, 45, 23, 51, 19, 12
                        -> 8, 12, 23, 51, 19, 45
                        -> 8, 12, 19, 51, 23, 45
                        -> 8, 12, 19, 23, 51, 45
       => Sorted array  -> 8, 12, 19, 23, 45, 51

Implementation [Algorithm] :- 
1. There will be two "for" loops. 
   i. loop of i ( from 0th element to (n-1)th element)
  ii. loop of j (from 1st element to nth element)
2. Trying to find the minimum element in the unsorted array and swap it with the element at the beginning. 

*/ 

// Program code :- 

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements : ";
    cin >> n;
    int array[n];

    // Taking the user input in the array - 
    for(int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    // Implementing the algorithm - 12, 45, 23, 51, 19, 8
    for(int i = 0; i < n-1; i++) // 'i' will traverse from 12 to 19
    {
        for(int j = i+1; j < n; j++) // 'j' will traverse from 45 to 8 
        {
            if(array[j] < array[i])
            {
                int temp = array[j]; // storing the value of index 'j' into 'temp' 
                array[j] = array[i]; // storing the value of index 'i' into 'j'
                array[i] = temp; // storing the value of index 'j' through 'temp' into 'i' || swapping gets done. // sorted. 
            }
        }
    }

    // printing the array -
    cout<<"The sorted array elements are : "<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<array[i]<<endl;
    }

    return 0;
}