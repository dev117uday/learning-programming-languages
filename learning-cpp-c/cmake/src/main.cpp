#include <iostream>

using namespace std;

struct Tree {
    Tree* left;
    Tree* right;
    int number;
};

int height_of_bst(Tree *root) {
    if (root == nullptr) {
        return 0;
    } else {
        int lDepth = height_of_bst(root->left);
        int rDepth = height_of_bst((root->right));

        if( lDepth > rDepth) {
            return lDepth+1;
        } else {
            return rDepth+1;
        }
    }
}

int main(){
    Tree my_tree{};
    cout << "20 10 40 30 50 \n";
    my_tree.number = 10;
    my_tree.left = new Tree{nullptr, nullptr,20};
    my_tree.right = new Tree{nullptr, nullptr,30};
    my_tree.right->left = new Tree{nullptr, nullptr, 40};
    my_tree.right->right = new Tree{nullptr, nullptr,50};
    cout << "Size : " << height_of_bst(&my_tree) << endl;

}