class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int freq[2001] = {0};

        for(int num : arr) {
            freq[num + 1000]++;
        }

    bool used[1001] = {0};

        for(int i = 0; i < 2001; i++) {
            if (freq[i] > 0) {
                if (used[freq[i]])
                return false;
                used[freq[i]] = true;
            }
        }
        return true;
    }
};

 