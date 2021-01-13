#include<iostream>
#include<vector>

using namespace std;

void swap(vector<int> & nums,int x,int y){
	int temp=nums[x];
	nums[x]=nums[y];
	nums[y]=temp;
}

vector<int> sortArray(vector<int>& nums) {
	int n=nums.size();
	for(int i=1;i<n;i++){
		int j;
		for(j=i;j>0;j--){
			if(nums[j]>nums[j-1]){
				break;
			}else{
				swap(nums,j,j-1);
			}
		}
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