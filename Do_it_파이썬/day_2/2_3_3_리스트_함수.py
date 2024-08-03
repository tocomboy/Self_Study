#리스트에 요소 추가
a = [1, 2, 3]
a.append(4)

a.append([5, 6])
print(a)

#리스트 정렬
a = [1, 4, 3, 2]
a.sort()
print(a)

a = ['a', 'c', 'b']
a.sort()
print(a)

#리스트 뒤집기
a = ['a', 'c', 'b']
a.reverse()
print(a)

#위치 변환(index)
a = [1, 2, 3]
print(a.index(3))
print(a.index(1))
#print(a.index(0)) - 에러

#리스트 요소 삽입
a = [1, 2, 3]
a.insert(0, 4)
print(a)

a.insert(3, 5)
print(a)

#리스트 요소 제거(remove)
a = [1, 2, 3, 1, 2, 3]
a.remove(3)
print(a)
a.remove(3)
print(a)

#리스트 요소 끄집어내기(pop)
a = [1, 2, 3]
a.pop()
print(a)
print(a.pop()) # 맨 마지막 요소 반환 후 삭제
print(a)

#리스트에서 요소 x의 개수 세기(count)
a = [1, 2, 3, 1]
print(a.count(1))

#리스트 확장(extend)
a = [1, 2, 3]
a.extend([4, 5]) # 리스트만 입력 가능
print(a)
b = [6, 7]
a.extend(b)
print(a)