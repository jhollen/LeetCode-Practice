// Title: Kids With the Greatest Number of Candies
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int greatestNumberCandies = 0;
        
        // find the greatest number of candies using max_element
        int max_candy = *max_element(candies.begin(), candies.end());

        // for each element, add max_candy and compare result to maxcandy
        for(int candy : candies ) {
            result.push_back(candy + extraCandies >= max_candy);
        }
    }
        vector<bool> result;
        return result;
};
