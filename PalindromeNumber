class Solution {
public:
    bool isPalindrome(int x) {
        long finalc = x;
        long realans = 0;
        if(finalc > 0){ 
        while(finalc != 0){
            if(finalc%10 == 0){
                realans = realans*10;
                finalc = finalc/10;
            }
            if(finalc%10 != 0){
                realans++;
                finalc--;
            }
        }
        }
        cout<<realans<<endl;
        cout<<x<<endl;
        bool answer = 0;
        if(realans == x){
            answer = 1;
        }
        return answer;
    }
};
