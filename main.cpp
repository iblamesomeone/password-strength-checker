#include<iostream>

using namespace std;


// Class to handle password input and analysis
class Password {

    string pass;
    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
    bool hasSpecial = false;

public:

    // Prompt user to enter a password
    void pass_input () {
        cout << "Enter Password : ";
        getline(cin, pass);
    }
    
    // Analyze the strength of the entered password
    void strength () {

        // Reset flags each time analysis starts
        hasUpper = hasLower = hasDigit = hasSpecial = false;
        int length = pass.length();
        
        // Check each character for criteria
        for (char c : pass) {
            if (isupper(c)) hasUpper = true;
            else if (islower(c)) hasLower = true;
            else if (isdigit(c)) hasDigit = true;
            else if (ispunct(c)) hasSpecial = true; // Use ispunct to check special chars
        }
        
        cout << "\n--- Password Analysis ---\n";
        
        // Minimum length check
        if (length < 8) {
            cout << "Strength: Weak\nReason: Too short (minimum 8 characters required)\n";
            return;
        }
        
        // Score how many criteria are met
        int score = hasUpper + hasLower + hasDigit + hasSpecial;
        if (score == 4) {
            cout << "Strength: Strong\n";
        } else if (score == 3) {
            cout << "Strength: Moderate\n";
        } else {
            cout << "Strength: Weak\n";
        }
        // Give feedback on missing criteria
        if (!hasUpper) cout << "- Missing uppercase letter\n";
        if (!hasLower) cout << "- Missing lowercase letter\n";
        if (!hasDigit)  cout << "- Missing digit\n";
        if (!hasSpecial) cout << "- Missing special character (e.g. ! @ # $)\n";
    }
};


int main() {
    Password p;
    p.pass_input(); // Get password from user
    p.strength();   // Analyze password strength
    return 0;
}
