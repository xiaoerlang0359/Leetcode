class Solution {
public:
    int strStr(string haystack, string needle) {
        int n, m;
		int i = 0; int j = 0;
		n = haystack.size(); m = needle.size();
		if (n < m) return -1;
		if (m == 0) return 0;
		while (i < n && j < m){
			if (haystack[i] == needle[j])
			{
				i++; j++;
			}
			else{
				i -= j - 1; j = 0;
			}
		}
		if ((i - j) > (n - m)) return -1;
		else return (i - j);
    }
};