//Spell Shortening

#include <iostream>
#include <string>

using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;

    while (test_cases--) {
        int string_length, last_non_increasing_index = -1;
        cin >> string_length;

        string input_string;
        cin >> input_string;

        string result = "";

        // Find the last index where the string is non-increasing
        for (int i = 0; i < string_length - 1; i++) {
            if (input_string[i] > input_string[i + 1]) {
                last_non_increasing_index = i;
                break;
            }
        }

        // If the string is already sorted, remove the last character
        if (last_non_increasing_index == -1) {
            last_non_increasing_index = string_length - 1;
        }

        // Build the result string without the character at last_non_increasing_index
        for (int i = 0; i < string_length; i++) {
            if (i != last_non_increasing_index) {
                result += input_string[i];
            }
        }

        // Output the result
        cout << result << endl;
    }

    return 0;
}