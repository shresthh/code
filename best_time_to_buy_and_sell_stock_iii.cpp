int Solution::maxProfit(const vector<int> &A) {
    int buy1 = INT_MIN, buy2 = INT_MIN;
    int sell1 = 0, sell2 = 0;
    for(auto a : A){
        sell2 = max(sell2, a + buy2);
        buy2 = max(buy2, sell1- a);
        sell1 = max(sell1, a + buy1);
        buy1  = max(buy1, -a);
        
    }
    return sell2;
}
