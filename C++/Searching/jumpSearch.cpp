#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int jumpSearch(vector<int>& nums, int target, int size){
    int step = sqrt(size), previous = 0;
    while(nums[min(step, size)-1] < target){
        previous = step;
        cout<<"previous : " << previous <<endl;
        step += sqrt(size);
        if(previous >= size) return -1;
    }

    while(nums[previous] < target){
        cout<<"previous in 2nd loop : " << previous <<endl;
        previous++;
        if(previous == min(step, size)) return -1;
    }
    if(nums[previous] == target) return previous;
    return -1;
}

int main(){
    int size, target;
    cout<<"Enter the size of the vector : ";
    cin>>size;
    vector<int> nums(size);
    for(int i=0; i<size; i++){
        cout<<"Enter the value for index "<<i<<" : ";
        cin>>nums[i];
    }
    cout<<"Enter the target value : ";
    cin>>target;

    int index = jumpSearch(nums, target, size);
    cout<<index;
    return 0;
}