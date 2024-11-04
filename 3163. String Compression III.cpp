class Solution {
public:
    string compressedString(string word) {
         int len = 1;
    std::stringstream ss;
    
    for (int j = 1; j < word.size(); j++) {
        if (word[j] == word[j - 1] && len < 9) {
            len++;
        } else {
            ss << len << word[j - 1];
            len = 1;
        }
    }
    
    ss << len << word[word.size() - 1];
    
    return ss.str();
    }
};