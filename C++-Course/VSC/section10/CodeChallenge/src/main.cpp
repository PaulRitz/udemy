/**
 * @file main.cpp
 * @brief substitution cipher
 * @details A simple and very old method of sending secret messages is the substitution cipher.
 * You might have used this cipher with your friends when you were a kid.
 * Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
 * For example, every 'a' gets replaced with an 'X', and every 'b' gets replaced with a 'Z', etc.
 * 
 * Write a program that asks a user to enter a secret message.
 * 
 * Encrypt the message using the substitution cipher and display the necrypted message.
 * The decrype the encrypted message back to the original message.
 * 
 * You may use the 2 strings below for your substitution.
 * For example, to encrypt you can replace the character at position n in alphabet 
 * with the character at position n in key.
 * 
 * To decrypt you can replace the character at position n in key
 * with the character at position n in alphabet.
 */

/**
 * @defgroup section10 Section 10: Strings
 * @brief In this section strings are presented and explained
 */

/**
 * @addtogroup section10
 * @{
 * @defgroup s10_cc CodeChallenge
 * @brief substitution cipher
 * @details A simple and very old method of sending secret messages is the substitution cipher.
 * You might have used this cipher with your friends when you were a kid.
 * Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
 * For example, every 'a' gets replaced with an 'X', and every 'b' gets replaced with a 'Z', etc.
 * 
 * Write a program that asks a user to enter a secret message.
 * 
 * Encrypt the message using the substitution cipher and display the necrypted message.
 * The decrype the encrypted message back to the original message.
 * 
 * You may use the 2 strings below for your substitution.
 * For example, to encrypt you can replace the character at position n in alphabet 
 * with the character at position n in key.
 * 
 * To decrypt you can replace the character at position n in key
 * with the character at position n in alphabet.
 * @}
 */

/**
 * @addtogroup s10_cc
 * @{
 */


#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    // Encrypting - Decrypting

    char choice {};
    bool quit {false};
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    // string alphabet {};
    // for (int i = 0; i < 128; ++i) {
    //     alphabet += static_cast<char>(i);
    // }   

    string key      {"zyxwvutsrqponmlkjihgfedcbaZYXWVUTSRQPONMLKJIHGFEDCBA"};
    // string key {};
    // for(int i = 128; i >= 0; i--){
    //     key += static_cast<char>(i);
    // }
    string input {"Hallo mein Name ist Paul"};

    do{
        cout << "\n\nEncryptor and Decryptor: " << endl;
        cout << "-----------------------------------------" << endl;
        cout << "E - Encrypt String" << endl;
        cout << "D - Decrypt String" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nPlease enter your choice: ";
        cin >> choice;
        cin.ignore(100, '\n');
        cout << "-----------------------------------------" << endl;
        
        switch(choice){
            case 'E':
            case 'e':
                {
                    cout << "Please enter the string you want to encrypt: ";
                    getline(cin, input);

                    int index {};
                    char new_char {};
                    string encrypted_message{};
                    cout << "\n--- The input is: ---" << endl;
                    cout << input << endl << endl;
                    for(char c : input){
                        index = alphabet.find(c);
                        if(index != string::npos){
                            new_char = key.at(index);
                            encrypted_message += new_char;
                        }
                        else {
                            encrypted_message += c;
                        }
                    }
                    cout << "Your encrypted message is:" << endl;
                    cout << encrypted_message << endl << endl;;
                }
                break;
            case 'D':
            case 'd':
                {
                    cout << "Please enter the string you want to decrypt: ";
                    getline(cin, input);
                    int index {};
                    char new_char {};
                    string decrypted_message {};
                    cout << "\n--- The input is: ---" << endl;
                    cout << input << endl << endl;
                    for(char c : input){
                        index = key.find(c);
                        if(index != string::npos){
                            new_char = alphabet.at(index);
                            decrypted_message += new_char;
                        }
                        else{
                            decrypted_message += c;
                        }
                    }
                    cout << "Your decrypted message is:" << endl << endl;
                    cout << decrypted_message << endl;
                }
                break;
            case 'Q':
            case 'q':
                quit = true;
                cout << "Quitting - Goodbye..." << endl;
                break;
        }
    }while(!quit);
    cout << endl;
    return 0;
}
/** @} */