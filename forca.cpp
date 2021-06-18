#include <iostream>
#include <string>
using namespace std;


bool letra_existe(char chute){

} 

// M E L A N C I A
//0 1 0 1 0 1 0 1
int main()
{

    //cout << "hello world" << endl;
    // char palavra_secret = [20]; Old way
    string palavra_secret = "MELANCIA";
    cout << palavra_secret << endl;

    bool n_acertou = true;
    bool n_enforcou = true;

    while (n_acertou & n_enforcou)
    {
        char chute;
        cin >> chute;
        cout << "Seu chute foi " << chute << endl;

        while (n_acertou && n_enforcou)
        {
            char chute;
            cin >> chute;

            if (letra_existe(chute))
            {
                cout << "Você acertou! Seu chute está na palavra." << endl;
            }
            else
            {
                cout << "Você errou! Seu chute não está na palavra." << endl;
            }
        }
    }
}