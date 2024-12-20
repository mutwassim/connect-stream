// LinkedList.h
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <QString>

struct UserNode {
    QString username;
    QString password;
    UserNode* next;
};

class LinkedList {
public:
    LinkedList();
    ~LinkedList();
    void addUser(const QString& username, const QString& password);
    bool isUserExist(const QString& username, const QString& password);
private:
    UserNode* head;
};

#endif // LINKEDLIST_H
