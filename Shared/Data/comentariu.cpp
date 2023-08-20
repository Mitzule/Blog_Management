#include "comentariu.h"

Comentariu::Comentariu(const std::string& text, const std::string& autor, int data, const std::string& nume,
                       int like, int love, int dislike)
    : text(text), autor(autor), data(data), nume(nume),
      like(like), love(love), dislike(dislike) {}

std::string Comentariu::getText() const {
    return text;
}

std::string Comentariu::getAutor() const {
    return autor;
}

int Comentariu::getData() const {
    return data;
}

std::string Comentariu::getNume() const {
    return nume;
}

int Comentariu::getLike() const {
    return like;
}

int Comentariu::getLove() const {
    return love;
}

int Comentariu::getDislike() const {
    return dislike;
}
