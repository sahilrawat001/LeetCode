//Solution 1
class Solution {
public:
	int lengthOfLongestSubstring(string s) {

		unordered_map<char, int> map;  //建立字符与该字符在s中最后出现的位置之间的映射
		int left = -1; // 左边界，指向窗口的前一个位置
		int result = 0; //长度
		for (int i = 0; i < s.size(); i++){
			//count:判断当前字符s[i]是否出现过
			//map[s[i]]>left：如果当前遍历的字符出现过，并且在窗口内。
			//map并不是窗口，而是记录字符字符与最后出现位置的下标之间的映射，left用来维护窗口
			if (map.count(s[i]) && map[s[i]] > left)
				left = map[s[i]];

			map[s[i]] = i;
			result = max(result, i - left);
		}
		return result;
	}
};

//Solution 2
class Solution {
public:
	int lengthOfLongestSubstring(string s) {

		vector<int> map(256, -1);
		int left = -1;
		int result = 0;
		for (int i = 0; i < s.size(); i++){

			if (map[s[i]] > left)
				left = map[s[i]];

			map[s[i]] = i;
			result = max(result, i - left);
		}
		return result;
	}
};