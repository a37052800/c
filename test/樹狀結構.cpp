#include <cstdio>
#include <deque>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
#define MAX 100001
using namespace std;
deque<int> F[MAX];
int v[MAX];
void dfs(int x, int d) {
	for (int i = 0; i<F[x].size(); i++) {//走訪每一個小孩與父母
		if (v[F[x][i]] == 0) {
			v[F[x][i]] = d + 1;
			dfs(F[x][i], d + 1);
		}
	}
}

int main() {
	int a, b, node, n, max;
	while (scanf("%d", &n) != EOF) {
		for (int i = 0; i<n; i++) {
			F[i].clear();
		}
		for (int i = 1; i<n; i++) {//建立無向圖
			scanf("%d %d", &a, &b);
			F[a].push_back(b);
			F[b].push_back(a);
		}
		memset(v, 0, sizeof(v));
		v[0] = 1;
		dfs(0, 1);  //找出最遠的另一個端點
		max = -1;
		for (int i = 0; i < n; i++) {
			if (v[i] > max) {
				max = v[i];
				node = i;
			}
		}
		memset(v, 0, sizeof(v));
		v[node] = 1;
		dfs(node, 1);  //從最遠的端點，找尋最長路徑的長度，就是答案
		for (int i = 0; i < n; i++) {
			if (v[i] > max) {
				max = v[i];
			}
		}
		printf("%d\n", max-1);
	}
}