/*
Fernando Corral
Wall Breakers
cohort 3
Hamming Distance
*/
class Solution {
public:
    int hammingDistance(int x, int y) {
        int h = x^y;
        int counter = 0;
        while(h != 0){
            if((h&0xFFFFFFFE)  != h){
                counter++;
            }
            h = h>>1;
        }
        return counter;
    }
};
