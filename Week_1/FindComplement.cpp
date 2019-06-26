/*
Fernando Corral
Wall Breakers
Cohort 3
Find complement
*/
class Solution {
public:
    int findComplement(int num) {
        int counter = 0;
        int n = num;
        while(n != 0){
            n = n>>1;
            counter++;
        }
        for(int x = 0; x < counter; x++){
            n = n<<1;
            n++;
        }
        return (num ^ n);
    }
};
