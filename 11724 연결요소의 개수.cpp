#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<int> vec[1001];
bool visited[1001];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	int size, edge;
	cin >> size >> edge;
	int x, y = 0;
	for (int i = 0; i < edge; i++) {
		cin >> x >> y;
		vec[x].push_back(y);
		vec[y].push_back(x);
	}

	queue<int> q;

	int cur;
	int count = 0;
	
	for (int j = 1; j <= size; j++) {
		q.push(j);
		if (visited[q.front()] == true){
			q.pop();
			continue;
			
		}
		
		while (!q.empty()) {
			cur = q.front();
			q.pop();
			

			visited[cur] = true;
			for (int i = 0; i < vec[cur].size(); i++) {
				if (visited[vec[cur][i]] == false) {
					q.push(vec[cur][i]);
					visited[vec[cur][i]] = true;
				}
			}
			
		}
		count++;
	}
	
	cout << count;

}