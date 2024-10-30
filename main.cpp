#include <iostream>
#include <string>
using namespace std;
int main() {
	int alphaCount[26] = {};
	string inputString;
	int index = 0;
	int maxCount = 0;

	/* get a string from the user */
	cout << "Enter a string: ";
	getline(cin, inputString);

	/* count the frequency */
	while (index < inputString.length()) {
		if (inputString[index] >= 'A' && inputString[index] <= 'Z') {
			// inputString[index]-'A' gives a number 0-25 that is
			//    the position in the alphabet (an offset)
			alphaCount[inputString[index] - 'A']++;
		}
		if (inputString[index] >= 'a' && inputString[index] <= 'z') {
			// inputString[index]-'a' gives a number 0-25 that is
			//    the position in the alphabet (an offset)
			alphaCount[inputString[index] - 'a']++;
		}
		++index;
	}

	/* find the max count */
	for (int i = 0; i < 26; ++i) {
		// cout << ('A' + i) << ": " << alphaCount[i] << endl;
		if (alphaCount[i] > maxCount) {
			maxCount = alphaCount[i];
		}
	}
	/* Show the most */
	for (int i = 0; i < 26; ++i) {
		if (alphaCount[i] == maxCount) {
			cout << "The most frequent letter is ";
			cout << static_cast<char>('A' + i);
			cout << ". There are ";
			cout << maxCount << " of them." << endl;
		}
	}

	return 0;
}