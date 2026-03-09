class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        
        // Check if str1 + str2 == str2 + str1
        if(str1 + str2 != str2 + str1) {
            return "";
        }
        
        int n1 = str1.length();
        int n2 = str2.length();

        int gcd = std::gcd(n1, n2);
        return str1.substr(0,gcd);
    }
};
