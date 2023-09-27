/* find the first non- repeating element in the array */

#include<iostream>
using namespace std;

int nonRepeatingElement(int arr[], int n){
    int ans = 0; 
    for (int i = 0; i < n; i++){
        ans = ans ^ arr[i];
    }
     cout << endl << ans;
}
 

int main(){
    
    int arr[] = {1,2,2,3,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    // cout << endl << "first non-repeating element: " << 
    nonRepeatingElement(arr,n);
}