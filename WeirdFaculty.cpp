#include <vector>
#include <iostream>
using namespace std;
class Solution{
    public: int solution(vector<int> v){
        int sumOfV=0;
        for(int i=0; i<v.size();i++){
            if(v[i]==0) sumOfV -= 1;
            else sumOfV+=v[i];
        }
        if(sumOfV<0) return 0;
        int i=0;
        int myScore=0, myFrinds = sumOfV;
        while(myScore<=myFrinds && i<v.size()){
            myScore+=(v[i]==1?1:-1);
            myFrinds-=(v[i]==1?1:-1);
            i++;
        }
        return i;
    }
};

int main(){
    Solution sol;
    int num;
    cin >> num;
    vector<int> exam(num);
    for(int i=0;i<num;i++){
        cin >> exam[i];
    }
    int solution = sol.solution(exam);
    cout << "min num question = " << solution << "\n";
    return 0;
}