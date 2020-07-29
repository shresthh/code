vector<string> Solution::fizzBuzz(int A) {
    vector<string > B;
    for (int i = 1; i<= A; i++){
        if(i%3==0 && i%5 == 0)
            B.push_back("FizzBuzz");
        else if(i%3 == 0)
            B.push_back("Fizz");
        else if(i%5 == 0)
            B.push_back("Buzz");
        else
            B.push_back(to_string(i));
    }
    return B;
}
