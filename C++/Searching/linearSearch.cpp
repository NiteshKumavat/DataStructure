#include<iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int> nums, int size, int target){

    for(int i=0; i<size; i++){
        if(target == nums[i]) return i;
    }
    return -1;
}

int main(){
    int size, target;
    cout<< "Enter the size of the array : ";
    cin>>size;
    vector<int> nums(size);
    for(int i=0; i<size; i++){
        cout<<"Enter the value for element "<< i+1 <<" : ";
        cin>>nums[i];
    }
    cout<<"Enter the target value : ";
    cin>>target;

    int index = linearSearch(nums, size, target);
    if(index == -1){
        cout<< "The target value is not in the array/vector";
    }else{
        cout<<"The value "<<target<<" is in the "<<index+1 <<" position";
    }
    return 0;
    
}