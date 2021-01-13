#include<iostream>
#include<vector>

using namespace std;

void swap(vector<int> & nums,int x,int y){
	int temp=nums[x];
	nums[x]=nums[y];
	nums[y]=temp;
}
int getMax(vector<int> & nums,int start,int last){
	
	int m=start;
	for(int i=start+1;i<=last;i++){
		if(nums[m]<nums[i]) m=i;
	}
	return m;
}

vector<int> sortArray(vector<int>& nums) {
	int n=nums.size();
	for(int i=n-1;i>=0;i--){
		int maxEleIndex=getMax(nums,0,i);
		swap(nums,maxEleIndex,i);
	}
	return nums;
}
	
	
	
int main(){
	int n;
	cin>>n;
	vector<int> nums;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		nums.push_back(x);
	}
	
	for(int i=0;i<n;i++){
		cout<<nums[i]<<" ";
	}
	return 0;
}