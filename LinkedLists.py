class ListNode:
    def __init__(self, value):
        self.value = value
        self.next = None


class LinkedList:
    def __init__(self, value):
        self.head = ListNode(value)
        self.length = 1

    def append(self, value):
        current_node = self.head

        while current_node.next is not None:
            current_node = current_node.next

        new_node = ListNode(value)
        current_node.next = new_node
        self.length += 1

    def insert(self, value, index):
        last_index = self.length-1
        i = 0

        if index == 0:
            old_head = self.head
            self.head = ListNode(value)
            self.head.next = old_head
            self.length += 1

        elif index == last_index + 1:
            self.append(value)

        elif 0 < index < last_index + 1:
            current_node = self.head
            while i != index - 1:
                current_node = current_node.next
                i += 1

            new_node = ListNode(value)
            new_node.next = current_node.next
            current_node.next = new_node
            self.length += 1

        elif index > last_index + 1 or index < 0:
            print("Index is out of range...")

    def remove(self, index):
        last_index = self.length - 1
        i = 0

        if index == 0:
            self.head = self.head.next
            self.length -= 1

        elif index == last_index:
            current_node = self.head
            while i < last_index - 1:
                current_node = current_node.next
                i += 1

            current_node.next = None
            self.length -= 1

        elif 0 < index < last_index:
            current_node = self.head
            while i != index-1:
                current_node = current_node.next
                i += 1

            deleted_element = current_node.next
            current_node.next = deleted_element.next
            self.length -= 1

        elif index > last_index + 1 or index < 0:
            print("Index is out of range...")


    def printList(self):
        current_node = self.head
        print(f"{current_node.value} ->", end='')
        while current_node.next is not None:
            current_node = current_node.next
            print(f" {current_node.value} ->", end='')


linked_list = LinkedList(1)
linked_list.append(3)
linked_list.insert(2, 1)
linked_list.append(4)
linked_list.remove(0)
linked_list.printList()