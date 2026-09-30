#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

void calculatrice()
{
    double a, b;
    string op;

    cout << "Ecrivez votre premier nombre : " << endl;
    cin >> a;
    cout << "Ecrivez votre opération ( + - x / ):" << endl;
    cin >> op;
    cout << "Ecrivez votre deuxième nombre :" << endl;
    cin >> b;

    if (op == "+") cout << a << " + " << b << "=" << a+b << endl;
    else if (op == "-") cout << a << " - " << b << "=" << a-b << endl;
    else if (op == "x" || op == "X") cout << a << " x " << b << "=" << a*b << endl;
    else if (op == "/")
    {
        if (b == 0) cout << "Diviser par 0 erreur" << endl;
        else cout << a << " / " << b << " = Q : " << a/b << " R : " << fmod(a, b) << endl;
    }
    else cout << "erreur simbole opératoire invalide" << endl;
}

void disscution()
{
    int age;
    string prenom;

    cout << "Bonjour, je suis l'IA qui n'est pas une IA. "
         << "Vous devez me répondre comme je vous l'ai demandé sinon un message d'erreur va apparaître." << endl;

    cout << "Pour commencer, donne-moi ton prénom :" << endl;
    cin >> prenom;


    cout << "Parfait " << prenom << ", maintenant je dois connaître ton âge. Écris ton âge en chiffres :" << endl;
    cin >> age;

    if (age < 10)
        cout << "Désolé " << prenom << ", mais " << age << " ans ce n'est pas assez pour utiliser l'IA qui n'est pas une IA. Tu dois encore attendre " << 10 - age << " ans." << endl;

    cout << "Maintenant que c'est bon, je vais te donner une question et des réponses. Tu vas me répondre avec le chiffre de la réponse." << endl;
    cout << "Voici ma question : quel langage de programmation utilises-tu couramment ?" << endl;
    cout << ".1 Python" << endl;
    cout << ".2 C++/C" << endl;
    cout << ".3 HTML" << endl;
    cout << ".4 JavaScript/Java" << endl;
    cout << ".5 Scratch" << endl;
    cout << ".6 Autre" << endl;

    int language;
    cin >> language;

    if (language == 1) cout << "Python est un langage informatique très utilisé car il est simple à comprendre et rapide à apprendre. Il est souvent choisi par les débutants." << endl;
    else if (language == 2) cout << "Le C/C++ est réputé pour être un langage de programmation qui offre un grand contrôle de la machine, mais aussi pour être très compliqué." << endl;
    else if (language == 3) cout << "HTML est un langage de balisage utilisé pour créer la structure des pages web." << endl;
    else if (language == 4) cout << "Java et JavaScript sont des langages utilisés pour créer des applications et des sites web interactifs." << endl;
    else if (language == 5) cout << "Scratch est un langage de programmation visuel créé par le MIT pour apprendre facilement la programmation." << endl;
    else if (language == 6) cout << "Il existe beaucoup d'autres langages comme Rust, Go, PHP, C#, Kotlin ou Swift." << endl;
    else cout << "Erreur : réponse invalide." << endl;
}

void installerApp(string app)
{
    cout << "Vous voulez installer quel package : ";
    cin >> app;

    string commande = "sudo apt install " + app;
    system(commande.c_str());
}

void motDePasse()
{
    string caracteres = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789&é~#'{([-|è`_^à@)]°+=/*-¨%";
    string mdp;

    for (int i = 0; i < 16; i++)
    {
        size_t index = static_cast<size_t>(rand()) % caracteres.size();
        mdp += caracteres[index];
    }

    cout << "Mot de passe genere : " << mdp << endl;
}

void text()
{
    string nom, texte;

    cout << "Tapez le nom de votre fichier en entier : " << endl;
    cin >> nom;

    cout << "Tapez votre texte : " << endl;
    cin.ignore();
    getline(cin, texte);

    ofstream fichier(nom);
    if (fichier) fichier << texte;
}

void terminal()
{
    cout << "Terminal : fonction à développer." << endl;
}

void lecteur()
{
    string nom, fiche;

    cout << "Saisissez le nom de votre fichier." << endl;
    cin >> nom;

    ifstream fichier(nom);
    if (fichier)
    {
        while (getline(fichier, fiche))
            cout << fiche << endl;
    }
}

void comparateur()
{
    long a, b;

    cout << "veillez taper votre premier chiffre :";
    cin >> a;
    cout << "veillez taper votr deuxième chiffre :";
    cin >> b;

    if (a < b) cout << a << "<" << b << endl;
    else if (a > b) cout << a << ">" << b << endl;
    else if (a == b) cout << a << "=" << b << endl;
    else cout << "erreur" << endl;
}
