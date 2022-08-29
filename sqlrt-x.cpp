
int mySqrt(int x) {
    long i = 0;
    int start, end;
    long mid;
    start = 0;
    end = x;
        if(x==1) return 1;
        if(x==0) return 0;

        while (start<=end) // x=8
        {
            mid = (start + end) / 2; // 4
        
            if (x >= (mid-1)*(mid-1) && x <= mid*mid ){
                if(mid*mid==x) return mid;
                else return mid-1;
            }

            else if (mid * mid > x)
            {
                end = mid-1;
            }

            else
            {
                start = mid+1;
            }
            
        }

    i++;

    return mid;
        
}