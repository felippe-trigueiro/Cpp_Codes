//This project implements two algorithm of the maximum pairwise product problem. This problem consists of given a sequence
//of integers, return the maximum product of a pair contained in that sequence.

//The actual code implemented two algorithms - a naive and a faster. The functions MaxPairwiseProduct - faster 
//and MaxPairwiseProduct_Naive - naive do this job.

//The auxiliary function measureTimeAlgorithm, as the name saids, measure the time required to process the functions. 
//This function receives the sequence which the user desires and a code representing the algorithm - 0 for the faster 
//and 1 for the naive algoritm.

//The actual code generate a random number for testing 
#include <iostream>
#include <vector>
#include <chrono>
#include <random>

using std::vector;
using std::cin;
using std::cout;

long long MaxPairwiseProduct(const vector<int>&);
long long MaxPairwiseProduct_Naive(const vector<int>&);

long long measureTimeAlgorithm(const vector<int>&, int);

const int max = 50;

int main() {
	unsigned seed = std::chrono::steady_clock::now().time_since_epoch().count();
	std::default_random_engine e(seed);
	int n = e() % max;
	vector<int> numbers(n);
	for (int i = 0; i < n; ++i) {
		numbers[i] = e() % max;
	}
	
	cout << "Sequence: \n";
	for (int i = 0; i < numbers.size(); i++)
		cout << numbers[i] << "\n";
	cout << "\n";

	long long result_fast = measureTimeAlgorithm(numbers, 0);
	long long result_naive = measureTimeAlgorithm(numbers, 1);
	
	if (result_fast == result_naive)
		cout << "OK!\n\n";
	else
		cout << "Something is wrong.\n\n";
	
	system("pause");
	return 0;
}
