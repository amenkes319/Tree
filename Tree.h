#pragma once

#include <stdio.h>
#include <iostream>
#include <fstream>

struct TreeNode
{
    char value;
    TreeNode* leftChild;
    TreeNode* rightChild;

    TreeNode(char c)
    {
        value = c;
        leftChild = nullptr;
        rightChild = nullptr;
    }

    TreeNode(char c, TreeNode* left, TreeNode *right)
    {
        value = c;
        leftChild = left;
        rightChild = right;
    }
};

class Tree
{
public:
    Tree();
    void Fill(std::string fileName);
    void Preorder();
    void Inorder();
    void Postorder();
    int GetNumNodes();
    int GetNumLeaves();
    int GetHeight();
    int GetWidth();
    void Clear();
    bool IsDescendant();
    void DeleteLeaves();
    bool DeleteNode(TreeNode* node);

private:
    void Add(char c, TreeNode* node);

    TreeNode root;
};