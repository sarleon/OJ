class Solution {
public:
int lengthOfLongestSubstring(string s) {
    if(s.size()==0){
        return 0;
    }
    if(s.size()==1){
        return 1;
    }
    int maxLength=1;
    int currentLength=0;
    bool flag=true;
    int existLength=0;
    for(int i=0;i<s.length();i++){

        for (int j = 1; j <=currentLength ; ++j) {
            if(s[i]==s[i-j]){
                existLength=j;
                flag=false;
            }
        }
        currentLength++;

        if(flag){
            if(maxLength<currentLength) {
                maxLength = currentLength;
            }
        } else{
            currentLength=existLength;
            flag=true;
        }
    }

    return maxLength;

}

};