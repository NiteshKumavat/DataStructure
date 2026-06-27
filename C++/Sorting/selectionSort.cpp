#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int>& nums, int size){
    for(int i=0; i<size-1; i++){
        for(int j=i+1; j<size; j++){
            if(nums[j] < nums[i]) swap(nums[j], nums[i]);
        }
    }
}

int main(){
    int size;
    cout<<"Enter the size : ";
    cin>>size;
    vector<int> nums;
    int newVal;
    for(int i=0; i<size; i++){
        cout<<"Enter the value for index "<<i <<" : ";
        cin>>newVal;
        nums.push_back(newVal);
    }
    for(int i=0; i<size; i++){
        cout<<nums[i] <<" ";
    }
    cout<<endl;

    selectionSort(nums, size);

    cout<<"Sorted vector with selection sort :"<<endl;
    for(int i=0; i<size; i++){
        cout<<nums[i] <<" ";
    }
    return 0;
}