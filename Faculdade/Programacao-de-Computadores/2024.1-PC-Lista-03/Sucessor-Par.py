# Para se preparar para os outros problemas, vamos fazer um teste. Dado um número X, retorne o menor número par maior do que X.

# Input
# Uma linha contendo um número x (0 < x < 107).
# Output
# Uma linha contendo a resposta do problema.

x = int(input())

i = 1
output = False
while(output != True):
    if((x+i) % 2 == 0):
        output = True
        print(x+i)
    i = i + 1 #nao funciona i++ ????????
