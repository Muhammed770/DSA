using namespace std;
#include <cmath>
// This is an input class. Do not edit.
class BinaryTree
{
public:
    int value;
    BinaryTree *left = nullptr;
    BinaryTree *right = nullptr;

    BinaryTree(int value) { this->value = value; }
};

int evaluateExpressionTree(BinaryTree *node)
{
    if(node == nullptr ) {
        //handle here
        return 0;
    }
    if (node->left == nullptr && node->right == nullptr)
    {
        return node->value;
    }
    int l = evaluateExpressionTree(node->left);
    int r = evaluateExpressionTree(node->right);
    switch (node->value)
    {
    case -1:
        return l + r;
    case -2:
        return l - r;
    case -3:
        if (r != 0)
            return round(l / r);
        else
            //or could throw eror
            return 0;

    case -4:
        return l * r;
    default:
        return 0;
    }
}