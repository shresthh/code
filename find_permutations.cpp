vector<int> Solution::findPerm(const string A, int B) {
//     // n : 5

// s = DIDD

// Return: [5, 1, 4, 3, 2]

    int a = 1,  b = B;
    vector<int> arr(B);
    for (int i = 0; i<A.size(); i++){
        arr[i] = A[i] == 'D' ? b-- : a++;
        
    }
    arr[B-1] = b;
    return arr;

}
