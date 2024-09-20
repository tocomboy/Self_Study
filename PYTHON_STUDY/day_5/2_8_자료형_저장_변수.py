import sys # sys.getrefcount(��ü)

print(type(3)) # ���̽㿡�� 3�� ����� �ƴ� ������. (���ϴ� ��)

a = 3
b = 3
print(a is b) # ������ ��ü�� ����Ű���� Ȯ��. - a = 3 �� �Է��ϴ� ���� ������ ��ü 3 �� ������. -> ���� b = 3 �� �ۼ��ϸ� a���� ������ ������ ��ü 3 �� �����ϰ� ����Ű�� ��.

print(sys.getrefcount(3)) # �ڷ����� ���� ���� ������ �˷��ִ� �Լ�.
c = 3
print(sys.getrefcount(3)) # c = 3�� �ۼ����� ������ ��ü 3�� ���� ���� ������ 1�� �þ.

# ���� ����� ���
a, b = ('python', 'life') # Ʃ�� ���
print(a, b)

(a, b) = 'python', 'life' # Ʃ�� ���
print(a, b)

[a, b] = ['python', 'life'] # ����Ʈ ���
print(a, b)

a = b = 'python'

a = 3
b = 5
a, b = b, a # �� ���� �����ϰ� �ٲٴ� ��
print(a)
print(b)

# �޸𸮿� ������ ���� ���ֱ�
a = 3
b = 3
sys.getrefcount(3)
del(a)
del(b)
sys.getrefcount(3)

# ����Ʈ�� ������ �ְ� ����
a = [1, 2, 3]
b = a # ���� ����Ʈ�� ����Ű�� ��.
a[1] = 4 # a ����Ʈ�� ���� �ٲٸ� b ����Ʈ�� ���� �Բ� �ٲ�
print(a)
print(b)

# ����Ʈ ������ �� �ٸ� ��ü�� ����Ű�� ����� ���
# 1. [:] �̿�
a = [1, 2, 3]
b = a[:]
a[1] = 4
print(a is b) # �ٸ� ��ü�̹Ƿ� False

# 2. copy ��� �̿�
from copy import copy
b = copy(a)
print(a is b) # �ٸ� ��ü�̹Ƿ� False