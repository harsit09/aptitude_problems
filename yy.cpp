// C++ code to implement the approach

#include <bits/stdc++.h>
using namespace std;

// Function to add stars
string addStars(string s, vector<int>& stars)
{

	// Create a string ans for storing
	// resultant string
	string ans = "";

	int j = 0;

	for (int i = 0; i < s.length(); i++) {

		// If the count of characters
		// become equal to the stars[j],
		// append star
		if (j < stars.size() && i == stars[j]) {
			ans += '*';
			j++;
		}
		ans += s[i];
	}

	return ans;
}

// Driver code
int main()
{
	string str = "geeksforgeeks";
	vector<int> chars = { 1, 5, 7, 9 };
	string ans = addStars(str, chars);

	// Printing the resultant string
	cout << ans << endl;
}
