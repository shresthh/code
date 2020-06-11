int Solution::climbStairs(int A) {
    int ways[A+1];
    ways[0]=1;
    ways[1]=1;
    for(int i=2;i<=A;i++){
       ways[i] = ways[i-1] + ways[i-2];
   }
   return ways[A];
   
}
