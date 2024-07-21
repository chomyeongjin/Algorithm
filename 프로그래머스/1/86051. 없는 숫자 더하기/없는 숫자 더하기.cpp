#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> numbers) {
    int answer = -1;
    vector<int> num;
    
    for(int i = 0; i < 10; i++) {
        num.push_back(i);
    }
    
    for(int i = 0; i < numbers.size(); i++) {
        if(find(num.begin(), num.end(), numbers[i]) != num.end()) {
            num[find(num.begin(), num.end(), numbers[i]) - num.begin()] = 0;
        }
    }
    
    int sum = 0;
    for(int i = 0; i < 10; i++) {
        if(num[i] == 0) {
            continue;
        } else {
            sum += num[i];
        }
    }
    
    answer = sum;
       
    return answer;
}