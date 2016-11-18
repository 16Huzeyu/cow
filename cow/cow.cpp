// cow.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdafx.h"

#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <iostream>
#include <algorithm>
using namespace std;
class Solution {
public:
	int numIslands(vector<vector<char>>& grid) {
		int width = grid.size();
		if (width <= 0)
		{
			return 0;
		}
		int lenth = grid[0].size();
		if (lenth <= 0)
		{
			return 0;
		}

		int ans = 0;

		for (size_t k = 0; k < width; k++)
		{
			int i = k;
			for (size_t g = 0; g< lenth; g++)
			{
				int j = g;
				if (grid[i][j] == '1')
				{
					ans += 1;
					dfs(i, j, grid);
				}

			}

		}
		return ans;

	}
};
int main()
{
    return 0;
}

