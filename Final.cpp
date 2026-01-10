#include <iostream>
#include <string>

using namespace std;

enum State {
    A, B, C, D, E, F, G, DEAD
};

State transition(State current, char input) {
    switch (current) {
        case A:
            return (input == 'b') ? B : DEAD;

        case B:
            if (input == 'a') return C;
            if (input == 'b') return B;
            return DEAD;

        case C:
            if (input == 'a') return D;
            if (input == 'b') return B;
            return DEAD;

        case D:
            if (input == 'a') return E;
            if (input == 'b') return F;
            return DEAD;

        case E:
            return (input == 'b') ? G : DEAD;

        case F:
            return (input == 'a') ? E : DEAD;

        case G:
            return DEAD;

        case DEAD:
            return DEAD;
    }
    return DEAD;
}

bool isAccepting(State s) {
    return (s == C || s == D || s == E || s == F || s == G);
}

int main() {
    string input;
    cout << "Enter a string over {a, b}: ";
    cin >> input;

    State current = A;

    for (char c : input) {
        if (c != 'a' && c != 'b') {
            cout << "Invalid symbol detected.\n";
            return 0;
        }
        current = transition(current, c);
    }

    if (isAccepting(current))
        cout << "String ACCEPTED by the DFA.\n";
    else
        cout << "String REJECTED by the DFA.\n";

    return 0;
}
