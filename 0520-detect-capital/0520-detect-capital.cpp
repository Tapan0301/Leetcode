class Solution {
public:
    bool detectCapitalUse(string word) {
        int up=0,ups=0,down=0;
        if (isupper(word[0])) {
                ups++;
                up++;
            }else{
                down++;
            }
        for (int i = 1; i < word.length(); i++) {
            
            if(isupper(word[i])){
                up++;
            }
            else {
                down++;
            }
        }
        if(ups==1 && down==word.size()-1) return true;
        else if(down==word.size() || up==word.size())   return true;
        else
        return false;
    }
};