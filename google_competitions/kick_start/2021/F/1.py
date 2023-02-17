tc = int(input())
for tt in range(tc):
  n = int(input())
  s = input()
  res  = 0
  kabba = []
  for i in range(n):
      if s[i] == '1':
          kabba.append(i+1)
  for i in range(len(kabba)-1):
    aux = (kabba[i+1]-kabba[i]-1)
    res += ((aux//2)*(aux//2+1)) + (aux%2)*(aux//2+1)
  res += ((kabba[0]-1)*(kabba[0]))//2
  aux = (n-kabba[len(kabba)-1])
  res += ((aux+1)*aux)//2

  print('Case #' + str(tt+1) + ': ',end = '')
  print(res)
