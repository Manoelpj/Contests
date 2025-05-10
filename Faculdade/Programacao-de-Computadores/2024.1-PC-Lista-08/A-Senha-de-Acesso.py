# Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura de senha incorreta informada, escrever a mensagem "Senha Invalida!". Quando a senha for informada corretamente deve ser impressa a mensagem "Acesso Permitido." e o algoritmo encerrado. Considere que a senha correta é o valor 9842.

# Input
# A entrada é composta por vários casos de testes contendo valores inteiros. Cada senha é digitada em uma linha. A linha possui apenas a senha a ser verificada.
# Output
# Para cada senha lida o programa deve mostrar a mensagem, de acordo com a descrição do problema. Ao ler uma senha correta o programa termina.

password = int(input())
    
while(password != 9842): #9842 password correct
    password = int(input())
    print("Senha Invalida!")

print("Acesso Permitido.")
