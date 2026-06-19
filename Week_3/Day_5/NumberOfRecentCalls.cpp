class RecentCounter {
public:
    queue<int>q;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        q.push(t);
        while(!q.empty() && q.front()<t-3000)
        q.pop();
        return q.size();
    }
};

/*
Time complexity : O(1) [Amortized]
Space complexity : O(1) [the queue will store the number of pings that can be made in 3000ms ~ constant]
*/

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */