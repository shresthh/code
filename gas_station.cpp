int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) {
    int sumgas = 0;
    int sumcost = 0;
    int start = 0;
    int tank  = 0;
    for (int i = 0; i< A.size(); i++){
        sumgas += A[i];
        sumcost +=B[i];
        tank  += A[i] - B[i];
        if(tank < 0){
            start = i+1 % A.size();
            tank = 0;
        }
        
    }
    return (sumgas < sumcost) ? -1 : (start % A.size()); 
}
