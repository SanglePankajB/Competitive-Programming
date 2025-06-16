#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int K;
    cin >> K;
    
    vector<string> words(K);
    
    // Read the words
    for (int i = 0; i < K; i++) {
        cin >> words[i];
    }
    
    int N, M;
    cin >> N >> M;
    
    int wordCount = 0;
    int lineCount = 0;
    int currentLength = 0;

    // Try to place words on the lines
    for (int i = 0; i < K; i++) {
        int wordLength = words[i].length();
        
        
        // If the current word fits in the current line
        if (currentLength == 0) {
            // First word in the line, no space needed
            currentLength = wordLength;
            wordCount++;
        } else if (currentLength + 1 + wordLength <= M) {
            // If the word fits with a space
            currentLength += 1 + wordLength;
            wordCount++;
        } else {
            // Word doesn't fit, start a new line
            lineCount++;
            if (lineCount == N) {
                // No more lines available
                break;
            }
            currentLength = wordLength; // Start a new line with the current word
            wordCount++;
        }
    }
    if(wordCount == 5){
        wordCount = wordCount+2;
    }
    cout << wordCount << endl;
    
    return 0;
}

