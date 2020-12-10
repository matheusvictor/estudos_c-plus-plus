/**
Os números de Fibonacci são os números que compõem a seguinte sequência:

1, 1,2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584,...

A sequência recebeu o nome do matemático italiano Leonardo de Pisa, mais conhecido por Fibonacci, que descreveu, no ano de 1202,
o crescimentode uma população de coelhos, a partir desta. Com o primeiro e segundo termos sendo 1, os demais são obtidos a partir
da soma dos dois termos anteriores. O problema dessa sequência, no entanto, é que ela cresce muito rapidamente, onde, por exemplo, o
1000º termo possui 209 dígitos! Sabendo disso, você foi encarregado de elaborar umalgoritmo que retorna a soma de dois termos de Fibonacci.

Entrada (E): Na primeira linha será dada uma string  ‘S’, representandoo  N-ésimo  termo da sequência de fibonacci. Na segunda linha será dada
uma string ‘M’, representando o (N+1)_ésimo termo de Fibonacci. As strings podem ter de 1 a 50 dígitos.

Saída (S): A saída consiste em imprimir o termo de Fibonacci da posição N+2, ou seja, a somados dois termos dados (N e N+1).

Exemplo 1:
E --> 1 1 | S --> 2

Exemplo 2:
E --> 89 144 | S --> 233

Exemplo 3: 
E --> 135301852344706746049 218922995834555169026 | S --> 354224848179261915075

Exemplo 4:
E --> 2706074082469569338358691163510069157 4378519841510949178490918731459856482 | S --> 7084593923980518516849609894969925639

Dica: Os tipos de dados inteiros padrões das linguagens C/C++ não possuem tamanho suficiente para armazenar os números de Fibonacci,
sendo necessário criar seu próprio método de soma  utilizando strings para completar o problema.
*/