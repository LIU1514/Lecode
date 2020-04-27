#include<iostream>
#include<vector>
using namespace std;
 
class Solution {
public:
	vector<int> twoSum(vector<int >& nums, int target) {
		int i, j ;
		for (i = 0; i < nums.size() - 1; i++)
		{
			for (j = i + 1; j < nums.size(); j++)
			{
				if (nums[i] + nums[j] == target)
				{
					return { i,j };
				}
			}
		}
		return { i,j };
	};
};

 

int main() {
	
	vector<int> num{ 2,7,11,15};
	int target{ 9 };
	int i=0;
	vector<int> sum;
	Solution Solution;
	sum=Solution.twoSum( num , target );
	cout << "i:" <<i <<endl;
    cout << "two Sum" << &Solution::twoSum << endl;
}

 

/*

int test(int i, int j) {
	return i + j;
}
int main() {

	int	a = 20;
	int b = 5;
	int  sum;
	sum = test(a, b);
	printf("%d\n", sum);
}
*/