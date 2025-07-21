#include <iostream>
#include <deque>

int main(){
	std::deque<int> de;
	de.push_back(3);
	de.push_back(2);
	de.push_back(4);
	std::cout << de.at(1) << std::endl;
	return 0;
}



