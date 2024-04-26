//sorting of a string (lower case only)
string sort(string s){
    vector<int>count(26,0);
    for(int i=0;i<s.size();i++){
        int index=s[i]-'a';
        count[index]++;
    }
    string ans;
    for(int i=0;i<count.size();i++){
        char c='a'+i;
        while(count[i]){
            ans+=c;
            count[i]--;
        }
    }
    return ans;
}
