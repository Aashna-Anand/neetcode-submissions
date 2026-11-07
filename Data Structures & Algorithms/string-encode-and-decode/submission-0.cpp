
class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";

        for (string s : strs) {
            encoded += to_string(s.size()) + "#" + s;
        }

        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;

        while (i < s.size()) {
            int j = i;

            // Find the delimiter
            while (s[j] != '#') {
                j++;
            }

            // Get the length of the original string
            int len = stoi(s.substr(i, j - i));

            // Extract the original string
            string str = s.substr(j + 1, len);
            ans.push_back(str);

            // Move to the next encoded string
            i = j + 1 + len;
        }

        return ans;
    }
};
