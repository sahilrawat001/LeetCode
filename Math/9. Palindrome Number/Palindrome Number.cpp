//Solution 1
class Solution {
public:
	bool isPalindrome(int x) {
		if (x<0)   //所有的负数都不是回文数
			return false;
		int a = x;
		long b = 0;
		while (a != 0){
			b = b * 10 + a % 10;
			a /= 10;
		}

		if (b == x)
			return true;
		else
			return false;
	}
};

//Solution 2
class Solution {
public:
	bool isPalindrome(int x){
		//特殊情况
		if (x < 0 || (x % 10 == 0 && x != 0)){
			return 0
		}
		long a = 0;
		int b = x;
		while (a < b){
			a = a * 10 + b % 10;
			b /= 10;
		}
		return b = = a || b == a / 10;
	}
};