class Solution {
public:
    int romanToInt(string s) {
        int num = 0;
        char prev = 'r'; // give a trash value to inzializate it
        for (int i = s.size()-1; i >= 0; i--) {
            
            //sums
            if (s[i] == 'V') num += 5;
            else if (s[i] == 'L') num += 50;  
            else if (s[i] == 'D') num += 500;
            else if (s[i] == 'M') num += 1000;
            
            //treatments
            else if (s[i] == 'I') {
                if (prev == 'V' or prev == 'X') num -= 1;
                else num += 1;
            }
            
            else if (s[i] == 'X') {
                if (prev == 'L' or prev == 'C') num -= 10;
                else num += 10;
            }

            else if (s[i] == 'C') {
                if (prev == 'D' or prev == 'M') num -= 100;
                else num += 100;
            }
            
            //actualize the value
            prev = s[i];
        }
        return num;
    }
};