#include "Array.tpp"



int main()
{
	Array<int> arr(10);
	
	for (int i = 0; i < 10; i++) {
		const int value = rand();
		arr[i] = value;
	}

	Array<int> tmp1 = arr;
	Array<int> tmp2(tmp1);
	
	for (int i = 0; i < 10; i++) {
		std::cout << arr[i] << "   --   " << tmp2[i] << std::endl;
	 
	}

	try {
		arr[-2] = 0;
	} catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}