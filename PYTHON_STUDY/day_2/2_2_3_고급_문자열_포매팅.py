# ���� �ٷ� ����
print("I eat {0} apples".format(3))

#���ڿ� �ٷ� ����
print("I eat {0} apples".format("five"))

#���� ���� ���� ���� ����
number = 3
print("I eat {0} apples".format(number))

#2�� �̻��� �� �ֱ�
number = 10
day = "three"
print("I ate {0} apples. So i was sice for {1} days.".format(number, day))

#�̸����� �ֱ�
print("I ate {number} apples. so I was sick for {day}.".format(number=10, day=3))

#�ε����� �̸� ȥ���ؼ� �ֱ�
print("I ate {0} apples. so I was sick for {day} days.".format(10, day=3))

#���� ����
print("{0:<10}".format("hi"))

#������ ����
print("0:>10".format("hi"))

#��� ����
print("{0:^10}".format("hi"))

#���� ä���
print("{0:=^10}".format("hi"))
print("{0:!<10}".format("hi"))

#�Ҽ��� ǥ��
y = 3.42134234
print("{0:0.4f}".format(y))

# { �Ǵ� } ���� ǥ��
print("{{ and }}".format())
