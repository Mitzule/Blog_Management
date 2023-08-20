#include "articol.h"

Articol::Articol(const std::string& titlu, const std::string& autor, const std::string& continut, const std::string& data,
        Comentariu* comentarii, int numar_comentarii, int like, int dislike, int love)
    : titlu(titlu), autor(autor), continut(continut), data(data),
      comentarii(comentarii), numar_comentarii(numar_comentarii),
      like(like), dislike(dislike), love(love) {}

std::string Articol::getTitlu() const {
    return titlu;
}

std::string Articol::getAutor() const {
    return autor;
}

std::string Articol::getContinut() const {
    return continut;
}

std::string Articol::getData() const {
    return data;
}

Comentariu* Articol::getComentarii() const {
    return comentarii;
}

int Articol::getNumarComentarii() const {
    return numar_comentarii;
}

int Articol::getLike() const {
    return like;
}

int Articol::getDislike() const {
    return dislike;
}

int Articol::getLove() const {
    return love;
}
