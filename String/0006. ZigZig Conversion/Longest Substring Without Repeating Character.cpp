class solution{
public:
	string convert(string s, int numRows){
		if (s.size() == 1) return s;
		string resString;
		int stringLen = s.size();
		int cycleLen = 2 * numRows - 2;

		for (int i = 0; i<numRows; i++){
			for (int j = 0; j + i<stringLen; j += cycleLen){
				resString += s[i + j];
				if (i != 0 && i != numRows - 1 && j + cycleLen - i < stringLen){
					resString += s[j + cycleLen - i];
				}
			}
			return resString;
		}
	};