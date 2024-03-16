#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

bool compare(const std::pair<int, int>& a, const std::pair<int, int>& b) {   
    if (a.second != b.second) {
        return a.second > b.second;
    }
    return a.first < b.first;
}

void sortByFrequency(std::vector<int>& arr) {
    std::unordered_map<int, int> frequencyMap;

    for (int num : arr) {
        frequencyMap[num]++;
    }

    std::vector<std::pair<int, int>> frequencyVector(frequencyMap.begin(), frequencyMap.end());


    std::sort(frequencyVector.begin(), frequencyVector.end(), compare);

  
    int index = 0;
    for (const auto& pair : frequencyVector) {
        for (int i = 0; i < pair.second; ++i) {
            arr[index++] = pair.first;
        }
    }
}

int main() {
	
	int t;
	std:: cin >> t;
	while(t--){
	    std::vector<int> arr ;
	
	    int n;
	    std::cin >> n;
	    int a;
	    for(int i=0;i<n;i++) {
	    	std::cin >> a;
		 	arr.push_back(a);
		}
	
	    sortByFrequency(arr);
	
	   
	    for (int num : arr) {
	        std::cout << num << " ";
	    }
	
		std::cout <<"\n";
		
	}
}

