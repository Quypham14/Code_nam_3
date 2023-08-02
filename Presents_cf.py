def tim_nguoi_tang_qua(n, nguoi_nhan_qua):
    nguoi_tang_qua = [0] * n
    for i in range(n):
        nguoi_tang_qua[nguoi_nhan_qua[i] - 1] = i + 1
    return nguoi_tang_qua

# Đọc dữ liệu đầu vào
n = int(input())
nguoi_nhan_qua = list(map(int, input().split()))

# Tìm người tặng quà cho mỗi người bạn
ket_qua = tim_nguoi_tang_qua(n, nguoi_nhan_qua)

# In kết quả ra màn hình
print(*ket_qua)