#include <vector>
void binary_search(std::vector<int> vec, int toFind){
	int low = 0;
	int hight = vec.size() - 1;

	while(hight-low>1){
		int mid = (hight+low)/2;
		if(vec[mid] < toFind){
			low=mid+1;
		}
		else {
			hight = mid;
		}
	}
	if(vec[low] == toFind){
		std::cout << "Found at index: " << low << "\n";
	}
	else if(vec[hight]==toFind){
		std::cout << "Found at index: " << hight << "\n";
	}
	else{
		std::cout << "Not found" << "\n";
	}
}