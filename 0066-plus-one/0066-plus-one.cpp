class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        for(int i=n-1;i>=0;i--){
            if (digits[i]<9){
                digits[i]++;
                return digits;
            
        }
         digits[i]=0; 

        }
        
    
    digits.insert(digits.begin(),1);
    return digits;
}
};
// last digit se check karo
// <9 ho to +1 karke return
// 9 ho to 0 karo
// sab 9 ho to start me 1 insert karo