// Stack.h
#ifndef STACK_H
#define STACK_H

#include <QString>
#include <QList>

class Stack {
public:
    Stack();
    void push(const QString& data);
    QString pop();
    bool isEmpty();
private:
    QList<QString> stack;
};

#endif // STACK_H
