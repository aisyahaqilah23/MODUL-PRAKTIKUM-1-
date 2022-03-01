#include <iostream>
#include <cmath>

using namespace std;

float calculateSD(float data[]);

int main() {
	int i;
    float data[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};	   

    cout << endl << "Standard Deviation = " << calculateSD(data);

    return 0;
}

float calculateSD(float data[])
{
    float sum = 0.0, mean, sigma = 0.0;

    int i;

    for(i = 0; i < 10; ++i)
    {
        sum += data[i];
    }

    mean = sum/10;

    for(i = 0; i < 10; ++i) {
        sigma += pow(data[i] - mean, 2);
	}

    return sqrt(sigma / 10);
}
