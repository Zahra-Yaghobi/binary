// Programmer is : Zahra Yaghubi
// ID : 95440288
long long int Fibonacci(long long int); // for extera long integers input

long long int Fibonacci(long long int n) // Fibonacci function by getting a variable
{
	    
	if(n==0||n==1) // conditional statement
		return n; // return 0 or 1
	else
		return Fibonacci(n-1)+Fibonacci(n-2); // calculate Fibonacci by Fibonacci's algorithm
}

int main() // main code
{
	long long int num,output; // define variables
	std::cout<<"Enter a number : "; // display sth
	std::cin>>num; // input a variable which is number and integer
	output=Fibonacci(num); // calculate Fibonacci by calling function and pass it to output variable
	std::cout<<"\nFibonacci ("<<num<<") is ="<<output<<endl; // display the answer
	return 0; // finish
}