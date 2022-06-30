#include<iostream>
using namespace std;
int main()
{
/*
    2. Bubble sort : Repeatedly swap two adjacent elements if they are in the wrong order ( Left > Right = wrong order).
     => Sort the array
     1st iteration :- 
                        -> 12, 45, 23, 51, 19, 8
                        -> 12, 45, 23, 51, 19, 8
                        -> 12, 23, 45, 51, 19, 8
                        -> 12, 23, 45, 51, 19, 8
                        -> 12, 23, 45, 19, 51, 8
                        -> 12, 23, 45, 19, 8, 51
        Q. Is this a sorted array ? 
        => No, the largest element has just get placed at the end, rest of the array is still unsorted.

        2nd iteration :-
                        -> 12, 23, 45, 19, 8, 51
                        -> 12, 23, 45, 19, 8, 51
                        -> 12, 23, 45, 19, 8, 51
                        -> 12, 23, 19, 45, 8, 51
                        -> 12, 23, 19, 8, 45, 51
        Q. Is this a sorted array ? 
        => No, the two largest elements have just get placed at the end, rest of the array is still unsorted.
       
        3rd iteration :-
                        -> 12, 23, 19, 8, 45, 51
                        -> 12, 23, 19, 8, 45, 51
                        -> 12, 19, 23, 8, 45, 51  
                        -> 12, 19, 8, 23, 45, 51 
        => The three largest elements have just get placed at the end, rest of the array is still unsorted.              

        4th iteration :-
                        -> 12, 19, 8, 23, 45, 51
                        -> 12, 19, 8, 23, 45, 51 
                        -> 12, 8, 19, 23, 45, 51 

        5th iteration :-
                        -> 12, 8, 19, 23, 45, 51
                        -> 8, 12, 19, 23, 45, 51

       => Sorted array  -> 8, 12, 19, 23, 45, 51
*/   

   // ***** Things to keep in mind :-
   // How many elements do we have and how many iterations do we need to sort the whole array.
   // The logic is -> if we have 'n' elements, we'll require (n-1) iterations to sort the array in Bubble sort.

   // Program code :-

    int n;
    cout<<"Enter the number of elements : "<<endl;
    cin >> n;
    int array[n];
    cout<<"Enter the elements : "<<endl;
    // Taking the user input in the array - 
    for(int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    // for iterations -> 
    int counter = 1; // no. of iterations. [ 1 to (n-1) ]
    /*
     If we have 'n' elements, we'll require (n-1) iterations to sort the array.
     The 1st iteration will sort the largest element at nth position.
     The 2nd iteration will sort the 2nd largest element at (n-1)th position.
     .
     .
     .
     .
     The (n-1)th iteration will sort the array. 
    */ 

    while(counter < n-1)
    {
        for(int i = 0; i < n - counter; i++) // 1st iteration to (n-i)th iteration.
        // 1st iteration will check for the (n-1)th position and ith iteration will check for (n-i)th iteration.
        {
            if(array[i] > array[i+1]) // suppose, i = 10. i+1 = 5
            {
                int temp = array[i];
                array[i] = array[i+1]; 
                array[i+1] = temp; // 10, 5 getting sorted as 5, 10
            }
        }
        counter++; // to move at the next iteration.
    }
    cout<<"Bubble sorted array elements are : "<<endl;
    for(int i = 0; i < n; i++)
    {
        cout << array[i] << endl;
    }

    return 0;
}