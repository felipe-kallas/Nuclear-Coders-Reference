// Floyd-Warshall's Algorithm
// Time Complexity: O(|V| ^ 3)

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 500;

int mat[MAXN][MAXN];

void floyd (int n) {
	for (int k = 0; k < n; ++k)
		for (int i = 0; i < n; ++i)
			for (int j = 0; j < n; ++j)
				mat[i][j] = min(mat[i][j], mat[i][k] + mat[k][j]);

	return;
}