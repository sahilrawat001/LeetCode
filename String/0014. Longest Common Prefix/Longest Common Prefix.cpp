//Solution 1
class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		string s = "";
		if (strs.size() == 0)
			return "";
		for (int i = 0; i < strs[0].length(); i++)  //以第一个元素为基准
		{
			char c = strs[0].at(i);
			for (int j = 1; j < strs.size(); j++)
			{
				if (i >= strs[j].length() || strs[j].at(i) != c)
					return s;
			}
			s += c;
		}
		return s;
	}
};

//Solution 2
class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		if (strs.empty())
			return "";


		sort(strs.begin(), strs.end());

		int i = 0;
		int len = min(strs[0].size(), strs.back().size());
		while (i < len && strs[0][i] == strs.back()[i])
			i++;

		return strs[0].substr(0, i);
	}
};