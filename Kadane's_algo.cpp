#include<iostream>
using namespace std;
int main(){
    int i,j,n,current_sum=0;
    cout<<"Enter no. of elements\n";
    cin>>n;
    cout<<"Enter elements\n";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max_so_far=arr[0];
    for(i=0;i<n;i++){
        current_sum=current_sum+arr[i];
        if(current_sum<0){
            current_sum=0;
        }
        if(max_so_far<current_sum){
            max_so_far=current_sum;
        }
    }
    cout<<"Maximum Sum in a sub-array: "<<max_so_far<<endl;
    return 0;
}