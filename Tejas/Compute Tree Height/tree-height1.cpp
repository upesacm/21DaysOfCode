#include <algorithm>
#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Node {
  public:
    int value;
    vector<int> children;

    Node(int value) : value(value) {}

    void add_child(int child) {
        this->children.push_back(child);
    }

    int get_size() {
        return this->children.size();
    }
};

class Tree {
  private:
    int number_of_nodes;
    Node *root;
    vector<int> parents;
    map<int, Node *> nodes;

    void construct_tree() {
        for (int i = 0; i < this->number_of_nodes; i++) {
            this->nodes[i] = new Node(i);
        }

        for (int i = 0; i < this->number_of_nodes; i++) {
            int parent = this->parents[i];
            if (parent == -1) {
               
                this->root = this->nodes[i];
            } else {
                
                this->nodes[parent]->add_child(i);
            }
        }
    }

    int get_max_height(Node *node) {
        if (node == NULL) return 0; 
        if (node->get_size() == 0) return 1;

        int height = 0;
        for (int i = 0; i < node->get_size(); i++) {
            int height_of_this_child = this->get_max_height(this->nodes[node->children[i]]);
            height = max(height, height_of_this_child);
        }

        return height + 1;
    }

  public:

    void read() {
        cin >> this->number_of_nodes;
        this->parents.resize(this->number_of_nodes);
        for (int i = 0; i < this->number_of_nodes; i++) {
            cin >> this->parents[i];
        }
    }

    int get_height() {
        this->construct_tree();
        this->get_max_height(this->root);
    }

    void print_tree() {
        for (int i = 0; i < number_of_nodes; i++) {
            if (nodes.find(i) != nodes.end()) {
                cout << nodes[i]->value << ": ";
                for (int j = 0; j < nodes[i]->get_size(); ++j) {
                    cout << nodes[i]->children[j] << " ";
                }
                cout << endl;
            }
        }
    }
};


int main() {
	
    Tree *tree = new Tree();
    tree->read();

    cout << tree->get_height() << endl;

    return 0;
}
