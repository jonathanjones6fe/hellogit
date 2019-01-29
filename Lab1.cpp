#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<char> chars;
	vector<int> nums;	

	//add a, b, c to char vector
	chars.push_back('a');
	chars.push_back('b');
	chars.push_back('c');

	//to demontrate for loop, vector::push_back
	for(unsigned int i = 0; i < 10; i++)
		nums.push_back(i);

	//to demonstrate enhance for/for each loop
	for(char c: chars)
		cout<<c<<" ";
	cout<<endl;

	//print nums in reverse order
	//to demonstrate while loop, vector::pop_back, vector::empty
	auto index = nums.size() - 1;
	while(!nums.empty()) {
		cout<<nums[index]<<endl;
		nums.pop_back(); //remove num after print
		index--;
	}
	
	//to demonstrate strings	
	string greeting = "Hello";
	greeting += " World"; //concatention
	cout<<greeting<<endl;
	cout<<"Character at index 6 is: "<<greeting[6]<<endl;
	
	return 0;
}
