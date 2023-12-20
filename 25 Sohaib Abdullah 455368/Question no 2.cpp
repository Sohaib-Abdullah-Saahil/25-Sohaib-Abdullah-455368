#include <iostream>
#include <unordered_set>
using namespace std;

   string removeDuplicates(const string& input) {
    string result;
    unordered_set<char> newChars;

    for (char ch : input) {
        
        char lowercaseCh = std::tolower(ch);

        
        if (newChars.find(lowercaseCh) == newChars.end()) {
            
            result += lowercaseCh;

            
            newChars.insert(lowercaseCh);
        }
    }

    return result;
}

int main() {
    
    string input;
    
    cout << "Enter a string: ";
    getline(std::cin, input);

    
    string result = removeDuplicates(input);
    
    cout << "Resultant string after removing duplicates: " << result << std::endl;

    return 0;
}

