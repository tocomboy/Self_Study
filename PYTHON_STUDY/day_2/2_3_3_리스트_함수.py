#����Ʈ�� ��� �߰�
a = [1, 2, 3]
a.append(4)

a.append([5, 6])
print(a)

#����Ʈ ����
a = [1, 4, 3, 2]
a.sort()
print(a)

a = ['a', 'c', 'b']
a.sort()
print(a)

#����Ʈ ������
a = ['a', 'c', 'b']
a.reverse()
print(a)

#��ġ ��ȯ(index)
a = [1, 2, 3]
print(a.index(3))
print(a.index(1))
#print(a.index(0)) - ����

#����Ʈ ��� ����
a = [1, 2, 3]
a.insert(0, 4)
print(a)

a.insert(3, 5)
print(a)

#����Ʈ ��� ����(remove)
a = [1, 2, 3, 1, 2, 3]
a.remove(3)
print(a)
a.remove(3)
print(a)

#����Ʈ ��� �������(pop)
a = [1, 2, 3]
a.pop()
print(a)
print(a.pop()) # �� ������ ��� ��ȯ �� ����
print(a)

#����Ʈ���� ��� x�� ���� ����(count)
a = [1, 2, 3, 1]
print(a.count(1))

#����Ʈ Ȯ��(extend)
a = [1, 2, 3]
a.extend([4, 5]) # ����Ʈ�� �Է� ����
print(a)
b = [6, 7]
a.extend(b)
print(a)