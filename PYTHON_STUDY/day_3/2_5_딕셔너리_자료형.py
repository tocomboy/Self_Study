dic = {"name":"pey", "phone":"011993323", "birth":"1118"}
# ��ųʸ��� key : value �� �̷����.

a = {1:'hi'}
# a = {[1,2,3]:'a'} # ��ųʸ� key ������ ����Ʈ ��� �Ұ��� - ����Ұ�����(immutable) ���� ����ؾ��� -> Ʃ�� ���
a = {'a':[1,2,3]}

# ��ųʸ� �� �߰�
a = {1: 'a'}
a[2] = 'b' # key - 2 / value = 'b'
print(a)

a['name'] = 'pey' # key - 'name' / value - 'pey'
print(a)

a[3] = [1,2,3] # key - 3 / value - [1, 2, 3]
print(a)

# ��ųʸ� ��� ����

del a[1] # key 1�� key-value ����
print(a)

# ��ųʸ� Key �� Value ���

grade = {'pey':10, 'julliet':99}
print(grade['pey'])
print(grade['julliet'])

a = {1:'a', 2:'b'}
print(a[1])
print(a[2])

a = {'a':1, 'b':2}
print(a['a'])
print(a['b'])

dic = {'name':'pey', 'phone':'0119993323', 'birth':'1118'}
print(dic['name'])
print(dic['phone'])
print(dic['birth'])

# ��ųʸ� ������.

a = {1:'a', 1:'b', 1:'c'}
print(a) # key ���� �ߺ����� ����ϸ� 1:'a'���� ���õǰ� ��µ�. (�� �ڰ��� ��µ�.)
# key ���� �ߺ���� ���� �ʵ��� ����.

# a = {[1, 2] : "hi"} # ����Ʈ�� key�� ����ϸ� �� ���� �߻�. - ����Ʈ ��� Ʃ�� ���