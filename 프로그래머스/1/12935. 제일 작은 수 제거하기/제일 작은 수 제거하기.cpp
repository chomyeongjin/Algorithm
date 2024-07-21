#include <string>
#include <vector>
//#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int tmp = arr[0];
    int index = 0;
    
    for(int i = 1; i < arr.size(); i++) {
        if(tmp > arr[i]) {
            tmp = arr[i];
            index = i;
        }
    }
    
    arr.erase(arr.begin() + index);
    if(arr.empty()) {
        answer.push_back(-1);
    } else {
        answer = arr;
    }
    
    
    
    return answer;
}