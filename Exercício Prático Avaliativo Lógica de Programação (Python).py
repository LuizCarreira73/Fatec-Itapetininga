mat = []
vetm = []
nomes = []
stot = 0
qtd = 0
achou = 0

for i in range(5):
    lin = []
    nomes.append(input("Digite o nome do vendedor: "))
    for j in range(3):
        lin.append(int(input(f'Digite o valor de vendas do mês {j+1} do vendedor {nomes[i]}: ')))
    mat.append(lin)
    print()

for lin in mat:
    print(lin)
print()

for i in range(5):
    soma = 0
    for j in range(3):
        soma += mat[i][j]
    vetm.append(soma / 3)

for i in range(1,2):
    for j in range(3):
        stot += mat[i][j]

busca = str(input("Digite o nome do vendedor para buscar: "))

for i in range(5):
    if nomes[i] == busca:
        achou += 1
        print(f'Nome do vendedor: {nomes[i]}, vendas do mês 1: {mat[i][0]}, vendas do mês 2: {mat[i][1]}, vendas do mês 3: {mat[i][2]}, média: {vetm[i]}')
if not achou:
    print("Vendedor não encontrado!")

for i in range(5):
    for j in range(1,2):
        if mat[i][j] > 2000:
            qtd += 1

print("Relatório: ")
for i in range(5):
    print(f'Vendedor: {nomes[i]}, Média: {vetm[i]}')

print(f'Valor total das vendas nos três meses do segundo vendedor ({nomes[1]}): ', stot)
print("Quantidade de vendedores que venderam mais que 2000,00 no segundo mês: ", qtd)
