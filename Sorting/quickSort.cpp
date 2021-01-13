#include<iostream>
#include<vector>

using namespace std;
void swap(vector<int> & nums,int x,int y){
	int temp=nums[x];
	nums[x]=nums[y];
	nums[y]=temp;
}

int partition(vector<int> &nums,int low,int high){
	int pivot=nums[high];
	int lesserEleIndex=low-1;
	
	for(int i=low;i<=high;i++){
		if(nums[i]<pivot){
			lesserEleIndex++;
			swap(nums,lesserEleIndex,i);
		}
	}
	
	swap(nums,lesserEleIndex+1,high);
	return lesserEleIndex+1;
}

void quickSort(vector<int> & nums, int low,int high){
	if(low>high) return;
	
	int pi = partition(nums,low,high);
	
	quickSort(nums,low,pi-1);        
	quickSort(nums,pi+1,high);
}

vector<int> sortArray(vector<int>& nums) {
	int n=nums.size();
	quickSort(nums,0,n-1);
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