# def merge_sort(array):
#     if len(array)<=1:
#         return array
#     mid = len(array) // 2
#     left = merge_sort(array[:mid])
#     right = merge_sort(array[mid:])

#     i,j,k = 0,0,0

#     while i < len(left) and j <len(right):
#         if left[i] < right[j]:
#             array[k] = left[i]
#             i += 1
#         else:
#             array[k] = right[j]
#             j += 1
#         k+=1
    
#     if i==len(left):
#         while j < len(right):
#             array[k] = right[j]
#             j += 1
#             k += 1
#     elif j==len(right):
#         while i < len(left):
#             array[k] = left[i]
#             i += 1
#             k += 1
#     return array


# n=int(input())
# num = []

# for _ in range(n):
#     num.append(int(input()))

# num = merge_sort(num)

# for i in num:
#     print(i)
    
    
n=int(input())
num=[]

for _ in range(n):
    x = int(input())
    num.append(x)

for i in sorted(num):
    print(i)