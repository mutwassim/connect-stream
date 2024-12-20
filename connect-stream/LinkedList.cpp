// // LinkedList.cpp
// #include "LinkedList.h"
// #include <iostream>

// LinkedList::LinkedList() {
//     head = nullptr;
// }

// LinkedList::~LinkedList() {
//     UserNode* current = head;
//     UserNode* nextNode;
//     while (current) {
//         nextNode = current->next;
//         delete current;
//         current = nextNode;
//     }
// }

// void LinkedList::addUser(const QString& username, const QString& password) {
//     UserNode* newUser = new UserNode{username, password, nullptr};
//     if (!head) {
//         head = newUser;
//     } else {
//         UserNode* temp = head;
//         while (temp->next) {
//             temp = temp->next;
//         }
//         temp->next = newUser;
//     }
// }

// bool LinkedList::isUserExist(const QString& username, const QString& password) {
//     UserNode* current = head;
//     while (current) {
//         if (current->username == username && current->password == password) {
//             return true;
//         }
//         current = current->next;
//     }
//     return false;
// }
