# ���� �ٷ� ����
print("I eat %d apples." % 3)

# ���ڿ� �ٷ� ����
print("I eat %s apples." %"five")

# ���� ���� ��Ÿ���� ������ ����
number = 3
print("I eat %d apples." %number)

# 2�� �̻��� �� �ֱ�
number = 10
day = "three"
print("i ate %d apples. so i was sick for %s days." %(number, day))

# ���ڿ� ���� �ڵ�
# %s ���ڿ�
# %c ���� 1��
# %d ����
# %f �ε� �Ҽ�
# %o 8����
# %x 16����
# %% ���� '%' -> %d ��� �Բ� ������ ������ %% �� ����ؾ���

# ���� �ڵ�� ���� �Բ� ���
#���İ� ����
print("%10s" %"hi") # hi �� ���� ����
print("%-10sjane" %"hi")

#�Ҽ��� ǥ��
print("%0.4f" %3.42134234)
print("%10.4f" %3.42134234)

# ���ڿ� �Լ�
a = "hobby"
print(a.count('b')) # ���� ���� ����

a = "Python is best choice"
a.find('b') # ���ڿ����� b�� ó�� ���� ��ġ
a.find('k') # ������ -1 ��ȯ

a = "Life is too short"
a.index('t') # find �Լ��� ����
# a.index('k') # ������ ���� �߻�

a = ','
print(a.join('abcd')) #���ڿ� ���̿� ',' ����

a = "hi"
print(a.upper()) # �ҹ��� -> �빮��

a = "HI"
print(a.lower()) # �빮�� -> �ҹ���

a = " hi "
print(a.lstrip()) # ���� ���� ����

a = " hi "
print(a.rstrip()) # ���� ���� ����

a = " hi "
print(a.strip()) # ���� ���� (�� ĭ �̻��� ���ӵ� ����)

a = "Life is too short"
print(a.replace("Life", "Your leg")) # ���ڿ� �ٲٱ�

a = "Life is too short"
print(a.split()) # ���ڿ� ������

a = "a:b:c:d"
print(a.split(':')) # ���� �������� ������ ����
