#include <iostream>
#include <vector>

using namespace std;

class Solution{
    public: int waitingTime(int size, vector<int> tickets, int pos){
        int time=0;
        for(int i=0;i<pos;i++){
            if(tickets[i]<tickets[pos]) 
                time += tickets[i];
            else 
                time += tickets[pos];
        }
        for(int i=pos+1;i<size;i++){
            if(tickets[i]<tickets[pos]-1) 
                time += tickets[i];
            else 
                time += tickets[pos]-1;
        }
        return time;
    }
};

int main(){

return 0;
}
