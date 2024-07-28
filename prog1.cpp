#include <iostream> 

int fib(int n){
	int num1 = 0;
	int num2 = 1;
	if(n == 1){
		return num1;
	}
	else if(n == 2){
		std::cout << num1 << std::endl;
		return num2;
	}
	else{
		std::cout << num1 << std::endl << num2 << std::endl;
		for(int i = 3; i <= n; i++){
			if(i != 3){
				std::cout << num1 << std::endl;
			}
			int safeInt = num2;
			num2 += num1;
			num1 = safeInt;
		}
		return num2;
	}
}

int main(){
	int n;
	std::cout << "Hello, world!" <<  std::endl;
	std::cout << "Enter n: "; 
	std::cin >> n;
	std::cout << fib(n) << std::endl;
	return 0;
}
