#include <iostream>
#include <cstdlib>

struct element
{
	int val;
	element *next;
};

element *e_head = NULL;

void push_back(int v)
{
	element *p = new element, *e = new element;
	e->next = NULL;
	e->val = v;

	if (e_head == NULL)
	{
		p->val = v;
		p->next = NULL;
		e_head = p;
	}
	else
	{
		p = e_head;

		while(p->next != NULL)
			p = p->next;

		p->next = e;
	}
}

void pop_front()
{
	element *p = e_head;

	p = p->next;
	e_head = p;

}

void print()
{
	element *p = new element;
	p = e_head;
	int i = 0;

	while (p->next != NULL)
	{
		std::cout << p->val << "\t";
		p = p->next;
	}
	std::cout << p->val << "\n";
}

int main(int argc, char** argv)
{
	push_back(10);
	push_back(17);
	push_back(2);
	push_back(3);

	std::cout << "Wyniki" << std::endl;
	print();

	pop_front();
	pop_front();

	std::cout << "Wyniki" << std::endl;
	print();

	return 0;
}

