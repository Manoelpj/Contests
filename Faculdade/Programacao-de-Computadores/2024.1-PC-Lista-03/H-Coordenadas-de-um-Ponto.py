# Escreva um programa que leia 2 valores reais x e y, que devem representar as coordenadas de um ponto em um plano cartesiano. A seguir, determine qual o quadrante ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou na origem (x = y = 0).

# Input
# A entrada contém uma única linha, com as coordenadas x e y ( - 109 ≤ x, y ≤ 109) do ponto.
# Output
# A saída deve apresentar o quadrante em que o ponto se encontra: 'Q1', 'Q2', 'Q3' ou 'Q4'.

# Se o ponto estiver na origem, escreva a mensagem "Origem".
# Se o ponto estiver sobre um dos eixos escreva "Eixo X" ou "Eixo Y", conforme for a situação.

x,y = map(float,input().split())


# Se X for POSITIVO então será ou Q1 ou Q4
# Se X for NEGATIVO então será Q2 ou Q3

if((x == 0) and (y == 0)):
    print("Origem")
elif((x > 0) and (y > 0)): #Q1
    print("Q1")
elif(x > 0 and y < 0): #Q4
    print("Q4")
elif(y > 0 and x < 0): #Q2
    print("Q2")
elif((y < 0) and (x < 0)): #Q3
    print("Q3")
elif(x == 0):
    print("Eixo Y")
elif(y == 0):
    print("Eixo X")
