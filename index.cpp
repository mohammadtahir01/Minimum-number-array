#include <iostream>
using namespace std;
int main(){
    int arr[]={12,21,30,41,51};
    int min=arr[0];
    
    for(int i=0; i<5; ++i){
        if(arr[i] < min){
            min=arr[i];
        }
       
    }
     cout<<min;
}