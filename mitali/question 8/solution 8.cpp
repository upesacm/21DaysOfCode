#include <iostream>
#include <vector>

enum node_type { tag, label, value };

struct parse_tree_node {
  node_type nt;
  std::string name;
  std::vector<struct parse_tree_node*> children;
  struct parse_tree_node* parent;
};

void utility_free(struct parse_tree_node* ptn) {
  for(auto const& value: ptn->children)
    utility_free(value);
  delete ptn;
}

int main(void) {
  struct parse_tree_node* root = new struct parse_tree_node;
  struct parse_tree_node* current_level = root;
  current_level->name = "ROOT";
  current_level->nt = tag;
  int n, q;

  std::cin >> n >> q;

  // parse lines into tree
  for(int i = 0; i < n; i++) {
    while(std::cin.get() != '<') ;

    if(std::cin.peek() != '/') {
      char next_char;
      bool expecting_space = true;
      bool need_next = false;
      bool done = false;
      bool quoted_mode = false;

      struct parse_tree_node* new_node = new struct parse_tree_node;
      new_node->nt = tag;
      current_level->children.push_back(new_node);
      new_node->parent = current_level;
      current_level = new_node;

      while(!done) {
        next_char = std::cin.get();

        if(!quoted_mode)
          switch(next_char) {
            case '"': quoted_mode = true; need_next = true; break;
            case '>': done = true; break;
            case ' ':
              if(!expecting_space) need_next = true;
              break;
            case '=': {
              struct parse_tree_node* parent_node = new_node;
              new_node = new struct parse_tree_node;
              new_node->nt = value;
              parent_node->children.push_back(new_node);
              expecting_space = true;
              need_next = false;
              break;
            }
            default:
              if(need_next) {
                struct parse_tree_node* parent_node = current_level;;
                new_node = new struct parse_tree_node;
                new_node->nt = label;
                parent_node->children.push_back(new_node);
                need_next = false;
              }
              new_node->name.append(1, next_char);
              expecting_space = false;
              break;
          }
        else {
          if(next_char != '"')
            new_node->name.append(1, next_char);
          else
            quoted_mode = false;
        }
      }
    } else {
      current_level = current_level->parent;
      while(std::cin.get() != '>') ;
    }
  }

  // process queries
  for(int i = 0; i < q; i++) {
    struct parse_tree_node* current_level = root;
    std::string qstr_part;
    char peek_char;
    bool tilde_mode = false;

    while((peek_char = std::cin.peek()) == ' ' ||
          peek_char == '\n')
      std::cin.get();

    while(true) {
      char next_char = std::cin.get();

      if(next_char == '.' || next_char == '~') {
        bool found = false;

        tilde_mode = next_char == '~';

        for(auto const& value: current_level->children)
          if(value->nt == tag && value->name == qstr_part) {
            current_level = value;
            qstr_part = "";
            found = true;
            break;
          }
        if(!found) {
          char drop_char;
          std::cout << "Not Found!" << std::endl;
          while((drop_char = std::cin.get()) != '\n' && drop_char != EOF) ;
          break;
        }
      } else if(next_char == '\n' || next_char == EOF) {
        bool found = false;

        if(tilde_mode)
          for(auto const& value: current_level->children)
           if(value->nt == label && value->name == qstr_part) {
             // This next line is a little sketchy.
             std::cout << value->children[0]->name << std::endl;
             found = true;
             break;
           }
        if(!found)
          std::cout << "Not Found!" << std::endl;
        break;
      } else {
        qstr_part.append(1, next_char);
      }
    }
  }

  utility_free(root);
  return 0;
}
