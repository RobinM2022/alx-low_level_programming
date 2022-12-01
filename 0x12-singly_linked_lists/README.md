# 2. C - Singly linked lists

I learned about linked lists, when and why to use them and how to build and use them. 

## 0-print_list.c
* Has a function that prints all the elements of a list_t list.
* Prototype: size_t print_list(const list_t *h);
* Return: the number of nodes.
* If str is NULL, print [0] (nil).

## 1-list_len.c
* Returns the number of elements in a linked list_t list.
* Prototype: size_t list_len(const list_t *h);

## 2-add_node.c
* Adds a new node at the beginning of a list_t list.
* Prototype: list_t *add_node(list_t **head, const char *str);
* Return: the address of the new element, or NULL if it failed
* str needs to be duplicated
* Allowed to use strdup

## 3-add_node_end.c
* Adds a new node at the end of a list_t list.
* Prototype: list_t *add_node_end(list_t **head, const char *str);
* Return: the address of the new element, or NULL if it failed
* str needs to be duplicated
* Allowed to use strdup

## 4-free_list.c
* Frees a list_t list.
* Prototype: void free_list(list_t *head);

## 100-first.c
* A function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.
* The use of the printf function is allowed.

