#include <iostream>
#include <string>
using namespace std;

string rotateString(const string& str) 
{
    return str.substr(1) + str[0];
}

int main() {
    
    string str1, str2;
    
    cout << "Enter the first string: ";
    cin >> str1;
    
    cout << "Enter the second string: ";
    cin >> str2;

    
    if (str1 == str2) 
	{
        
        str1 = rotateString(str1);
        cout << "Strings are now unequal after rotation." << endl;
    } 
	else
	 {
        cout << "Strings are already unequal." << endl;
    }

    
    cout << "Modified first string: " << str1 << std::endl;
    cout << "Second string: " << str2 << std::endl;

    return 0;
}

