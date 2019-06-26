/*
Fernando Corral
Wall Breakers
cohort 3
Binary Gap
*/
class Solution {
public:
    int binaryGap(int N) {
        int max = 0;
        int counter = 0;
        //Revemove leading zeros and start counter at first 1
        while(int(N&0x00000001) == 0){
            N = N >> 1;
        }
        while(N != 0){
            //if least significant digit is 1 compare to max and reset
            if(N&0x00000001 == 1){
                if(counter > max){
                    max = counter;
                }
                counter = 1;
            }
            //if least significant digit is 0 increase counter
            else{
                counter++;
            }
            //Shift right N
            N = N >> 1;
        }
        return max;
    }
};
