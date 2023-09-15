O programa de cálculo de fatorial inicial foi modificado para ser executado em múltiplos processos atráves da implementação de fork, criando um processos pai e um filho permitindo a execução em paralelo.

Professor, na questão de calcular o tempo do programa foi utilizada a biblioteca chrono, que é similar a biblioteca time (pois ambas lidam com data e hora), porém a diferença é que a chrono é mais precisa do que a time, já que ela fornece o tempo em microssegundos ao invés de segundos.

Fatorial de exemplo: 8 = 40320
Tempo de execução em serial: 913 microssegundos
Tempo de execução em multiprocessos: 515 microssegundos
