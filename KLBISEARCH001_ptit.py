n, m = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

# Tạo một từ điển lưu trữ vị trí xuất hiện đầu tiên của mỗi số trong dãy a
first_occurrence = {}
result = []

for i in range(n):
    if a[i] not in first_occurrence:
        first_occurrence[a[i]] = i + 1

# Tìm vị trí xuất hiện đầu tiên của mỗi số trong dãy b bằng cách tra từ điển
for num in b:
    if num in first_occurrence:
        result.append(str(first_occurrence[num]))
    else:
        result.append("0")

# In kết quả
print(" ".join(result))
