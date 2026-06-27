#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int>& nums, int size){
    int temp;
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(nums[j] > nums[j+1]){
                swap(nums[j] , nums[j+1]);
            }
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

    bubbleSort(nums, size);

    cout<<"Sorted vector with bubble sort :"<<endl;
    for(int i=0; i<size; i++){
        cout<<nums[i] <<" ";
    }
    return 0;


}