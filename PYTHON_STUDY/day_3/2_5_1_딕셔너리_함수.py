#Key ����Ʈ �����(keys)
a = {'name' : 'pey', 'phone' : '0119993323', 'birth' : '1118'}
print(a.keys())

for k in a.keys():
    print(a[k])
    
print(list(a.keys())) # key �� ����Ʈ�� ����
    
#Value ����Ʈ �����(values)
print(a.values())

#Key, Value �� ���(items)
print(a.items())

#Key, Value �� ��� �����(clear)
a.clear()

#Key�� Value���(get)
a = {'name':'pey', 'phone':'0119993323', 'birth':'1118'}
print(a.get('name')) # ���� ������ None ��ȯ
print(a['name']) # ���� ������ Key ���� �߻�

print(a.get('foo', 'bar')) #��ųʸ� �ȿ� 'foo' ���� ������ 'bar' ���� ������ / get(key, 'default')

#Key�� ��ųʸ� �ȿ� �ִ��� ����(in)
a = {'name':'pey', 'phone':'0119993323', 'birth':'1118'}
print('name' in a)
print('email' in a)