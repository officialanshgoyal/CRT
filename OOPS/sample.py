# Write a program to print each in line of a file in reverse order in python
# 
with open("D:\CRT classes\OOPS\example.txt", 'r') as file:
    content = file.readlines()

no_char = sum(len(line) for line in content)
no_words = sum(len(line.split()) for line in content)
no_lines = len(content)


print(f"Number of characters: {no_char}")
print(f"Number of words: {no_words}")
print(f"Number of lines: {no_lines}")


def nearly_equal(a, b):
    if len(a) != len(b):
        return False

    mutation_count = 0
    for char_a, char_b in zip(a, b):
        if char_a != char_b:
            mutation_count += 1
            if mutation_count > 1:
                return False

    return mutation_count == 1

# Test the function
string_a = "hello"
string_b = "hxllo"
result = nearly_equal(string_a, string_b)
print(result)
  #      for line in reversed(list(file)):
  #          print(line.rstrip())
           
# Example usage:
#reverse_lines_in_file('example.txt')
def merge_sort(arr):
    if len(arr) > 1:
        mid = len(arr) // 2
        left_half = arr[:mid]
        right_half = arr[mid:]

        merge_sort(left_half)
        merge_sort(right_half)

        i = j = k = 0

        while i < len(left_half) and j < len(right_half):
            if left_half[i] < right_half[j]:
                arr[k] = left_half[i]
                i += 1
            else:
                arr[k] = right_half[j]
                j += 1
            k += 1

        while i < len(left_half):
            arr[k] = left_half[i]
            i += 1
            k += 1

        while j < len(right_half):
            arr[k] = right_half[j]
            j += 1
            k += 1

    return arr

# Example Usage
arr = [38, 27, 43, 3, 9, 82, 10]
sorted_arr = merge_sort(arr)
print(sorted_arr)


def selection_sort(arr):
    n = len(arr)
    for i in range(n):
        min_idx = i
        for j in range(i+1, n):
            if arr[j] < arr[min_idx]:
                min_idx = j
        arr[i], arr[min_idx] = arr[min_idx], arr[i]
    return arr

# Example Usage
arr = [64, 25, 12, 22, 11]
sorted_arr = selection_sort(arr)
print("Sorted array:", sorted_arr)
