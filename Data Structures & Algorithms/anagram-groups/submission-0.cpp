class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::vector<vector<string>> container;
        std::unordered_map<string, vector<string>> string_container;
        for(const auto& word : strs){
            string copy_word = word;
            sort(copy_word.begin(), copy_word.end());
            string_container[copy_word].push_back(word);
        }

        for(auto& value : string_container){
            container.push_back(value.second);
        }
        return container;
    }
};
