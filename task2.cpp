#include <iostream>
#include <string>
using namespace std;

// Function to find the first occurrence of a pattern
int findPattern(string text, string pattern)
{
    int textLength = text.length();
    int patternLength = pattern.length();

    // Empty pattern
    if (patternLength == 0)
        return 0;

    // Naive pattern matching
    for (int i = 0; i <= textLength - patternLength; i++)
    {
        int j;

        for (j = 0; j < patternLength; j++)
        {
            if (text[i + j] != pattern[j])
                break;
        }

        if (j == patternLength)
            return i;
    }

    return -1;
}

int main()
{
    // Test Case 1: Pattern at the beginning
    string text1 = "programming";
    string pattern1 = "pro";

    cout << "Test Case 1 (Pattern at the beginning): "
         << findPattern(text1, pattern1) << endl;

    // Test Case 2: Pattern at the end
    string text2 = "programming";
    string pattern2 = "ing";

    cout << "Test Case 2 (Pattern at the end): "
         << findPattern(text2, pattern2) << endl;

    // Test Case 3: Pattern not present
    string text3 = "programming";
    string pattern3 = "xyz";

    cout << "Test Case 3 (Pattern not present): "
         << findPattern(text3, pattern3) << endl;

    // Test Case 4: Empty pattern
    string text4 = "programming";
    string pattern4 = "";

    cout << "Test Case 4 (Empty pattern): "
         << findPattern(text4, pattern4) << endl;

    return 0;
}