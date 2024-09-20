s1 = set([1, 2, 3])
print(s1)

s2 = set("Hello")
print(s2) # ������ �ڹٲ�� 'l' �ϳ��� ������
# ���� �ڷ����� Ư¡
# 1. �ߺ��� ������� ����
# 2. ������ ����(Unordered)

s1 = set([1, 2, 3])

l1 = list(s1) # set �ڷ����� ������ ���� ������ ����� ���� �ε��� �Ϸ���
print(l1)
print(l1[0])

t1 = tuple(s1) # ����Ʈ�� Ʃ�÷� ��ȯ�� �� �ؾ���.
print(t1)
print(t1[0])

# ���� �ڷ����� Ȱ���� ������, ������, ������ ���ϱ�.
s1 = set([1, 2, 3, 4, 5, 6])
s2 = set([4, 5, 6, 7, 8, 9])
# ������
print(s1 & s2)
print(s1.intersection(s2))
# ������
print(s1 | s2)
print(s1.union(s2))
# ������
print(s1 - s2)
print(s2 - s1)
print(s1.difference(s2))
print(s2.difference(s1))

# ���� �ڷ��� ���� �Լ�

#�� 1�� �߰��ϱ�(add)
s1 = set([1, 2, 3])
s1.add(4)
print(s1)

#�� ���� �� �߰��ϱ�(update)
s1 = set([1, 2, 3])
s1.update([4, 5, 6])
print(s1)

#Ư�� �� �����ϱ�(remove)
s1 = set([1, 2, 3])
s1.remove(2)
print(s1)