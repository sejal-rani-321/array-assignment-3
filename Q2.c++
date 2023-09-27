/* find the factorial of largest number */

#include<iostream>
#include<climits>
using namespace std;

int factorial(int l){
    int fact = 1;
    for (int  i = 1; i <= l; i++){
    fact = fact * i;
    }
    cout  << "factorial of largest number: " << fact << endl; 
}


int main(){
    
    int arr[] = { 1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int largest_number = INT_MIN; 
    for (int i = 0; i < n; i++){
        largest_number = max(largest_number,arr[i]);
    }
    cout << "largest number: " << largest_number << endl;

    factorial(largest_number);
}