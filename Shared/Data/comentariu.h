#ifndef COMENTARIU_H
#define COMENTARIU_H

#include <string>

class Comentariu {
private:
    std::string text;
    std::string autor;
    int data;
    std::string nume;
    int like;
    int love;
    int dislike;

public:
    Comentariu(const std::string& text, const std::string& autor, int data, const std::string& nume,
               int like, int love, int dislike);

    std::string getText() const;
    std::string getAutor() const;
    int getData() const;
    std::string getNume() const;
    int getLike() const;
    int getLove() const;
    int getDislike() const;
};

#endif
