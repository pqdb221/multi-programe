#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// Functions defined in fr.cpp
void calculatrice();
void disscution();
void installerApp(string app);
void motDePasse();
void text();
void terminal();
void lecteur();
void comparateur();

// Functions defined in en.cpp
void calculator();
void discussion();
void installApp(string app);
void generatePassword();
void createTextFile();
void openTerminal();
void readFile();
void compareNumbers();

int main()
{
    int langue;
    cout << "Choose your language." << endl;
    cout << "1 - English" << endl;
    cout << "2 - Francais" << endl;

    if (!(cin >> langue))
    {
        cout << "Invalid language choice." << endl;
        return 1;
    }

    srand(static_cast<unsigned int>(time(nullptr)));

    // French part
    if (langue == 2)
    {
        cout << "==============================" << endl;
        cout << "        MULTI-PROGRAME" << endl;
        cout << "==============================" << endl;

        string choix;

        while (true)
        {
            cout << "\n========== MENU ==========" << endl;
            cout << "1 - Calculatrice" << endl;
            cout << "2 - Generer un mot de passe" << endl;
            cout << "3 - Installer une application (Linux)" << endl;
            cout << "4 - Editeur de texte" << endl;
            cout << "5 - Discussion simple" << endl;
            cout << "6 - Lecteur de fichiers" << endl;
            cout << "7 - Terminal" << endl;
            cout << "8 - Comparateur de nombres" << endl;
            cout << "0 - Quitter" << endl;
            cout << "==========================" << endl;
            cout << "Choix : ";

            if (!(cin >> choix))
                break;

            if (choix == "1") calculatrice();
            else if (choix == "2") motDePasse();
            else if (choix == "3") installerApp("");
            else if (choix == "4") text();
            else if (choix == "5") disscution();
            else if (choix == "6") lecteur();
            else if (choix == "7") terminal();
            else if (choix == "8") comparateur();
            else if (choix == "67")
                cout << "67 six seven 67 six seven 67 six seven 67 six seven" << endl;
            else if (choix == "0")
            {
                cout << "Au revoir !" << endl;
                break;
            }
            else cout << "Choix invalide." << endl;
        }
    }
    // English part
    else if (langue == 1)
    {
        cout << "==============================" << endl;
        cout << "        MULTI-PROGRAME" << endl;
        cout << "==============================" << endl;

        string choix;

        while (true)
        {
            cout << "\n========== MENU ==========" << endl;
            cout << "1 - Calculator" << endl;
            cout << "2 - Generate a password" << endl;
            cout << "3 - Install an application (Linux)" << endl;
            cout << "4 - Text editor" << endl;
            cout << "5 - Simple conversation" << endl;
            cout << "6 - File reader" << endl;
            cout << "7 - Terminal" << endl;
            cout << "8 - Number comparator" << endl;
            cout << "0 - Exit" << endl;
            cout << "==========================" << endl;
            cout << "Choice: ";

            if (!(cin >> choix))
                break;

            if (choix == "1") calculator();
            else if (choix == "2") generatePassword();
            else if (choix == "3") installApp("");
            else if (choix == "4") createTextFile();
            else if (choix == "5") discussion();
            else if (choix == "6") readFile();
            else if (choix == "7") openTerminal();
            else if (choix == "8") compareNumbers();
            else if (choix == "67")
                cout << "67 six seven 67 six seven 67 six seven 67 six seven" << endl;
            else if (choix == "0")
            {
                cout << "Goodbye!" << endl;
                break;
            }
            else cout << "Invalid choice." << endl;
        }
    }
    else
    {
        cout << "Invalid language choice." << endl;
        return 1;
    }

    return 0;
}
