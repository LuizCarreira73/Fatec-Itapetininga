for i in range (1,6):
    nome = str(input("Informe o seu nome: "))
    sbruto = float(input("Informe o seu salário bruto: "))
    if sbruto < 600.00:
        print("Olá", nome)
        print("Você está isento do valor da alíquota.")
    else:
        if sbruto >= 600.00 and sbruto < 1500.00:
            aliquota = sbruto * 0.10
            print("Olá", nome)
            print("O valor da sua alíquota é de: R$ ", aliquota)
        else:
            aliquota = sbruto * 0.15
            print("Olá", nome)
            print("O valor da sua alíquota é de: R$ ", aliquota)