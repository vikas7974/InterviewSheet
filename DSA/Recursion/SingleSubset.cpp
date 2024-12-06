// finding the single solution
#include<iostream>
#include<vector>
using namespace std;

bool findone(vector<int>&sample,vector<int>&ds,int target,int sum,int index){
    //base case
    if(index==sample.size()){
        if(sum==target) {
            for(int i:ds) cout<<i<<" ";
            return true;
        }
        else return false;
    }
    
    ds.push_back(sample[index]);
    if(findone(sample,ds,target,sum+sample[index],index+1)==true)return true;
    ds.pop_back();
    if(findone(sample,ds,target,sum,index+1)==true) return true;
    
    return false;
}

int main(){
    vector<int>sample={1,2,3,4};
    int target = 11111;
    vector<int>ds;
    if(!findone(sample,ds,target,0,0)){
        cout<<"No such solution FOUND!";
    }
    return 0;
}