#include "Tree.h"

Tree::Tree()
{
    root = NULL;
}

void Tree::Fill(std::string fileName)
{
    std::ifstream file(fileName);
    std::string line;
    getline(file, line);
    root = new TreeNode(line[0]);
    for (int i = 1; i < line.length(); i++)
    {
        Add(line[i], root);
    }
    
    printInorder(root);
}

void Tree::Add(char c, TreeNode* node)
{
    if (c < node->value)
    {
        if (node->leftChild == NULL)
            node->leftChild = new TreeNode(c);
        else
            Add(c, node->leftChild);
    }
    else
    {
        if (node->rightChild == NULL)
            node->rightChild = new TreeNode(c);
        else
            Add(c, node->rightChild);
    }
}

void Tree::Preorder()
{

}

void Tree::printInorder(TreeNode* node) 
{ 
    if (node == NULL) 
        return;
    
    /* first recur on left child */
    printInorder(node->leftChild); 
  
    /* then print the data of node */
    std::cout << node->value << " "; 
  
    /* now recur on right child */
    printInorder(node->rightChild); 
} 

void Tree::Inorder()
{

}

void Tree::Postorder()
{

}

int Tree::GetNumNodes()
{
    return 0;
}

int Tree::GetNumLeaves()
{
    return 0;
}

int Tree::GetHeight()
{
    return 0;
}

int Tree::GetWidth()
{
    return 0;
}

void Tree::Clear()
{

}

bool Tree::IsDescendant()
{
    return true;
}

void Tree::DeleteLeaves()
{

}

bool Tree::DeleteNode(TreeNode* node)
{
    return true;
}