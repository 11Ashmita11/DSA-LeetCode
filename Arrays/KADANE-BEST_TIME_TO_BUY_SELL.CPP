lass Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minpr=prices[0];
        int maxPr=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<minpr){
                minpr=prices[i];
            }
            else{
                maxPr=max(maxPr,prices[i]-minpr);
            }
        }
        return maxPr;
    }
};