GT NEXT LINE:

- a ideia e termos um programa que le linha por linha
    -> amostra o ficheiro lido.


-> isso e possivel gracas ao open()
    -> entende qual ficheiro eu quero abrir.
            -> e a funcao get_next_line
                    -> com str_join pega cada string e juna numa linha.



#MAIN
    ->  fd inicializado com o ficheiro pretendido + flag.
    ->  criacao da nossa linha.
            -> loop -> linha recebe get_next_line.
                    -> printa a linha e free na msm.

# funcoes auxiliares.
int		ft_linelen(char *str);
    -> strlen que conta com +1 caso tiver uma quebra de linha.
        -> a questao e que para passar essa linha para a memoria e necessario ter o \n incluido.


char	*ft_strjoin(char *s1, char *s2);
    -> super importante , garante a uniao das minhas linhas ate encontrar o \n.
        -> o read so vai le ate x buffer.
            -> caso o buffer for pequeno , a minha linha pode ficar incompleta .. dai o uso da
                str_join ,,,junta os pedacos lidos e acumulados do read
                    -> para a leitura quando encontra um \n. ou EOF.

int		ft_findnextline(char *buffer);
=       -> funcao bem simples .
            -> ajuda a detectar se existe uma nova linha. 
                    -> se sim , retorna 1 , se n , 0 .
            -> muito util para entender se devo continuar a dar read , ou , se devo resetar a line.

void	ft_shiftbuffer(char *buffer)
    -> remove a linha ja consumida...
        -> move o resto para o inicio.
                -> prepara para a proxima leitura.
    -> quando ja lemos uma linha ( por ex: abc\nola); o shifbuffer , pula essa linha + '\n' deixando   somente o ola ... o que estara a frente sao NULL, para ficar  pronto para continuar a juntar mais leituras se precisar.

Isso permite que o buffer estático funcione entre várias chamadas do GNL, sem perder dados.

