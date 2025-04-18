import  random

def play():
    print("========================")
    print("Pedra, Papel ou Tesoura")
    print("========================")

    print("Escolha um para jogar")
    print("'p' para Pedra")
    print("'t' para tesoura")
    print("'s' para papel")
    user_escolha = input()

    pc_escolha = random.choice(['p', 't', 's'])

    print(f"Você jogou {user_escolha}")
    print(f"Maquina jogou {pc_escolha}")

    if user_escolha == pc_escolha :
        return "Empate"

    if is_win(user_escolha, pc_escolha):
        return "Você venceu"

    return "Você perdeu"

def is_win(player, opponent):
    if player == 'p' and opponent == 't' or  player == 't' and opponent == 's' or player == 's' and opponent == 'p':
        return True


print(play())