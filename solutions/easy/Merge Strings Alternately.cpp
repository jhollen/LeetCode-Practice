// Title: Merge Strings Alternately
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/merge-strings-alternately/
    
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        string merged = "";
        int n1 = word1.length();
        int n2 = word2.length();
        int i = 0;

        while(i < n1 || i < n2) {
            if(i < n1) {
                merged += word1[i];
            }
            if(i < n2) {
                merged += word2[i];
            }
            i++;
        }
        return merged;
    }
};
        


     
