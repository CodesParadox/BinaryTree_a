#pragma once
using namespace std;
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
namespace ariel
{

    template <typename T>
    class BinaryTree
    {

    private:
        struct Node
        {
            T Val;
            Node *left;
            Node *right;
            Node *parent;
            Node(T valy) : Val(valy), left(NULL), right(NULL), parent(NULL){}
        };
        Node *root;

    public:
        BinaryTree<T>(){ root(nullptr){}
            this->root=nullptr;
        }

        ~BinaryTree<T>(){};

        BinaryTree &add_root(T root)
        {
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
       
       
        class preorder
        {

        private:
            Node *pCurrent;

        public:
            preorder(Node *ptr = nullptr)
                : pCurrent(ptr){}

            T &operator*() const
            {return pCurrent->Val; }

            T *operator->() const {
                return &(ptr->Val);
            }

            preorder &operator++(){     return *this;  }

            const preorder operator++(int) {
                preorder temp = *this;
                return temp;
            }

            bool operator==(const preorder &r) const
            {
                return pCurrent == r.pCurrent;
            }

            bool operator!=(const preorder &r) const
            {
                return pCurrent != r.pCurrent;
            }
        }; 
        preorder begin_preorder()
        {
            return preorder{root};
        }

        preorder end_preorder()
        {
            return preorder{};
        }
        
        
        class inorder
        {

        private:
            Node *pCurrent;

        public:
            inorder(Node *ptr = nullptr)
                : pCurrent(ptr){}

            T &operator*() const {
                return pCurrent->Val; }

            T *operator->() const{
                return &(pCurrent->Val);  }

            inorder &operator++()  {
                return *this; }

            const inorder operator++(int)
            {
              return *this;
            }

            bool operator==(const inorder &r) const
            {
                return pCurrent == r.pCurrent;
            }

            bool operator!=(const inorder &r) const
            {
                return pCurrent != r.pCurrent;
            }
                    postorder begin_postorder()
        {
            return postorder{root};
        }

        };
        inorder begin_inorder()
        {
            return inorder{root};
        }
        inorder end_inorder()
        {
            
            return inorder{};
        }
       
       
        class postorder
        {

        private:
            Node *pCurrent;

        public:
            postorder(Node *ptr = nullptr)
                : pCurrent(ptr) { }

            T &operator*() const
            {
                return pCurrent->Val;
            }

            T *operator->() const {
                return &(pCurrent->Val);
            }

            postorder &operator++() {
                return *this;
            }

            const postorder operator++(int) {
              return *this; }

            bool operator==(const postorder &r) const {
                return pCurrent == r.pCurrent; }

            bool operator!=(const postorder &r) const{
                return pCurrent != r.pCurrent;}
        };
        postorder begin_postorder()
        {
            return postorder{root};
        }
        postorder end_postorder()
        {
            // return nullptr;
            return postorder{};
        }
        inorder begin()
        {
            return begin_inorder();
        };
        inorder end()
        {
            return end_inorder();
        };

    }; 

};