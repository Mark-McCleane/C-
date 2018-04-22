void List::push_front(const SimpleString &d)
{
	Node *new_node = new Node(d, 0);
	if (!head) {
		head = new_node;
		return;
	}
	new_node->next = head;
	head = new_node;
	return;
}