#include "PmergeMe.hpp"
#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <ctime>

Pmerge::Pmerge(std::vector<int> numbers)
{
	for (size_t i = 0; i < numbers.size(); i++)
	{
		int n = numbers[i];

		if (std::find(vec.begin(), vec.end(), n) != vec.end()) continue;

		vec.push_back(n);
		que.push_back(n);
	}
};

Pmerge::~Pmerge()
{

};

//=============================================
// VECTOR
//=============================================

void merge_vec(std::vector<int>& vec, int left, int mid, int right) {
	int i = left, j = mid + 1, k = 0;
	std::vector<int> temp(right - left + 1);

	while (i <= mid && j <= right) {
		if (vec[i] < vec[j]) {
			temp[k++] = vec[i++];
		} else {
			temp[k++] = vec[j++];
		}
	}

	while (i <= mid) {
		temp[k++] = vec[i++];
	}

	while (j <= right) {
		temp[k++] = vec[j++];
	}

	for (int x = 0; x < k; ++x) {
		vec[left + x] = temp[x];
	}
}

void insert_vec(std::vector<int>& vec, int left, int right) {
	for (int i = left + 1; i <= right; ++i) {
		int key = vec[i];
		int j = i - 1;
		while (j >= left && vec[j] > key) {
			vec[j + 1] = vec[j];
			j--;
		}
		vec[j + 1] = key;
	}
}

void merge_insert_vec(std::vector<int>& vec, int left, int right, int threshold) {
	if (left < right) {
		if (right - left < threshold) {
			insert_vec(vec, left, right);
		} else {
			int mid = (left + right) / 2;
			merge_insert_vec(vec, left, mid, threshold);
			merge_insert_vec(vec, mid + 1, right, threshold);
			merge_vec(vec, left, mid, right);
		}
	}
}

float sort_vec(std::vector<int>& vec)
{
	clock_t start;
	clock_t end;

	start = std::clock();

	merge_insert_vec(vec, 0, vec.size() -1, 5);

	end = std::clock();

	return static_cast<double>(end - start) / CLOCKS_PER_SEC * 10000000;
}


//=============================================
// DEQUE
//=============================================
void merge_que(std::deque<int>& que, int left, int mid, int right) {
	int i = left, j = mid + 1, k = 0;
	std::vector<int> temp(right - left + 1);

	while (i <= mid && j <= right) {
		if (que[i] < que[j]) {
			temp[k++] = que[i++];
		} else {
			temp[k++] = que[j++];
		}
	}

	while (i <= mid) {
		temp[k++] = que[i++];
	}

	while (j <= right) {
		temp[k++] = que[j++];
	}

	for (int x = 0; x < k; ++x) {
		que[left + x] = temp[x];
	}
}

void insert_que(std::deque<int>& que, int left, int right) {
	for (int i = left + 1; i <= right; ++i) {
		int key = que[i];
		int j = i - 1;
		while (j >= left && que[j] > key) {
			que[j + 1] = que[j];
			j--;
		}
		que[j + 1] = key;
	}
}

void merge_insert_que(std::deque<int>& que, int left, int right, int threshold) {
	if (left < right) {
		if (right - left < threshold) {
			insert_que(que, left, right);
		} else {
			int mid = (left + right) / 2;
			merge_insert_que(que, left, mid, threshold);
			merge_insert_que(que, mid + 1, right, threshold);
			merge_que(que, left, mid, right);
		}
	}
}

float sort_que(std::deque<int>& que)
{
	clock_t start;
	clock_t end;

	start = std::clock();

	merge_insert_que(que, 0, que.size() -1, 5);

	end = std::clock();

	return static_cast<double>(end - start) / CLOCKS_PER_SEC * 10000000;
}

void Pmerge::sort()
{
	std::cout << "Before: ";
	for (size_t i = 0; i < vec.size() && i < 5; i++)
	{
		std::cout << " " << vec[i];
	}
	if (vec.size() >= 5) std::cout << " [...]";
	std::cout << std::endl;

	double time_vec = sort_vec(vec);
	double time_que = sort_que(que);


	std::cout << "After:  ";
	for (size_t i = 0; i < vec.size() && i < 5; i++)
	{
		std::cout << " " << vec[i];
	}
	if (que.size() >= 5) std::cout << " [...]";
	std::cout << std::endl;

	std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << time_vec << " us" << std::endl;
	std::cout << "Time to process a range of " << que.size() << " elements with std::deque  : " << time_que << " us" << std::endl;

}

