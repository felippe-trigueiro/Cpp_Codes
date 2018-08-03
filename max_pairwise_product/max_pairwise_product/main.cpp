#include <iostream>
#include <vector>
#include <chrono>

using std::vector;
using std::cin;
using std::cout;

long long MaxPairwiseProduct(const vector<int>&);
long long MaxPairwiseProduct_Naive(const vector<int>&);

int main() {
	int n;
	cin >> n;
	vector<int> numbers(n);
	for (int i = 0; i < n; ++i) {
		cin >> numbers[i];
	}
	
	//Measuring the time of the fast algorithm
	auto start = std::chrono::high_resolution_clock::now();
	long long result_fast = MaxPairwiseProduct(numbers);
	auto finish = std::chrono::high_resolution_clock::now();

	std::chrono::duration<double> elapsed_fast = finish - start;

	//Measuring the time of the naive algorithm
	auto start_naive = std::chrono::high_resolution_clock::now();
	long long result_naive = MaxPairwiseProduct_Naive(numbers);
	auto finish_naive = std::chrono::high_resolution_clock::now();

	std::chrono::duration<double> elapsed_naive = finish_naive - start_naive;

	cout << "Fast result: " << result_fast << "\n";
	cout << "Time of the fast algorithm " << elapsed_fast.count() << "\n\n";

	cout << "Naive result: " << result_naive << "\n";
	cout << "Time of the naive algorithm " << elapsed_naive.count() << "\n\n";
	system("pause");
	return 0;
}
