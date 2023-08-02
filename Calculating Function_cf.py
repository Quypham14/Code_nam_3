def calculate_f(n):
    if n % 2 == 0:
        return n // 2
    return -(n // 2) - 1


n = int(input())
result = calculate_f(n)
print(result)
