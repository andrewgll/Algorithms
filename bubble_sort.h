void bubble_sort(int arr[]){
	int array_length = sizeof(arr) / sizeof(arr[0]);
	int i, j;
	for(i = 0; i < array_length - 1; i++){
		for(j = 0; j < array_length - i - 1; j++){
			if(arr[j] > arr[j + 1])
			{
				std::swap(arr[j], arr[j+1]);
			}
		}
	}
}
void printArray(int arr[])
{
	int array_length = sizeof(arr) ;
	std::cout << "Size of array: " << array_length << "\n";
    int i;
    for (i = 0; i < array_length; i++)
        std::cout << arr[i] << " ";
    std::cout << "\n";
}