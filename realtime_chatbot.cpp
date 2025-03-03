#include <iostream>
#include <string>
using namespace std;

// Function to get chatbot's response based on user input
string getResponse(const string& userInput) {
    if (userInput == "hi" || userInput == "hello") {
        return "Hello! How can I assist you today?";
    } else if (userInput == "how are you") {
        return "I'm just a bot, but I'm doing great! Thanks for asking.";
    } else if (userInput == "what is your name") {
        return "I am a simple chatbot created in C++.";
    } else if (userInput == "bye") {
        return "Goodbye! Have a nice day!";
    } else {
        return "Sorry, I didn't understand that. Can you ask something else?";
    }
}

int main() {
    string userInput;
    cout << "Chatbot: Hi! Type 'bye' to exit the chat.\n";

    while (true) {
        cout << "You: ";
        getline(cin, userInput);  // Get user input

        // Convert user input to lowercase for case-insensitive comparison
        for (char &c : userInput) {
            c = tolower(c);
        }

        // Get chatbot's response
        string response = getResponse(userInput);
        cout << "Chatbot: " << response << endl;

        // Exit condition for the chatbot
        if (userInput == "bye") {
            break;
        }
    }

    return 0;
}
