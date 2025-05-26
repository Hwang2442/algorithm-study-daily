#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) 
{
    vector<int> answer;
    unordered_map<string, int> genreTotalPlay;
    unordered_map<string, vector<pair<int, int>>> genreSongs;
    
    for (int i = 0; i < plays.size(); i++)
    {
        string genre = genres[i];
        int play = plays[i];

        genreTotalPlay[genre] += play;
        genreSongs[genre].emplace_back(i, play);
    }

    vector<string> genreOrder;
    for (auto& pair : genreTotalPlay)
    {
        genreOrder.push_back(pair.first);
    }

    sort(genreOrder.begin(), genreOrder.end(), [&](string a, string b) {
        return genreTotalPlay[a] > genreTotalPlay[b];
        });

    for (int i = 0; i < genreOrder.size(); i++)
    {
        auto& songs = genreSongs[genreOrder[i]];
        sort(songs.begin(), songs.end(), [](pair<int, int>& a, pair<int, int>& b) {
            if (a.second == b.second)
                return a.first < b.first;
            else
                return a.second > b.second;
            });

        for (int j = 0; j < songs.size() && j < 2; j++)
        {
            answer.push_back(songs[j].first);
        }
    }

    return answer;
}
