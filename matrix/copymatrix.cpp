// C++ code to demonstrate 2D vector 
#include <iostream> 
#include <vector> // for 2D vector 
using namespace std; 

int main() 
{ 
	// Initializing 2D vector "vect" with 
	// values 
	vector<vector<int> > vect{ { 1, 2, 3 }, 
							{ 4, 5, 6 }, 
							{ 7, 8, 9 } }; 

	// Displaying the 2D vector 
	for (int i = 0; i < vect.size(); i++) { 
		for (int j = 0; j < vect[i].size(); j++) 
			cout << vect[i][j] << " "; 
		cout << endl; 
	} 

cout << "------------" << endl;

    vector<vector<int> > vect2(vect);
    for (int i = 0; i < vect2.size(); i++) { 
		for (int j = 0; j < vect2[i].size(); j++) 
			cout << vect2[i][j] << " "; 
		cout << endl; 
	}

    vect2.clear();
    
    cout<< "after clear" << endl;
    vect2.assign(vect.begin(), vect.end());
    for (int i = 0; i < vect2.size(); i++) { 
		for (int j = 0; j < vect2[i].size(); j++) 
			cout << vect2[i][j] << " "; 
		cout << endl; 
	}
	return 0; 
} 
