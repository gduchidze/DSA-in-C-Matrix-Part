class StackNode:
    def __init__(self, value):
        self.value = value
        self.next = None



class Stack:
    def __init__(self, value):
        self.head = StackNode(value)
        self.length = 1

    def size(self):
        return self.length

    def empty(self):
        return self.length == 0

    def top(self):
        assert not self.empty(), "The Stack is empty"
        return self.head.value

    def push(self, value):
        old_head = self.head
        self.head = StackNode(value)
        self.head.next = old_head
        self.length += 1

    def pop(self):
        assert not self.empty(), "The Stack is empty"
        removed = self.head
        self.head = self.head.next
        self.length -= 1
        return removed

    def __iter__(self):
        node = self.head
        while node is not None:
            yield node.value
            node = node.next


st = Stack(1)

st.push(2)
# print(st.size())
for node in st:
    print(node)