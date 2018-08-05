#include <vector>
using std::vector;

//The two algorithms bellow calculates the maximum pairwise product of a set of integers.
long long MaxPairwiseProduct(const vector<int>& numbers) {
	long long result = 0;
	int n = numbers.size();
	long long maior[] = { -1, 0 };
	long long seg_maior = -1;

	for (int j = 0; j < 2; ++j) {
		for (int i = 0; i < n; ++i) {
			if (numbers[i] > maior[0] && j == 0)
			{
				maior[0] = numbers[i];
				maior[1] = i;
			}
			if (numbers[i] > seg_maior && numbers[i] <= maior[0] && maior[1] != i && j == 1)
				seg_maior = numbers[i];
		}
	}
	result = maior[0] * seg_maior;
	return result;
}

long long MaxPairwiseProduct_Naive(const vector<int>& numbers) 
{
	long long result = 0;
	int n = numbers.size();
	
	for (int i = 0; i < n; i++)
		for (int j = i+1; j < n; j++)
			if ((numbers[i] * numbers[j] > result))
				result = long long (numbers[i]) * long long (numbers[j]);

	return result;
}