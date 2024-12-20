// Stack.cpp
#include "Stack.h"

Stack::Stack() {}

void Stack::push(const QString& data) {
    stack.push_back(data);
}

QString Stack::pop() {
    if (stack.isEmpty()) return QString();
    return stack.takeLast();
}

bool Stack::isEmpty() {
    return stack.isEmpty();
}
