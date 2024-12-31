
#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>

using namespace std;

void print_2025_animation() {
    string numbers[] = {
        "  ####   ####   #####   ##### \n #    # #    # #     # #     #\n #      #    # #       #       \n #      #    #  #####   ##### \n #      #    #       #       #\n #    # #    # #     # #     #\n  ####   ####   #####   ##### ",
        "\n\033[1;32m2025\033[0m"};

    for (const string& frame : numbers) {
        cout << "\033[2J\033[H"; // Clear the screen
        cout << frame << endl;
        this_thread::sleep_for(chrono::milliseconds(700)); // Delay for animation
    }
}

void countdown_to_new_year() {
    cout << "\033[2J\033[H"; // Clear the screen
    cout << "Starting New Year Countdown!" << endl;

    for (int seconds = 10; seconds > 0; --seconds) {
        cout << "\033[2J\033[H"; // Clear the screen before displaying the next number
        cout << "\033[1;31m"; // Set text color to red
        cout << seconds << endl;
        cout << "\033[0m"; // Reset text color
        this_thread::sleep_for(chrono::seconds(1));  // Wait for 1 second
    }

    cout << "\033[2J\033[H"; // Clear the screen
    cout << "\033[1;32mHappy New Year! \U0001F389\U0001F386\033[0m" << endl;
    print_2025_animation();
}

int main() {
    countdown_to_new_year();
    return 0;
}

