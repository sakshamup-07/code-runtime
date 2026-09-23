class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin() , asteroids.end());
        int n = asteroids.size();
        long long cm = mass;
        for(auto it : asteroids)
        {
            if(cm<it) return false;
            else cm +=it;
        }
        return true;
    }
};