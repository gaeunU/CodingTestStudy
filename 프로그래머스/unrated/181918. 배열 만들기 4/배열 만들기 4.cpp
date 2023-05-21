#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> stk;
    for(int i=0; i<arr.size();){
        if(stk.empty()){
            stk.emplace_back(arr[i]);
            i++;
        }
        else if(stk[stk.size()-1] <arr[i]){
            stk.emplace_back(arr[i]);
            i++;
        }else if(stk[stk.size()-1] >= arr[i]){
            stk.pop_back();
        }
    }
    return stk;
}