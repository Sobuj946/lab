#include <iostream>
#include <ctime>   // time() এর জন্য
using namespace std;

int main() {
    time_t start, end;

    // শুরুর সময়
    start = time(NULL);

    // --- যে কাজের সময় মাপতে চাই ---
    for (long long i = 0; i < 1000000; i++); // dummy loop

    // শেষের সময়
    end = time(NULL);

    cout << "Execution time: " << difftime(end, start) << " seconds" << endl;

    return 0;
}
