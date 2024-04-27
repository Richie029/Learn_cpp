// Given a string s which consists of lowercase or uppercase letters, return the length of the longest palindrome that can be built with those letters.

// Letters are case sensitive, for example, "Aa" is not considered a palindrome here.

class Solution {
public:
    int longestPalindrome(string s) {
         vector<int>lower(26,0);
         vector<int>upper(26,0);
    for(int i=0;i<s.size();i++){
        if(s[i]>='a'){
            lower[s[i]-'a']++;
        }else{
            upper[s[i]-'A']++;
        }
        
    }
    int ans=0;
    int odd=0;
    for(int i=0;i<lower.size();i++){
        if(lower[i]%2==0){
            ans+=lower[i];
        }else{
            ans+=lower[i]-1;
            odd=1;
        }
        if(upper[i]%2==0){
            ans+=upper[i];
        }else{
            ans+=upper[i]-1;
            odd=1;
        }

    }
    return ans+odd;
    
   
    }
};
