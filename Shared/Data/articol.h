#ifndef ARTICOL_H
#define ARTICOL_H

#include <string>
#include "comentariu.h"

class Articol {
private:
    std::string titlu;
    std::string autor;
    std::string continut;
    std::string data;
    Comentariu* comentarii;
    int numar_comentarii;
    int like;
    int dislike;
    int love;

public:
    Articol(const std::string& titlu, const std::string& autor, const std::string& continut, const std::string& data,
            Comentariu* comentarii, int numar_comentarii, int like, int dislike, int love);

    std::string getTitlu() const;
    std::string getAutor() const;
    std::string getContinut() const;
    std::string getData() const;
    Comentariu* getComentarii() const;
    int getNumarComentarii() const;
    int getLike() const;
    int getDislike() const;
    int getLove() const;
};

#endif
