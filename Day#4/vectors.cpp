// C++ program to illustrate the 
// iterators in vector 
#include <iostream> 
#include <vector> 

using namespace std; 

int main() 
{ 
	vector<int> g1; 

	for (int i = 1; i <= 5; i++) 
		g1.push_back(i * 10); 

	cout << "Output of begin and end: "; 
	for (auto i = g1.begin(); i != g1.end(); ++i) 
		cout << *i << " "; 

    cout << endl;
    cout << "vector.size() " << g1.size() << endl;
    cout << "vector.max_size() " << g1.max_size() << endl;
    cout << "vector.capacity() " << g1.capacity() << endl;
    g1.resize(4);
    for (auto i = g1.begin(); i != g1.end(); ++i) 
		cout << *i << " "; 
    cout << "\nvector.empty() " << g1.empty() << endl;

    int &a = g1.at(2);
    cout << a << endl;
    a = 10;
    for (auto i = g1.begin(); i != g1.end(); ++i) 
		cout << *i << " "; 
    // pointer to the first element 
    int* pos = g1.data(); 
  
    cout << "\nThe first element is " << *pos;
    ++pos;
    cout << "\nThe Second element is " << *pos;
    

	// cout << "\nOutput of cbegin and cend: "; 
	// for (auto i = g1.cbegin(); i != g1.cend(); ++i) 
	// 	cout << *i << " "; 

	// cout << "\nOutput of rbegin and rend: "; 
	// for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir) 
	// 	cout << *ir << " "; 

	// cout << "\nOutput of crbegin and crend : "; 
	// for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir) 
	// 	cout << *ir << " "; 

	return 0; 
} 
