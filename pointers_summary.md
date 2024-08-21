# Learning Summary of Pointers and Linked Lists

## Pointers:

Pointers are as simple as they sound: they are variables pointing at a memory address. Pointers are extremely useful and powerful because they allow you to access a variable or function without actually having to call it. You can call the value stored in the memory address a pointer is pointing at by something called dereferencing. This allows you to access the actual value stored at the pointed memory address. 

## Linked Lists:

Linked lists are closely tied with pointers and utilize their benefits. This is displayed by the structure of linked lists. A linked list is made up of nodes, where each node contains a value and a pointer to the next node in the list. The last node points to a null value, indicating the end of the list. From this, you could wonder what is the difference between this and an array. The difference between the two is that linked lists are dynamic in size, meaning that if you wanted to add or remove a node, you simply just change the order of the pointers and make sure your last value points to null. This makes it extremely useful when it comes to structuring your data. One thing to note is tat you have to traverse to your desired node meaning traversing through the entire list until you reach your desired spot.

## Doubly Linked List

A doubly linked list is an extension of the linked list that enhances its functionality by giving an additional pointer. In a singly linked list, each node contains a pointer to the next node, but in a doubly linked list, each node contains two pointers one pointing to the next node and another pointing to the previous node. This link allows for more flexible traverse of the list, as you can move both forwards and backwards through the list. Additionaly, I was able to implement a "delete" from back function that deletes nodes from the back being made possible by a tail pointer. 