#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main() {
	freeopen("SQUARE.INP", "r", stdin);
	freeopen("SQUARE.OUT", "w", stdout);
	int n;
	cin >> n;
	vector<pair<int, int>> vec;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		vec.push_back({ a,b });
	}
	int x_max = INT_MIN, x_min = INT_MAX, y_max = INT_MIN, y_min = INT_MAX;
	for (int i = 0; i < n; i++) {
		x_max = max(x_max, vec[i].first);
		y_max = max(y_max, vec[i].second);
		x_min = min(x_min, vec[i].first);
		y_min = min(y_min, vec[i].second);
	}
	int canh = max(x_max - x_min, y_max - y_min);
	int result = canh * canh;
	cout << result;
	return 0;
}