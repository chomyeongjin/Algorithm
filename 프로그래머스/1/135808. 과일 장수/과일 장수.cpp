#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int solution(int k, int m, vector<int> score) {
    int answer = 0;
    vector<int> scoredmp;
    
    sort(score.rbegin(), score.rend());
    
    for(int i = m - 1; i < score.size(); i += m) {
        scoredmp.push_back(score[i] * m);
    }
    
    for(int i = 0; i < scoredmp.size(); i++) {
        answer += scoredmp[i];
    }
    
    return answer;
}