#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to calculate the number of parity bits required
int calculateParityBits(int m) {
    int r = 0;
    while ((1 << r) < (m + r + 1)) {
        r++;
    }
    return r;
}

// Function to generate the Hamming code
vector<int> generateHammingCode(vector<int> data) {
    int m = data.size();
    int r = calculateParityBits(m);
    int n = m + r;

    vector<int> hammingCode(n + 1);

    int j = 0, k = 0;

    for (int i = 1; i <= n; i++) {
        // Check if the current position is a power of 2
        if (i == (1 << j)) {
            hammingCode[i] = 0;
            j++;
        } else {
            hammingCode[i] = data[k];
            k++;
        }
    }

    for (int i = 0; i < r; i++) {
        int parityPos = (1 << i);
        int parity = 0;

        for (int j = 1; j <= n; j++) {
            if (j & parityPos) {
                parity ^= hammingCode[j];
            }
        }

        hammingCode[parityPos] = parity;
    }

    return hammingCode;
}

// Function to detect and correct a single bit error in the Hamming code
void detectAndCorrectError(vector<int>& hammingCode) {
    int n = hammingCode.size() - 1;
    int r = log2(n) + 1;
    int errorPos = 0;

    for (int i = 0; i < r; i++) {
        int parityPos = (1 << i);
        int parity = 0;

        for (int j = 1; j <= n; j++) {
            if (j & parityPos) {
                parity ^= hammingCode[j];
            }
        }

        if (parity != 0) {
            errorPos += parityPos;
        }
    }

    if (errorPos != 0) {
        cout << "Error detected at position: " << errorPos << endl;
        hammingCode[errorPos] ^= 1; // Correct the error
        cout << "Error corrected.\n";
    } else {
        cout << "No error detected.\n";
    }
}

// Function to extract the original data from the Hamming code
vector<int> extractData(const vector<int>& hammingCode) {
    int n = hammingCode.size() - 1;
    int r = log2(n) + 1;
    vector<int> data;

    for (int i = 1; i <= n; i++) {
        if ((i & (i - 1)) != 0) {
            data.push_back(hammingCode[i]);
        }
    }

    return data;
}

int main() {
    vector<int> data = {1, 0, 1, 1}; // Example data bits

    vector<int> hammingCode = generateHammingCode(data);

    cout << "Generated Hamming code: ";
    for (int i = 1; i < hammingCode.size(); i++) {
        cout << hammingCode[i] << " ";
    }
    cout << endl;

    // Introduce an error for testing
    hammingCode[3] ^= 1;

    cout << "Hamming code with error: ";
    for (int i = 1; i < hammingCode.size(); i++) {
        cout << hammingCode[i] << " ";
    }
    cout << endl;

    detectAndCorrectError(hammingCode);

    cout << "Corrected Hamming code: ";
    for (int i = 1; i < hammingCode.size(); i++) {
        cout << hammingCode[i] << " ";
    }
    cout << endl;

    vector<int> extractedData = extractData(hammingCode);

    cout << "Extracted data: ";
    for (int bit : extractedData) {
        cout << bit << " ";
    }
    cout << endl;

    return 0;
}
