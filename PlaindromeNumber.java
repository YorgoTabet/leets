class PalindromeNumber {
    public boolean isPalindrome(int x) {
        Integer newX = x;
        char[] stringX = newX.toString().toCharArray();
        
        int l = 0;
        int h = stringX.length - 1;
        
        while(l<=h){
            if(stringX[l] != stringX[h]){
                return false;
            }
            l++;
            h--;
        }
        
        return true;
         
    }
}