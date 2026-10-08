#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
int main()
{
    // input layer
    vector<float> x{
        2.0f, 3.0f};
    vector<vector<float>> w1{
        {0.5f, 0.2f},
        {0.3f, 0.8f},
        {0.7f, 0.1f}};
    vector<float> b1{
        0.1f, 0.2f, 0.3f};
    vector<float> w2{
        0.4f, 0.6f, 0.5f};

    float b2 = 0.1f;
    vector<float> hidden(3);
    for (int i = 0; i < 3; i++)
    {
        hidden[i] = b1[i];
        for (int j = 0; j < 2; j++)
        {
            hidden[i] += x[j] * w1[i][j];
        }
        hidden[i] = max(0.0f, hidden[i]); // ReLU activation
    }

    float output = b2;
    for (int i = 0; i < 3; i++)
    {
        output += hidden[i] * w2[i];
    }
    cout << "Output: " << output << endl;
}