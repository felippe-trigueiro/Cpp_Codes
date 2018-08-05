#include <chrono>
#include <vector>
#include <iostream>
using std::vector;
using std::cout;

long long MaxPairwiseProduct(const vector<int>&);
long long MaxPairwiseProduct_Naive(const vector<int>&);

//This function receives the vector containing the numbers which wants calculate the maximum pairwise product
//together with the code of the algorithm which you desire calculate the performance time.
//The function returns the desired product.
long long measureTimeAlgorithm(const vector<int>& numb, int algorithm)
{
	if (algorithm == 0) //fast
	{
		//Measuring the time of the fast algorithm
		auto start = std::chrono::high_resolution_clock::now();
		long long result_fast = MaxPairwiseProduct(numb);
		auto finish = std::chrono::high_resolution_clock::now();

		std::chrono::duration<double> elapsed_fast = finish - start;

		cout << "Fast result: " << result_fast << "\n";
		cout << "Time of the fast algorithm " << elapsed_fast.count() << "\n\n";

		return result_fast;
	}
	else if (algorithm == 1)
	{
		//Measuring the time of the naive algorithm
		auto start_naive = std::chrono::high_resolution_clock::now();
		long long result_naive = MaxPairwiseProduct_Naive(numb);
		auto finish_naive = std::chrono::high_resolution_clock::now();

		std::chrono::duration<double> elapsed_naive = finish_naive - start_naive;

		cout << "Naive result: " << result_naive << "\n";
		cout << "Time of the naive algorithm " << elapsed_naive.count() << "\n\n";

		return result_naive;
	}
	else
		return -1;

}