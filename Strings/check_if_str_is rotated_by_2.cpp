// Given two strings a and b. The task is to find if the string 'b' can be obtained by rotating (in any direction) string 'a' by exactly 2 places.
// e.g===>
//   Input:
// a = amazon
// b = azonam
// Output: 
// 1
// Explanation: 
// amazon can be rotated anti-clockwise by two places, which will make it as azonam.

class Solution
{
    public:
   
    void clockwise(string &s){
        char c=s[s.size()-1];
        int index=s.size()-2;
        while(index>=0){
            s[index+1]=s[index];
            index--;
        }
        s[0]=c;
    }
    
    void anticlockwise(string &s){
        char c = s[0];
        int index=1;
        while(index<s.size()){
             s[index-1]=s[index];
             index++;
        }
        s[s.size()-1]=c;
    }
    
    bool isRotated(string str1, string str2)
    {
        if(str1.size()!=str2.size()){
            return 0;
        }
        string cw, acw;
        cw=str1;
        clockwise(cw);
        clockwise(cw);
        if(cw==str2){
            return 1;
        }
        acw=str1;
        anticlockwise(acw);
        anticlockwise(acw);
        if(acw==str2){
            return 1;
        }
        return 0;
    }

};
