#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

int main() {
    int count = 0;  
    float sum = 0.0; 
    float sum_of_square = 0.0; 
    string textline;
    ifstream source("score.txt"); 

    if (!source) {
        cout << "Unable to open file score.txt" << endl;
        return 1; 
    }

    while (getline(source, textline)) { 
        float score = stof(textline); 
        sum += score; 
        sum_of_square += score * score; 
        count++; 
    }

    if (count == 0) {
        cout << "No data found in the file." << endl;
        return 1; 
    }

    float mean = sum / count;

    float variance = (sum_of_square / count) - (mean * mean);
    float standard_deviation = sqrt(variance);

    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);  
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << standard_deviation << "\n";

    source.close();
    return 0;
}
