class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxheap;
        for(int i=0;i<stones.size();i++){
            maxheap.push(stones[i]);
        }
        int x,y;
        while(maxheap.size()>1){
            y=maxheap.top();
            maxheap.pop();
            x=maxheap.top();
            maxheap.pop();
            if(x!=y){
                maxheap.push(y-x);
            }
        }
        if(maxheap.size()==0) return 0;
        return maxheap.top();
    }
};