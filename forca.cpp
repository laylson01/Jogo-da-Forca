#include <iostream>
#include <string>
using namespace std;

const string PALAVRA_SECRET = "MELANCIA";

bool letra_existe(char chute)
{
    for (int i = 0; i < PALAVRA_SECRET.size(); i++)
        if (chute == PALAVRA_SECRET[i])
        {
            return true;
        }
    return false;
}

/* M E L A N C I A
0 1 0 1 0 1 0 1


PALAVRA_SECRET



*/
int main()
{

    //cout << "hello world" << endl;
    // char PALAVRA_SECRET = [20]; Old way
    cout << PALAVRA_SECRET << endl;

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