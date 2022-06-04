#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i, j, k, w;
    cin >> n;
    int graph[n][n];
    string temp;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> temp;
            if (temp != "INF") {
                graph[i][j] = stoi(temp);
            } else {
                graph[i][j] = 1e8;
            }
        }
    }
    for (k = 0; k < n; k++) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (graph[i][k] + graph[k][j] < graph[i][j]) {
                    graph[i][j] = graph[i][k] + graph[k][j];
                }
            }
        }
    }
    cout << "The shortest path matrix: " << endl;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if(graph[i][j] >= 1e8) cout << "INF";
            else cout << graph[i][j];
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}
