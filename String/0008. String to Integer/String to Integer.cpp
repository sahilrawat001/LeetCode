class Solution {
public:
	int myAtoi(string str) {

		int p = 0;
		while (str[p] == ' '){
			p++;
		}

		int sign = 1;//判断正负
		if (str[p] == '+'){
			p++;
		}
		else if (str[p] == '-'){
			sign = -1;
			p++;
		}

		long resInt = 0;
		for (int i = p; i<str.size(); i++){
			if (str[i]< '0' || str[i]> '9'){
				break;
			}
			int temp = str[i] - '0';//转化为数字
			resInt = 10 * resInt + temp;
			if (sign == 1){
				if (resInt >= INT_MAX){
					return INT_MAX;
				}
			}
			else{
				if (resInt - 1 >= INT_MAX){
					return INT_MIN;
				}
			}
		}
		resInt = sign*resInt;
		return resInt;
	}

};