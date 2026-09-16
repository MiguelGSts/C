/*
QUESTÃO 1 - ANALISE DE PARTIDA DE FUTEBOL - 1,0 ponto

Crie um programa em C que receba:

- o nome do primeiro time;
- o nome do segundo time;
- a quantidade de gols do primeiro time no 1Âº tempo;
- a quantidade de gols do segundo time no 1Âº tempo;
- a quantidade de gols do primeiro time no 2Âº tempo;
- a quantidade de gols do segundo time no 2Âº tempo.

O programa deverá calcular o placar final de cada equipe e informar o resultado da partida.

REGRAS:

Se um dos times terminar a partida com mais gols, mostre:

Vencedor: NOME DO TIME
Placar final: X x Y

Alem disso, classifique a vitória de acordo com a diferença de gols:

- diferença de 1 gol -> Vitória apertada;
- diferença de 2 gols -> Vitória confortável;
- diferença de 3 gols ou mais -> Goleada.

Caso os dois times terminem com a mesma quantidade de gols:

- se o resultado for 0 x 0, mostrar "Empate sem gols";
- se houver gols, mostrar "Empate com gols".

Exemplo de saída:

Atlético MG 4 x 1 Palmeiras
Vencedor: Atlético MG
Goleada

Utilize estruturas condicionais e operadores relacionais para resolver o problema.
*/


/*
QUESTÃO 2 - PEDRA, PAPEL OU TESOURA - 0,5 ponto

Crie um programa para representar uma partida de Pedra, Papel ou Tesoura entre dois jogadores.

Cada jogador deverá¡ escolher uma das seguintes opções:

1 - Pedra
2 - Papel
3 - Tesoura

O programa deverá¡ receber a escolha do Jogador 1 e do Jogador 2.

Utilize switch para identificar e mostrar a opção escolhida por cada jogador.

Depois, determine o resultado da partida considerando:

Pedra vence Tesoura
Tesoura vence Papel
Papel vence Pedra

O programa deverÃ¡ mostrar uma das seguintes mensagens:

Jogador 1 venceu!
Jogador 2 venceu!
Empate!

Caso qualquer jogador digite um número diferente de 1, 2 ou 3, o programa deverá¡ mostrar:

Jogada inválida.
*/


/*
QUESTÃO 3 - VALIDAÇÃO DE DATA - 0,5 ponto

Crie um programa que receba:

- um número representando o dia;
- um número representando o mÃªs.

O programa deverá¡ verificar se a data informada é válida.

Considere:

Janeiro   -> 31 dias
Fevereiro -> 28 dias
Março     -> 31 dias
Abril     -> 30 dias
Maio      -> 31 dias
Junho     -> 30 dias
Julho     -> 31 dias
Agosto    -> 31 dias
Setembro  -> 30 dias
Outubro   -> 31 dias
Novembro  -> 30 dias
Dezembro  -> 31 dias

Utilize switch para identificar o mês e determinar a quantidade máxima de dias permitida.

Depois, utilizando estruturas condicionais, verifique se o dia informado existe naquele mês.

Exemplos:

Digite o dia: 31
Digite o mês: 4

Data inválida.


Digite o dia: 29
Digite o mês: 2

Data inválida.


Digite o dia: 25
Digite o mês: 12

Data válida.

Caso o usuário informe um mês menor que 1 ou maior que 12, o programa também deverá informar:

Data inválida.

NÃ£o Ã© necessÃ¡rio considerar anos bissextos.
*/