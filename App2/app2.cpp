#include <iostream>
#include <fstream>
#include "C:\Users\Alesia\Desktop\Proiect_Blog\Shared\Data\comentariu.h"

void vizualizare_comentarii_articol(const std::string& titlu) {
    std::ifstream file("C:\\Users\\Alesia\\Desktop\\Proiect_Blog\\Shared\\Files\\comentarii.txt");
    if (!file.is_open()) {
        std::cout << "Eroare la deschiderea fisierului comentarii.txt\n";
        return;
    }

    std::string line;
    bool foundArticol = false;

    while (std::getline(file, line)) {
        if (line == titlu) {
            foundArticol = true;
            std::cout << "Comentarii pentru articolul \"" << titlu << "\":\n";
        } else if (foundArticol) {
            std::cout << line << "\n";
        }

        if (line.empty()) {
            foundArticol = false;
        }
    }

    file.close();
}

int main() {
    std::string titlu;

    // Citim titlul articolului pentru a vizualiza comentariile
    std::cout << "Titlul articolului: ";
    std::getline(std::cin, titlu);

    // Vizualizam comentariile pentru articolul specificat
    vizualizare_comentarii_articol(titlu);

    return 0;
}