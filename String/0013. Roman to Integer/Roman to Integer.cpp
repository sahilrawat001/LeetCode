class Solution {
public:
	int romanToInt(string s) {
		map<char, int> table = { { 'I', 1 }, { 'V', 5 }, { 'X', 10 }, { 'L', 50 }, { 'C', 100 }, { 'D', 500 }, { 'M', 1000 } };
		int resVal = 0;

		for (int i = 0; i < s.length(); i++){
			if (i + 1 < s.length() && table[s.at(i)] < table[s.at(i + 1)]){
				resVal += table[s.at(i + 1)] - table[s.at(i)];
				i++;
				continue;
			}
			resVal += table[s.at(i)];
		}
		return resVal;
	}
};