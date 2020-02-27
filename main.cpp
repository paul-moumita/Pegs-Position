// ENPM 809Y RWA1
// Author: Moumita Paul 
// UID: 116860970

#include <iostream>
#include <vector>
#include <array>
#include <string>

using namespace std;

int main()
{
	// Creating 2D array of string objects with 2 rows and 3 columns
	array< array<string,2> , 3> peg_array=
		{{{"blue","white"},
		{"green","white"},
		{"green","white"}}}; 
		
	// Creating vectors 
	vector<string> color_vec1;
	vector<string> color_vec2;
	vector<string> color_vec3;
	
	// Store values of each row of 2D array in vectors
	color_vec1.push_back(peg_array.at(0).at(0));
	color_vec1.push_back(peg_array.at(0).at(1));
	color_vec2.push_back(peg_array.at(1).at(0));
	color_vec2.push_back(peg_array.at(1).at(1));
	color_vec3.push_back(peg_array.at(1).at(0));
	color_vec3.push_back(peg_array.at(1).at(1));
	
	// User entry of missing colors
	string usercolor_1;
	string usercolor_2;
	string usercolor_3;
	cout<< "enter the color for the missing peg using the picture of the tray( green, white, blue)"<<endl;
	cin >> usercolor_1 >> usercolor_2 >> usercolor_3;

	// Insert user data into vectors 
	color_vec1.push_back(usercolor_1);
	color_vec2.insert(color_vec2.begin(),usercolor_2);
	color_vec3.insert(color_vec3.begin()+1, usercolor_3);
	
	// Display the updated color elements of the tray
	for(unsigned int i=0; i < color_vec1.size();i++)
	{ 
		cout << color_vec1.at(i)<< "\t";
	}
	cout<<endl;
	for(unsigned int i=0; i < color_vec2.size();i++)
	{ 
		cout << color_vec2.at(i)<<"\t";
	}
	cout<< endl;
	for(unsigned int i=0; i < color_vec3.size();i++)
	{ 
		cout << color_vec3.at(i)<<"\t";
	}
	cout<<endl;
	
	// Creating 2D vector 
	vector<vector <string>> color_vec_2d;
	
	// Inserting color vectors values into 2D vector 
	color_vec_2d.push_back(color_vec1);
	color_vec_2d.push_back(color_vec2);
	color_vec_2d.push_back(color_vec3);
	
	// Computing size of the 2D vector
	int color_vec_2d_size= color_vec_2d.at(0).size()+color_vec_2d.at(1).size()+color_vec_2d.at(2).size();
	cout<< "\ncolor_vec_2d size is "<< color_vec_2d_size<< endl << endl;
	
	// Displaying color_vec_2d, m is row and n is coloum of color_vec_2d
	for(unsigned int m=0; m< color_vec_2d.size();m++){
		for (unsigned int n=0; n<3; n++){
			cout<< color_vec_2d.at(m).at(n)<< "\t";
		}
		cout << endl;}
	return 0;
}
