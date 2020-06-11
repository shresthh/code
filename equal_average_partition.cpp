vector<vector<vector<bool>>> dp;
int total_size;
vector<int> res;
vector<int> original;
bool possible(int index, int sum , int count){
    if(count==0) return (sum==0);
    if(index >= total_size) return false;
    if(dp[index][sum][count]==false)return false;
    //condition
    if(original[index]<=sum){
        res.push_back(original[index]);
        if(possible(index+1, sum-original[index],count-1))return true;
        res.pop_back();
    }
    if(possible(index+1,sum,count))return true;
    
    return dp[index][sum][count]=false;
}
vector<vector<int> > Solution::avgset(vector<int> &A) {
    //original=A;
    sort(A.begin(),A.end());
    original.clear();
    original=A;
    dp.clear();
    res.clear();
    total_size = A.size();
    long long int  total_sum = 0;
    for(int i=0;i<total_size;i++){
        total_sum += A[i];
    }
    dp.resize(original.size(), vector<vector<bool>>(total_sum+1,vector<bool>(total_size,true)));

    for(int i=1;i<total_size;i++){
        if((total_sum*i) % total_size!=0) continue;
        int sum_of_set1 = (total_sum*i)/total_size;
        if(possible(0,sum_of_set1,i)){
            int ptr1=0,ptr2=0;
            vector<int> res1=res;
            vector<int> res2;
            while(ptr2 < res.size() || ptr1< A.size()){
                if(ptr2<res.size() && res[ptr2]==A[ptr1]){
                    ptr1++;
                    ptr2++;
                    continue;
                }
                res2.push_back(A[ptr1]);
                ptr1++;
            }
            vector<vector<int>> ans;
            ans.push_back(res1);
            ans.push_back(res2);
            return ans;
        }
        
    }
    vector<vector<int>> ans;
    return ans;
}

