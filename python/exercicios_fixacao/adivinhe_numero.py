
import random


# você adivinhara um número aleatorio,
def acerte_num(x):
    print("====================")
    print("Adivinhe o número")
    print("====================")

    tentativas = 10
    recomeco = 1
    num_aleatorio = random.randint(1, x)
    while recomeco == 1:
        escolha_num = int(input(f"Escolha um numero entra 1 e {x} \n "))
        print(num_aleatorio)

        if escolha_num == num_aleatorio:
            print(f"Parabens, você acertou, o numero aleatorio era {num_aleatorio}")
            break

        if escolha_num < num_aleatorio :
            print("Quase!, mas está um pouco a baixo do número esperado")
            tentativas -= 1
            print(f" Tentativas restantes {tentativas}")

        elif escolha_num > num_aleatorio:
            print("Chegou perto, mas esta acima do numero esperado")
            tentativas -= 1
            print(f" Tentativas restantes {tentativas}")

        if tentativas == 0 :
            print("Você perdeu, usou todas as tentativas")
            break


# O computador adivinhara o numero aleatorio que voce estiver pensando
def computer_guess(x):
    menor_num = 1
    maior_num = x
    respostas = ''

    while respostas != 'c':
        num_aleatorio = random.randint(menor_num, maior_num)
        respostas = input(f"O {num_aleatorio} e  maior/alto (A) ou menor/baixo(B) que o seu numero , ou eu estou correto ?? ").lower()
        if respostas == 'A':
            maior_num = num_aleatorio - 1
        if respostas == 'B':
            menor_num = num_aleatorio + 1
    print(f"O computador acertou seu numero, o numero era {num_aleatorio}")



print(computer_guess(10))