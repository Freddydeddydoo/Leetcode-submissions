class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.size() - 1;

        if (s.empty()) return true;
        while(l < r){
            //not a letter, do this!
            while(l < r && !std::isalnum(static_cast<unsigned char>(s[l]))){
                l++;
            }
            while(r > l && !std::isalnum(static_cast<unsigned char>(s[r]))){
                r--;
            }

            if(std::tolower(s[l]) != std::tolower(s[r])){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};