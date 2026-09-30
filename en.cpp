#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

void calculator()
{
    double a, b;
    string op;

    cout << "Write your first number :" << endl;
    cin >> a;
    cout << "Write your operation ( + - x / ):" << endl;
    cin >> op;
    cout << "Write your second number :" << endl;
    cin >> b;

    if (op == "+") cout << a << " + " << b << "=" << a+b << endl;
    else if (op == "-") cout << a << " - " << b << "=" << a-b << endl;
    else if (op == "x" || op == "X") cout << a << " x " << b << "=" << a*b << endl;
    else if (op == "/")
    {
        if (b == 0) cout << "Divide by 0 error" << endl;
        else cout << a << " / " << b << " = Q : " << a/b << " R : " << fmod(a, b) << endl;
    }
    else cout << "Error invalid operator." << endl;
}

void discussion()
{
    string prenom;

    cout << "Hello, I am the AI that is not an AI. "
         << "You must answer me as I ask you, otherwise an error message will appear." << endl;

    cout << "To begin, give me your first name:" << endl;
    cin >> prenom;


    cout << "Now that it's fine, I am going to give you a question and some answers. You will answer me with the number of the answer." << endl;
    cout << "Here is my question: what programming language do you commonly use?" << endl;
    cout << ".1 Python" << endl;
    cout << ".2 C++/C" << endl;
    cout << ".3 HTML" << endl;
    cout << ".4 JavaScript/Java" << endl;
    cout << ".5 Scratch" << endl;
    cout << ".6 Other" << endl;

    int language;
    cin >> language;

    if (language == 1) cout << "Python is a very widely used computer language because it is easy to understand and quick to learn. It is often chosen by beginners." << endl;
    else if (language == 2) cout << "C/C++ is known for being a programming language that offers great control of the machine, but also for being very complicated." << endl;
    else if (language == 3) cout << "HTML is a markup language used to create the structure of web pages." << endl;
    else if (language == 4) cout << "Java and JavaScript are languages used to create applications and interactive websites." << endl;
    else if (language == 5) cout << "Scratch is a visual programming language created by MIT to learn programming easily." << endl;
    else if (language == 6) cout << "There are many other languages such as Rust, Go, PHP, C#, Kotlin or Swift." << endl;
    else cout << "Error: invalid answer." << endl;
}

void installApp(string app)
{
    cout << "Which package do you want to install? ";
    cin >> app;

    string commande = "sudo apt install " + app;
    system(commande.c_str());
}

void generatePassword()
{
    string caracteres = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789&é~#'{([-|è`_^à@)]°+=/*-¨%";
    string mdp;

    for (int i = 0; i < 16; i++)
    {
        size_t index = static_cast<size_t>(rand()) % caracteres.size();
        mdp += caracteres[index];
    }

    cout << "Generated password: " << mdp << endl;
}

void createTextFile()
{
    string nom, texte;

    cout << "Type the full name of your file: " << endl;
    cin >> nom;

    cout << "Type your text: " << endl;
    cin.ignore();
    getline(cin, texte);

    ofstream fichier(nom);
    if (fichier) fichier << texte;
}

void openTerminal()
{
    cout << "Terminal: function to be developed." << endl;
}

void readFile()
{
    string nom, fiche;

    cout << "Enter the name of your file." << endl;
    cin >> nom;

    ifstream fichier(nom);
    if (fichier)
    {
        while (getline(fichier, fiche))
            cout << fiche << endl;
    }
}

void compareNumbers()
{
    long a, b;

    cout << "Please enter your first number:";
    cin >> a;
    cout << "Please enter your second number:";
    cin >> b;

    if (a < b) cout << a << "<" << b << endl;
    else if (a > b) cout << a << ">" << b << endl;
    else if (a == b) cout << a << "=" << b << endl;
    else cout << "error" << endl;
}
