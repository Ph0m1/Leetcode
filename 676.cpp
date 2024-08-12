#include "leetcode.hpp"

class MagicDictionary {
private:
    vector<string> dict;
public:
    MagicDictionary() {

    }
    
    void buildDict(vector<string> dictionary) {
        this->dict = dictionary;
    }
    
    bool search(string searchWord) {
        for(auto &str :dict){
            if(str.size() != searchWord.size()){
                continue;
            }
            int num = 0;
            for(int i = 0; i < str.size(); ++i){
                if(str[i] != searchWord[i]){
                    ++num;
                }
            }
            if(num == 1){
                return true;
            }
        }
        return false;
    }
};

/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary* obj = new MagicDictionary();
 * obj->buildDict(dictionary);
 * bool param_2 = obj->search(searchWord);
 */