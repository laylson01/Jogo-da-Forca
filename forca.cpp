#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

const string PALAVRA_SECRET = "GATO";
map<char, bool> chutou;
vector<char> chutes_errados;

bool letra_existe(char chute)
{
    for (char letra : PALAVRA_SECRET)
    {
        if (chute == letra)
        {
            return true;
        }
    }
    return false;
}

/* for (int i = 0; i < PALAVRA_SECRET.size(); i++)
        if (chute == PALAVRA_SECRET[i])
        {
            return true;
        }

    return false;
*/
int main()
{

    cout << "*********************" << endl;
    cout << "*** Jogo da Forca ***" << endl;
    cout << "*********************" << endl;
    cout << endl;

    // cout << PALAVRA_SECRET << endl;
    bool n_acertou = true;
    bool n_enforcou = true;

    while (n_acertou & n_enforcou)
    {
        cout << "Chutes Errados: ";
        for (char letra : chutes_errados)
        {
            cout << letra << " ";
        }
        cout << endl;
        for (char letra : PALAVRA_SECRET)
        {
            if (chutou[letra])
            {
                cout << letra << " ";
            }
            else
            {
                cout << "_ ";
            }
        }
        cout << endl;
        cout << "Seu chute: ";
        char chute;
        cin >> chute;
        chutou[chute] = true;

        if (letra_existe(chute))
        {
            cout << "Você acertou! Seu chute está na palavra." << endl;
        }
        else
        {
            cout << "Você errou! Seu chute não está na palavra." << endl;
            chutes_errados.push_back(chute);
        }
        cout << endl;

        /* chutou["M"] = false;
            chutou["E"] = false;
            chutou["L"] = false;
            chutou["A"] = false;
            chutou["N"] = false;
            chutou["C"] = false;
            chutou["I"] = false;
            chutou["A"] = false; 
            */
    }
}
