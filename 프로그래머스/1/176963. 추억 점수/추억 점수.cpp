#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    
    for(int i = 0; i < photo.size(); i++) {
        answer.push_back(0);
        for(int j = 0; j < photo[i].size(); j++) {
            if(find(name.begin(), name.end(), photo[i][j]) == name.end()) {
                answer[i] += 0;
            } else {
                answer[i] += yearning[find(name.begin(), name.end(), photo[i][j]) - name.begin()];
            }
        }
    }
    return answer;
}

// 인물의 그리움 점수 합산