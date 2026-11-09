class Solution {
public:
    string encode(vector<string>& strs) {
        string encoded = "";

        for (string str : strs) {
            int len = str.size();
            encoded += to_string(len) + "#" + str;
        }

        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;

        while (i < s.size()) {
            int j = i;

            while (s[j] != '#') {
                j++;
            }

            int len = stoi(s.substr(i, j - i));
            string str = s.substr(j + 1, len);

            ans.push_back(str);
            i = j + 1 + len;
        }

        return ans;
    }
};