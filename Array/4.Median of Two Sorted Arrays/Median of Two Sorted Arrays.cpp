class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

		int n1 = nums1.size();
		int n2 = nums2.size();
		int total = n1 + n2;

		if (total % 2){ //如果数组加起来是奇数 
			return findKth(nums1, 0, nums2, 0, total / 2 + 1);
		}
		else{ //如果是偶数
			return (findKth(nums1, 0, nums2, 0, total / 2) + findKth(nums1, 0, nums2, 0, total / 2 + 1)) / 2.0;
		}

	}

	//分割的思想寻找第k个数
	double findKth(vector<int>& nums1, int l, vector<int>& nums2, int r, int k){

		int n1 = nums1.size();
		int n2 = nums2.size();

		if (n1 - l > n2 - r)
			return findKth(nums2, r, nums1, l, k); //始终保证第一个数组是个数是最少的

		if (n1 - l == 0)
			return nums2[r + k - 1];
		if (k == 1)
			return min(nums1[l], nums2[r]);

		int p1 = min(k / 2, n1); //保证在第一个数组内做二分查找。
		int p2 = k - p1;

		if (nums1[l + p1 - 1] < nums2[r + p2 - 1]){ //左边
			return findKth(nums1, l + p1, nums2, r, k - p1);
		}
		else if (nums1[l + p1 - 1] > nums2[r + p2 - 1]){ //左边数组1的个数太大
			return findKth(nums1, l, nums2, r + p2, k - p2);
		}
		else{
			return nums1[l + p1 - 1];
		}
	}
};