def tim_so(n, k):
    so_luong_so_le = n // 2
    if n%2!=0:
        so_luong_so_le+=1
    if k <= so_luong_so_le:
        return 2 * k - 1
    else:
        return 2 * (k - so_luong_so_le)

# Nhập dữ liệu
n, k =[int(x) for x in input().split()]

# Xuất kết quả
ket_qua = tim_so(n, k)
print(ket_qua)