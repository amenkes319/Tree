#include "Tree.h"

Tree::Tree()
    : root('a')
{
}

void Tree::Fill(std::string fileName)
{
    std::ifstream file(fileName);
    std::string line;
    getline(file, line);

    root = TreeNode(line[0]);
    for (int i = 1; i < line.length(); i++)
    {

    }
}

void Tree::Add(char c, TreeNode* node)
{

}

void Tree::Preorder()
{

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