// leetcode : 1108
// Given a valid (IPv4) IP address, return a defanged version of that IP address.
// A defanged IP address replaces every period "." with "[.]".
// Example 1:
// Input: address = "1.1.1.1"
// Output: "1[.]1[.]1[.]1"


string defangIPaddr(string address) {
        string ans;
        int index=0;
        while(index<address.size()){
            if(address[index]=='.'){
                ans=ans+"[.]";
            }else{
                ans=ans+address[index];
            }
            index++;
        }
        return ans;
    }
