#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    // Compile date and time
    cout << "Compile Date: " << __DATE__ << "\n";
    cout << "Compile Time: " << __TIME__ << "\n";

    // PA1903 - Date and time now
    time_t now = time(0);

    // Print date and time
    cout << "Current Date and Time: "
         << ctime(&now);

    // Format date and time
    tm *ltm = localtime(&now);

    cout << "Formatted Date: "
         << 1 + ltm->tm_mday << "/"
         << 1 + ltm->tm_mon << "/"
         << 1900 + ltm->tm_year << "\n";

    // Compare date and time
    time_t future = now + 60;

    if(now < future)
    {
        cout << "Current time is earlier." << "\n";
    }

    return 0;
}
