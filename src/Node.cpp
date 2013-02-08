#include "Node.h"

Node::Node()
{
	m_parent = nullptr;
}

Node::~Node()
{}

Node* Node::getParent()
{
	return m_parent;
}

std::vector<Node*>& Node::getChildren()
{
	return m_children;
}

void Node::addChild(Node* child)
{
	m_children.push_back(child);
}

void Node::clearChildren()
{
	m_children.clear();
}

void Node::setParent(Node* parent)
{
	m_parent = parent;
}
