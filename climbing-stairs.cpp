int climbStairs(int n) { 
    double f[n + 1];
    int i;
 
    f[0] = 1;
    f[1] = 2;
 
    for(i = 2; i <= n; i++){
        f[i] = f[i - 1] + f[i - 2];
    }
        
    return f[n-1];
    }