using namespace std;

// This is an input struct. Do not edit.
class LinkedList
{
public:
    int value;
    LinkedList *next = nullptr;

    LinkedList(int value) { this->value = value; }
};

LinkedList *middleNode(LinkedList *linkedList)
{
    int count = 0;
    LinkedList *current = linkedList;
    while (current != nullptr) {
        count++;
        current = current->next;
    }
    int n = (count / 2) + 1;
    LinkedList *current = linkedList;
    while (current != nullptr && n != 1)
    {
        current = current->next;
        n--;
    }
    return current;
}