#include <iostream>
#include <fstream>
#include "C:\\Users\\Mitzu\\Desktop\\Proiect_Blog\\Shared\\Files\\articole.txt"
#include "C:\\Users\\Mitzu\\Desktop\\Proiect_Blog\\Shared\\Files\\comentarii.txt"

void vizualizare_articole() {
    std::ifstream file("C:\\Users\\Alesia\\Desktop\\Proiect_Blog\\Shared\\Files\\articole.txt");
    if (!file.is_open()) {
        std::cout << "Eroare la deschiderea fisierului articole.txt\n";
        return;
    }

    int numar_articole;
    file >> numar_articole;
    file.ignore(); // Ignoram caracterul newline

    for (int i = 0; i < numar_articole; i++) {
        std::string titlu, autor, continut;
        std::string data_str;
        int like, dislike, love;

        std::getline(file, titlu);
        std::getline(file, autor);
        std::getline(file, continut);
        std::getline(file, data_str);
        file >> like >> dislike >> love;
        file.ignore(); // Ignoram caracterul newline

        std::string data_part = data_str.substr(0, data_str.find(' '));
        int data = std::stoi(data_part);

        Articol articol(titlu, autor, continut, data_str, nullptr, 0, like, dislike, love);

        std::cout << "Titlu: " << articol.getTitlu() << "\n";
        std::cout << "Autor: " << articol.getAutor() << "\n";
        std::cout << "Continut: " << articol.getContinut() << "\n";
        std::cout << "Data: " << data_str << "\n";
        std::cout << "Like-uri: " << articol.getLike() << "\n";
        std::cout << "Dislike-uri: " << articol.getDislike() << "\n";
        std::cout << "Love-uri: " << articol.getLove() << "\n";

        std::cout << "\n";
    }

    file.close();
}

int main() {
    vizualizare_articole();

    return 0;
}
