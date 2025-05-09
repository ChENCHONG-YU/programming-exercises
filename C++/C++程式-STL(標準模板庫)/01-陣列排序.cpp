#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector<int> nums = {3,1,4,1,5};
	sort(nums.begin(),nums.end());
	for(int n:nums){
		cout << n << " ";
	}
	return 0;
}
