class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        int iAm = 0;
        int xAm = 0;
        int cAm = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'I'){
                sum += 1;
                iAm++;
                }
            else if(s[i] == 'V' && i != 0 && s[i-1] == 'I'){
                sum -= iAm*1;
                sum += 5 - iAm*1;
                }
            else if(s[i] == 'V'){
                sum += 5;
                }
            else if(s[i] == 'X' && i != 0 && s[i-1] == 'I'){
                sum -= iAm*1;
                sum += 10 - iAm*1;
                xAm++;
                }
            else if(s[i] == 'X'){
                sum += 10;
                xAm++;
                }
            else if(s[i] == 'L' && i != 0 && s[i-1] == 'X'){
                sum -= xAm*10;
                sum+= 50 - xAm*10;
                }
            else if(s[i] == 'L'){
                sum += 50;
                }
            else if(s[i] == 'C' && i != 0 && s[i-1] == 'X' ){
                sum -= xAm*10;
                sum+= 100 - xAm*10;
                cAm++;
                }
            else if(s[i] == 'C'){
                sum += 100;
                cAm++;
                }
            else if(s[i] == 'D' && i != 0 && s[i-1] == 'C'){
                sum -= cAm*100;
                sum+= 500 - cAm*100;
                }
            else if(s[i] == 'D'){
                sum += 500;
                }
            else if(s[i] == 'M' && i != 0 && s[i-1] == 'C'){
                sum -= cAm*100;
                sum += 1000 - cAm*100;
                }
            else if(s[i] == 'M'){
                sum += 1000;
                }
        }
        return sum;
    }
};
