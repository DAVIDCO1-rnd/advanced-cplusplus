#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	vector<int> temp(4, 7); //temp is the vector {7,7,7,7}

	vector<vector<int>> grid(3, vector<int>(4, 7));
	grid[1].push_back(8); //grid[1] is the vector {7,7,7,7,8}

	for (int row = 0; row < grid.size(); row++) {
		for (int col = 0; col < grid[row].size(); col++) {
			cout << grid[row][col] << flush;
		}
		cout << endl;
	}

	return 0;
}