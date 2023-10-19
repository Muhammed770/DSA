#include<unordered_set>

using namespace std;

// This is an input struct. Do not edit.
class LinkedList
{
public:
    int value;
    LinkedList *next = nullptr;

    LinkedList(int value) { this->value = value; }
};

LinkedList *removeDuplicatesFromLinkedList(LinkedList *linkedList)
{
    unordered_set<int> mySet;
    LinkedList *current=linkedList;
    LinkedList *prev = nullptr;
    while(current != nullptr) {
        if(mySet.find(current->value) != mySet.end()) {
            prev->next = current->next;
        }else {
            mySet.insert(current->value);
            prev = current;
        }
        current = current->next;
    }
    return linkedList; 
}
