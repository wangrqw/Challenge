#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution{
    public: int minDistance(int w, int h, int n){
        vector<vector<int>> layouts = getOfficeLayouts(w, h, n);
        return 0;
    }
    private: vector<vector<int>> getOfficeLayouts(int w, int h, int n){
        vector<vector<int>> layouts;
        int offices[n] = {0}; // initialize all location as 0;
        cout << "office locations: " << arr2str(offices, n);
        return layouts;
    }
    private: string arr2str(int* arr, int N){
        string s = "";
        for(int i=0; i<N-1; i++) s+=to_string(arr[i])+" ";
        return s+to_string(arr[N-1])+"\n";
    }
};
int main(){
    int w, h, n;
    // cin>> w >> h >> n;
    // cout << w << " " << h << " " << n<<"\n";
    Solution sol;
    w=3; h=3; n=2;
    cout << sol.minDistance(w, h, n)<<"\n";
    return 0;
}