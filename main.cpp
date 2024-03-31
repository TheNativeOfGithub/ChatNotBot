#include "iostream"
#include "cstdlib"
#include <vector>
#include <ctime>
#include <string>
#include <cmath>

using namespace std;

string strinput;
int intinput1;
int intinput2;
double intoutput;
int x;
int y;
int choose;

int other();

int addition(int x, int y) {
    return x + y;
}

int sub(int x, int y) {
    return x - y;
}

int mul(int x, int y) {
    return x * y;
}

double ti(int x, int y) {
    return pow(x, y); // Pow a hatványozáshoz
}

int bcalculator() {
    int intinput1, intinput2;
    double intoutput;
    int choose;

    cout << "The first number: ";
    cin >> intinput1;
    cout << "The second number: ";
    cin >> intinput2;

    cout << "Which opeation do you want to make?" << endl;
    cout << "1 - addition" << endl;
    cout << "2 - subtraction" << endl;
    cout << "3 - multiplication" << endl;
    cout << "4 - division" << endl;
    cout << "5 - exponentiation" << endl;
    cin >> choose;

    switch (choose) {
        case 1:
            intoutput = addition(intinput1, intinput2);
            cout << intoutput << endl;
            other();
        case 2:
            intoutput = sub(intinput1, intinput2);
            cout << intoutput << endl;
            other();
        case 3:
            intoutput = mul(intinput1, intinput2);
            cout << intoutput << endl;
            other();
        case 4:
            intoutput = intinput1 / intinput2;
            cout << intoutput << endl;
            other();
        default:
            cout << "Error..." << endl;
            bcalculator();
    }
    other();
    return 0;
}

double calculateVelocity(double initialVelocity, double acceleration, double time) {
    return initialVelocity + acceleration * time;
}

double calculateAcceleration(double initialVelocity, double finalVelocity, double time) {
    return (finalVelocity - initialVelocity) / time;
}

double calculateForce(double mass, double acceleration) {
    return mass * acceleration;
}

double calculateKineticEnergy(double mass, double velocity) {
    return 0.5 * mass * pow(velocity, 2);
}

int bphysicsCalculator() {
    int choice;
    double initialVelocity, finalVelocity, acceleration, time, mass, velocity;

    cout << "Physics Calculator" << endl;
    cout << "1. Calculate Velocity" << endl;
    cout << "2. Calculate Acceleration" << endl;
    cout << "3. Calculate Force" << endl;
    cout << "4. Calculate Kinetic Energy" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter initial velocity (m/s): ";
            cin >> initialVelocity;
            cout << "Enter acceleration (m/s^2): ";
            cin >> acceleration;
            cout << "Enter time (s): ";
            cin >> time;
            velocity = calculateVelocity(initialVelocity, acceleration, time);
            cout << "Final velocity is: " << velocity << " m/s" << endl;
            other();
        case 2:
            cout << "Enter initial velocity (m/s): ";
            cin >> initialVelocity;
            cout << "Enter final velocity (m/s): ";
            cin >> finalVelocity;
            cout << "Enter time (s): ";
            cin >> time;
            acceleration = calculateAcceleration(initialVelocity, finalVelocity, time);
            cout << "Acceleration is: " << acceleration << " m/s^2" << endl;
            other();
        case 3:
            cout << "Enter mass (kg): ";
            cin >> mass;
            cout << "Enter acceleration (m/s^2): ";
            cin >> acceleration;
            cout << "Force is: " << calculateForce(mass, acceleration) << " N" << endl;
            other();
        case 4:
            cout << "Enter mass (kg): ";
            cin >> mass;
            cout << "Enter velocity (m/s): ";
            cin >> velocity;
            cout << "Kinetic energy is: " << calculateKineticEnergy(mass, velocity) << " J" << endl;
            other();
        default:
            cout << "Invalid choice!" << endl;
    }
    other();
    return 0;
}

class JokeBook {
private:
    vector<string> jokes;

public:
    JokeBook() {
        jokes.emplace_back("Why don't scientists trust atoms? Because they make up everything!");
        jokes.emplace_back("What do you get when you cross a snowman and a vampire? Frostbite!");
        jokes.emplace_back("Why did the scarecrow win an award? Because he was outstanding in his field!");
        jokes.emplace_back("How does a penguin build its house? Igloos it together!");
        jokes.emplace_back("Why don't skeletons fight each other? They don't have the guts!");

        srand(time(nullptr));
    }

    string getRandomJoke() {
        int index = rand() % jokes.size();
        return jokes[index];
    }
};

void jokes() {
    JokeBook jokes;

    std::cout << "Here's a random joke from the joke book:\n";
    std::cout << jokes.getRandomJoke() << std::endl;
    other();
}

void help() {
    cout << "Commands:\n"
            "  hlp - help\n"
            "  cal - basic calculator\n"
            "  phc - basic physics calculator\n"
            "  jks - jokes\n"
            "  end - quit from the chat" << endl;
    other();
}

void ending() {
    cout << "Good bye and see you later!" << endl;
}

int other() {
    cout << "And can I help you in other things?" << endl;
    cin >> strinput;
    if (strinput == "hlp") {
        help();
    }
    if (strinput == "end") {
        ending();
    }
    if (strinput == "cal") {
        bcalculator();
    }
    if (strinput == "phc") {
        bphysicsCalculator();
    }
    if (strinput == "jks") {
        jokes();
    }

    return 0;
}

int main() {
    cout << "Welcome, I am ... a very very basic chatter. How can I help you?(hlp = help)" << endl;
    cin >> strinput;
    if (strinput == "hlp") {
        help();
    }
    if (strinput == "end") {
        ending();
    }
    if (strinput == "cal") {
        bcalculator();
    }
    if (strinput == "phc") {
        bphysicsCalculator();
    }
    if (strinput == "jks") {
        jokes();
    }
    return 0;
}
