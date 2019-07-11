/*
Fernando Corral
Wallbreakers
Cohort 3
Sub Domain Visits
*/
class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        map<string, int> set;
        vector<string> solution;
        for(auto domain: cpdomains){
            int num = 0;
            while(domain[num] != ' '){
                num++;
            }
            int size = stoi(domain.substr(0, num));
            num++;
            set[domain.substr(num, domain.size())]  += size;
            for(int x = num; x < domain.size(); x++ ){
                if(domain[x] == '.'){
                    num = x+1;
                    set[domain.substr(num, domain.size())]  += size;
                }
            }  
        }
        for(auto [key, value]: set){
            solution.push_back(to_string(value)+" "+key);
        }
        return solution;
    }
};
