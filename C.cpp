#include <iostream>

int main() {
    int low = 1;
    int high = 1000;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        char response;
        cout << "? " << mid << endl;
        fflush(stdout);

        cin >> response;

        if (response == '<')
        {
            high = mid - 1;
        } else if (response == '>')
        {
            low = mid + 1;
        } else if (response == '=')
        {
            cout << "! " << mid << endl;
            fflush(stdout);
            break; // Salimos del bucle
        }
    }
}
