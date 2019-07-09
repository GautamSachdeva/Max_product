#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long int MaxPairwiseProduct(const std::vector<int>& numbers) {
    long long int max_product = 0;
    int n = numbers.size();
    long long int max_value1 = 0;
    long long int max_value2 = -1;
    int max_index1 = 0;
    for(int i = 0 ; i < n ; i++){
    	if(i == 0){
    		max_value1 = numbers[i];
    		max_index1 = i;
		}
		else if(numbers[i] > max_value1){
			max_value1 = numbers[i];
			max_index1 = i;
		}
	}
	for(int j = 0; j < n ; j++){
		if( j != max_index1 && numbers[j] > max_value2){
			max_value2 = numbers[j];
		} 
	}
	
	max_product = (max_value1*max_value2);
    return max_product;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }
	long  long int k =  MaxPairwiseProduct(numbers);
    std::cout << k << "\n";
    return 0;
}
