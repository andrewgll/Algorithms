void print_array(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << "\n";
}
void insertion_sort(int arr[], int n){
	int i{}, key{}, j{};
	for(int i = 0; i < n; i++){
		key = arr[i];
		j= i -1;

		while(j >= 0 && arr[j] > key){
			arr[j+1]=arr[j];
			j--;
			std::cout << "Key is: " << key << " j: " << j << "\n";
			print_array (arr, n);
		}
		arr[j+1]=key;
	}
}

