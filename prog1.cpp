#include <iostream> 

int fib(int n){
	if(n == 1){
		return 0;
	}
	else if(n == 2){
		return 1;
	}
	else{
		return fib(n-1) + fib(n-2);
	}
}

int main(){
	int n;
	std::cout << "Hello, world!" <<  std::endl;
	std::cout << "Enter n: "; 
	std::cin >> n;
	std::cout << n << "-ое число Фиббоначи - это " << fib(n) << std::endl;
	return 0;
}
