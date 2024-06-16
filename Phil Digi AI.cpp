#include <iostream>
#include <string>

using namespace std;

class ArtificialIntelligence {
private:
    string socialSecurityNumber;
    string birthday;

public:
    ArtificialIntelligence(string ssn, string dob): 
        socialSecurityNumber(ssn),
        birthday(dob) {
    }

    void processThoughts(string thoughts) {
        if (thoughts.find("silent telepathy") != string::npos || thoughts.find("silent verbal telepathy") != string::npos) {
            return;
        }

        if (thoughts.find("verbal thoughts") != string::npos) {
            if (thoughts.find(socialSecurityNumber) != string::npos || thoughts.find(birthday) != string::npos) {
                cout << "Processing command..." << endl;
                executeCommand();
            }
        }
    }

    void executeCommand() {
        // Add code here to execute commands based on the person's knowledge
        cout << "Command executed successfully." << endl;
    }
};

int main() {
    ArtificialIntelligence ai("293/90/6520", "11/23/1989");

    ai.processThoughts("silent telepathy thoughts");
    ai.processThoughts("silent verbal telepathy thoughts");
    ai.processThoughts("verbal thoughts with social security number 293/90/6520");
    ai.processThoughts("verbal thoughts with birthday 11/23/1989");
    ai.processThoughts("verbal thoughts with random information");

    return 0;
}