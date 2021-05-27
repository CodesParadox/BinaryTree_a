#pragma once
#include <queue>
#include <string>
#include <memory>
#include <iostream>
namespace ariel
{
    template <typename T>
    class BinaryTree
    {
    private:
        struct Node
        {

            T valy;
            Node *left;
            Node *right;
            Node *parent;
            Node(T v, Node *nodeL = nullptr, Node *nodeR = nullptr, Node *nodeP = nullptr) : valy(v), left(nodeL), right(nodeR), parent(nodeP) {}
        };

        Node *root;

    public:
          BinaryTree<T>() : root(nullptr){};
        ~BinaryTree<T>(){};

        BinaryTree &add_root(T valy)
        {
            //check if there is no root and create new one, otherwise replace the current 
            if(root == nullptr){
                    this->root = new Node(valy)
            }
              else{
                        root->valy = valy;
              }      
            return *this;
        }
        BinaryTree<T> &add_left(T parent, T left)
        {
            return *this;
        }
        BinaryTree<T> &add_right(T parent, T right)
        {
            return *this;
        }
        
           friend std::ostream &operator<<(std::ostream &os, const BinaryTree &trees)
        {
            return os;
        };
       

 class Preorder_iter
        {
        private:
            Node *current;

        public:
            Preorder_iter(Node *ptr = nullptr) : current(ptr){};
            Preorder_iter(): current(nullptr){}

            T &operator*() const
            {
                return current->valy;
            }

            T *operator->() const
            {
                return &(current->valy);
            }
            Preorder_iter &operator++()
            {
                return *this;
            }
            const Preorder_iter operator++(int)
            {
                return *this;
            }
            bool operator==(const Preorder_iter &other) const
            {
                return false;
            }

            bool operator!=(const Preorder_iter &other) const
            {
                return false;
            }
        };
         Preorder_iter end_preorder()
        {
            return Preorder_iter(nullptr);
        }
        Preorder_iter begin_preorder()
        {
            return Preorder_iter(root);
        }
 

        class Inorder_iter
        {
        private:
            Node *current;

        public:
            Inorder_iter(Node *ptr = nullptr) : current(ptr){};
            Inorder_iter(): current(nullptr){}


            T &operator*() const
            {
                return current->valy;
            }

            T *operator->() const
            {
                return &(current->valy);
            }
            Inorder_iter &operator++()
            {
                return *this;
            }
            const Inorder_iter operator++(int)
            {
                return *this;
            }
            bool operator==(const Inorder_iter &other) const
            {
                return false;
            }

            bool operator!=(const Inorder_iter &other) const
            {
                return false;
            }
        };
               Inorder_iter end_inorder()
        {
            return Inorder_iter(nullptr);
        }
        Inorder_iter begin_inorder()
        {
            return Inorder_iter(root);
        }

 
        class Postorder_iter
        {
        private:
            Node *current;

        public:
            Postorder_iter(Node *ptr = nullptr) : current(ptr){};
            Postorder_iter():current(nullptr){}


            T &operator*() const
            {
                return current->valy;
            }

            T *operator->() const
            {
                return &(current->valy);
            }
            Postorder_iter &operator++()
            {
                return *this;
            }
            const Postorder_iter operator++(int)
            {
                return *this;
            }
            bool operator==(const Postorder_iter &other) const
            {
                return false;
            }

            bool operator!=(const Postorder_iter &other) const
            {
                return false;
            }
        };

        Inorder_iter begin()
        {
            return begin_inorder();
        };
        Inorder_iter end()
        {
            return end_inorder();
        };
    
        Postorder_iter end_postorder()
        {
            return Postorder_iter(root);
        }
        Postorder_iter begin_postorder()
        {
            return Postorder_iter(nullptr);
        }
    };
}





