/* Check if an array is  a subset of another */

#include<iostream>
using namespace std;

bool isSubset(int arr1[],int m, int arr2[],int n){

    for (int i = 0; i < n; i++){ 
        for (int j = 0; j < m; j++){
        if(arr2[i] == arr1[j]) break;
        else if(j == m) return 0;
        return 1;
        } 
    }
    
}

int main(){
    int arr1[] = {1,2,3,4,5,6,7};
    int m = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {2,3,4,1};
    int n = sizeof(arr2)/sizeof(arr2[0]);
    
    cout << endl << isSubset(arr1, m, arr2, n);

}