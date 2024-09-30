def QuickSelect(L, k):
	if(len(L) == 1): # 바닥 조건
		return L[0]
	
	A, M, B = [], [], []
	pivot = L[0]
	for i in A:
		if pivot > i:	
			A.append(i)
		elif pivot < i:
			B.append(i)
		else:
			M.append(i)
			
	A_len = len(A) # 여러번 사용하는 배열 길이
	B_len = len(B)	# 여러번 사용하는 배열 길이
	M_len = len(M) # 여러번 사용하는 배열 길이
	
	if(A_len > k): # k는 A 리스트에 속함.
		return QuickSelect(A, k)
	elif(A_len+M_len < k): # k는 B 리스트에 속함.
		return QuickSelect(B, k-A_len-M_len)
	else: # k는 M 리스트 즉 pivot
		return pivot
	

n, k = map(int, input().split())
L = list(map(int, input().split()))

result = QuickSelect(L, k)
print(result)