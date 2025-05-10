# Um determinado material radioativo perde metade de sua massa a cada s segundos. Escreva um programa que leia o tempo s de perda de massa e a massa inicial mi, em gramas, de um material. O programa deve então calcular em quanto tempo a massa do material fica menor do que 0, 5 grama. O programa deve mostrar a massa final, com 3 casas decimais em uma linha e o tempo gasto para o material chegar a essa massa. O tempo deve ser mostrado na forma D dias HH:MM:SS.

# Input
# A entrada é composta de 1 linha contendo 2 (dois) números inteiros s (1 ≤ s ≤ 109), o tempo, em segundos, que a massa do material cai pela metadee mi, a massa inicial do material radioativo.
# Output
# Seu programa deve mostrar uma única linha, com o tempo gasto em forma de horas, minutos, segundos e milissegundos: D dias HH:MM:SS.



#Input
segundos, massaInicial = map(int,input().split())

massaInicial /= 2
dias = 0 #86400seg = 1 dia
horas = 0 #3600seg = 1 hora
minutos = 0 #60seg = 1 minuto
#segundos = input


ticks = 0 #vou usar para determinar quantos "ticks" de segundos foram gastos para que a massa seja < 0.5

while(massaInicial > 1/2): #0.5
    massaInicial /= 2
    ticks += 1           # ++ticks ou ticks++ não funciona


segundos *= ticks 
#segundos = 400

while(segundos % 86400  == 0):
    dias += 1
while(segundos % 3600 == 0):
    horas += 1
while(segundos % 60 == 0):
    minutos +=1

#segundos nao precisa de while, só usaremos o que sobrou dps dos whiles

#fazer um while que divide o valor enquanto o % for um 0 até que acabe e vá para o próximo
#ex: while dividindo os segundos até que tenha o dia, dps outro while pra ter a qtd de horas e vai indo e depois o que sobrar fica nos segundos
# deve ter jeitos melhores, mas só pensei nesse 


#Output
# print(D + " dias " H + ":" + M + ":" + S)