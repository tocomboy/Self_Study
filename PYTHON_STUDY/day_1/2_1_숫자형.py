# ������
a = 123
a = -178
a = 0

# �Ǽ���
a = 1.2
a = -3.45
a = 4.24E10
a = 4.24e-10

# 8������ 16����
a = 0o177
a = 0x8ff
a = 0xABC

# ���Ҽ�
a = 1+2j
a = 3-4J

a = 1+2j
a.real # ���Ҽ��� �Ǽ� �κ� ����
print(a.real)

a.imag # ���Ҽ��� ��� �κ� ����
print(a.imag)

a.conjugate # ���Ҽ��� �ӷ����Ҽ� ���� - 1-2j
print(a.conjugate)

abs(a) # ���Ҽ��� ���밪 ����
print(abs(a))

# ������
# + - * /

a = 3
b = 4
a ** b # ���� ������
print(a ** b)

a % b # ������ ������
print(a % b)

a // b # �Ҽ��� �Ʒ��ڸ� ����.
print(a // b)