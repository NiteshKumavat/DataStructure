#include<iostream>
#include<vector>
using namespace std;
//Sorted array/vector is compulsory for binary search
int binarySearch(vector<int> nums, int size, int target){
    int start = 0,end = size - 1, mid;
    while(start <= end){
        mid = (start + end) / 2;
        if(nums[mid] > target) end = mid - 1;
        else if(nums[mid] < target) start = mid + 1;
        else return mid;
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

    int index = binarySearch(nums, size, target);

    if(index == -1){
        cout<< "The target value is not in the array/vector";
    }else{
        cout<<"The value "<<target<<" is in the "<<index+1 <<" position";
    }
    return 0;
    
}