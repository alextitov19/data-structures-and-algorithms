#include <iostream>
#include <ctime>
#include <chrono>

using namespace std;
int main()
{
    auto start = chrono::system_clock::now();

    for (int i = 0; i < 100000000; i++) {
        int x = 0;

    }    
    
    auto end = chrono::system_clock::now();
    chrono::duration<double> elapsed_seconds = end-start;


    cout << "This took " << elapsed_seconds.count() * 1000 << " milliseconds" << endl;
}