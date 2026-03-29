/*
 A small frog wants to get to the other side of a river. 
 The frog is initially located on one bank of the river (position 0) and wants to get to the opposite bank (position X+1). 
 Leaves fall from a tree onto the surface of the river.
 
 You are given a zero-indexed array A consisting of N integers representing the falling leaves. 
 A[K] represents the position where one leaf falls at time K, measured in seconds.
 
 The goal is to find the earliest time when the frog can jump to the other side of the river. 
 The frog can cross only when leaves appear at every position across the river from 1 to X 
 (that is, we want to find the earliest moment when all the positions from 1 to X are covered by leaves). 
 You may assume that the speed of the current in the river is negligibly small, 
 i.e. the leaves do not change their positions once they fall in the river.
 
 For example, you are given integer X = 5 and array A such that:
 
 A[0] = 1
 A[1] = 3
 A[2] = 1
 A[3] = 4
 A[4] = 2
 A[5] = 3
 A[6] = 5
 A[7] = 4
 In second 6, a leaf falls into position 5. This is the earliest time when leaves appear in every position across the river.
 
 Write a function:
 
 int solution(int X, vector<int> &A);
 that, given a non-empty zero-indexed array A consisting of N integers and integer X, 
 returns the earliest time when the frog can jump to the other side of the river.
 
 If the frog is never able to jump to the other side of the river, the function should return −1.
 
 For example, given X = 5 and array A such that:
 
 A[0] = 1
 A[1] = 3
 A[2] = 1
 A[3] = 4
 A[4] = 2
 A[5] = 3
 A[6] = 5
 A[7] = 4
 the function should return 6, as explained above.
 
 Assume that:
 
 N and X are integers within the range [1..100,000];
 each element of array A is an integer within the range [1..X].
 Complexity:
 
 expected worst-case time complexity is O(N);
 expected worst-case space complexity is O(X), beyond input storage (not counting the storage required for input arguments).
 Elements of input arrays can be modified.
 Copyright 2009–2016 by Codility Limited. All Rights Reserved. Unauthorized copying, publication or disclosure prohibited.
 */

#include <iostream>
#include <vector>
#include <unordered_set>

bool full(const std::vector<int>& leaves);

int solution(int X, const std::vector<int>& A);

int solutionHashTable(int X, const std::vector<int>& A);

int main()
{
	std::vector<int> time = {1, 3, 1, 4, 2, 5, 4, 4};
	std::cout << "Trivial solution: " << solution(5, time) << '\n';
	std::cout << "Hash solution: " << solutionHashTable(5, time) << '\n';

	return 0;
}

bool full(const std::vector<int>& leaves)
{
	for (const int element : leaves)
		if (element == 0)
			return false;
	return true;
}

int solutionHashTable(int X, const std::vector<int>& A)
{
	std::unordered_set<int> covered;
	covered.reserve(X);

	for (int idx = 0; idx < static_cast<int>(A.size()); idx++)
	{
		int position = A[idx];
		covered.insert(position);
		// add position if it is not already there (runs in O(1) time), else do nothing

		if (static_cast<int>(covered.size()) == X)
			return idx;
	}
	return -1;
}

int solution(const int X, const std::vector<int>& A)
{
	std::vector<int> position;
	for (int idx = 0; idx < X; idx++)
		position.push_back(0);

	for (int idx = 0; idx < A.size(); idx++)
	{
		int temp = A[idx];
		position[temp - 1] = 1;
		if (full(position))
			return idx;
	}
	return -1;
}
