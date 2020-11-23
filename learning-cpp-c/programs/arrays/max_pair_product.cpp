#include <iostream>
#include <vector>

long long MaxPairwiseProduct(const std::vector<int>& numbers){

    unsigned int biggest_number = 0;
    unsigned int second_number = 0;
    unsigned int n = numbers.size();
    for (int i = 0; i < n ; i++)
    {
        if (numbers[i] > biggest_number)
        {
            second_number = biggest_number;
            biggest_number = numbers[i];
        }
        else if (numbers[i] > second_number)
        {
            second_number = numbers[i];
        }
    }
    return (long long)biggest_number*(long long)second_number;
}

int main(){

    unsigned int num = 0;
    std::cin >> num;
    std::vector<int> numbers(num);
    for(int i=0; i<num; ++i){
        std::cin >> numbers[i];
    }

    std::cout << MaxPairwiseProduct(numbers) << "\n";

}