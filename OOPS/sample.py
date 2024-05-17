# Write a program to print each in line of a file in reverse order in python
# 
def reverse_lines_in_file(file_path):
    with open("D:\CRT classes\OOPS\example.txt", 'r') as file:
        #for line in file:
            # Remove the newline character at the end of the line and reverse the line
            #reversed_line = line.rstrip()[::-1]
            #print(reversed_line)
        for line in reversed(list(file)):
            print(line.rstrip())
           
# Example usage:
reverse_lines_in_file('example.txt')
