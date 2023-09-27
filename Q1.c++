/* count the number of triplets whose sum is equal to the given value x;*/

#include<iostream>
using namespace std;

int triplets(int arr[], int n, int x){
    int count = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = i +1 ; j <= n; j++)
        {
            for (int k = j+1; k <= n; k++)
            {
                if(arr[i] + arr[j] + arr[k] == x)
                 count++;
                cout << "Triplets: " << i << " " << j << " " << k << endl << count;
            }
            
        }
        
    }
    


}

int main(){

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    // for (int i = 0; i < n; i++){
    //     cout << arr[i] << " ";
    // }

    triplets(arr,n,12);    
}