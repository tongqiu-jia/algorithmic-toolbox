#include <iostream>
#include <vector>
#include <queue>

using namespace std;

long long  MaxPairwiseProduct(priority_queue<long>& numbers) {
  long long result = 0;
  long num_one = numbers.top();
  numbers.pop();
  long num_two = numbers.top();
  numbers.pop();
  result = num_one*num_two;
  return result;

}

int main() {
    int size;
    cin >> size;
    vector<long> vect(size);
    priority_queue<long> numbers;
    for (int i = 0; i < size; ++i) {
        cin >> vect[i];
        numbers.push(vect[i]);
    }
    

    long long result = MaxPairwiseProduct(numbers);
    cout << result << "\n";
    return 0;
}
