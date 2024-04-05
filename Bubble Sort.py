import random
import time

# # 1 davaleba
# x = random.sample(range(1, 101), 10)
# x.sort()
# print("Sorted List: ", x)

#2 davaleba

# y = sorted(x, reverse=True)
# print("2 Sorted List: ", y)

#3
# დაწერე პროგრამა რომელიც შეადგენს შემთხვევით მთელ რიცხვთა სიას და
# შექმნილი სიის სორტირება სცადე ორი განსხვავებული მეთოდით (მაგ. Bubble
# და Selection). დათვალე თითოეული მეთოდისთვის სორტირებისთვის საჭირო
# დრო და დააკვირდი რომელი უფრო ეფექტურია მცირე(1000 ელემენტი),
# საშუალო(2000 ელემენტი) და გრძელი(3000 ელემენტი) სიის შემთხვევებში.

def b_sort(arr):
    n = len(arr)
    for i in range(n - 1):
        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]

def s_sort(arr):
    n = len(arr)
    for i in range(n):
        min_index = i
        for j in range(i + 1, n):
            if arr[j] < arr[min_index]:
                min_index = j
        arr[i], arr[min_index] = arr[min_index], arr[i]

def r_list(size):
    return random.sample(range(1, 10001), size)

def time_sorting(sorting_function, arr):
    start_time = time.time()
    sorting_function(arr)
    end_time = time.time()
    return end_time - start_time

sizes = [1000, 2000, 3000]

for size in sizes:
    random_list = r_list(size)

    bubble_time = time_sorting(b_sort, random_list.copy())

    selection_time = time_sorting(s_sort, random_list.copy())

    print(f"List Size: {size}")
    print(f"Bubble Sort: {bubble_time:.6f} seconds")
    print(f"Selection Sort: {selection_time:.6f} seconds")
