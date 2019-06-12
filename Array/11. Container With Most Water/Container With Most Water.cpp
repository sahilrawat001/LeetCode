//Solution 1
class Solution {
public:
	int maxArea(vector<int>$ height){
		int max = 0;
		for (int i = 0; i< height.size(); i++){
			for (int j = 0; j< height.size(); j++){
				int wide = height[i] > height[j] ? height[j] : height[i];
				int len = j - i;
				int temMax = len * wide;
				if (tempMax > max)
					max = tempMax;
			}
		}
		return max;
	}
};

//Solution 2
class Solution {
public:
	int maxArea(vector<int>& height){

		int pBegin = 0; //开始指针
		int pEnd = height.size() - 1; //末尾指针
		int max = 0;

		while (pBegin < pEnd){
			int minHeight = height[pBegin] < height[pEnd] ? height[pBegin] : height[pEnd];
			int tempMax = minHeight * (pEnd - pBegin);

			if (tempMax > max)
				max = tempMax;
			if (height[pBegin] < height[pEnd]){
				pBegin++;
			}
			else{

				pEnd--;
			}
		}
		return max;

	}
};