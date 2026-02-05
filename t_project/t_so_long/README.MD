SO_FCKING_LONG

ROAD MAP:
    1 ->Contador de linhas de ficheiro ->check!
    2 -> Mapa na memória ->
    3 -> Validar o mapa (dimencoes ec)
    4 -> Validar o mapa2 (objetos , "game design")
    -----------------
    5 -> MLX
  -----------------  -----------------  -----------------  -----------------  -----------------
1 dia :
        -> aprender o gnl de novo (deixar mais limpo)
        -> usar o meu GLN para conseguir contar linhas.
            ->no main (ate ao momento):
                    -> recebo 1 arg -> nome do ficheiro que quero abrir.
                    -> manda para a int ft_countlines_file(char *fd_name);
                            -> pega o nome e usa open e close.
                                    -> envia o fd para int ft_countlines(int fd);
                                            -> entende o numero de linhas (GNL);
                            ->  int ft_countlines_file(char *fd_name); da close;
                                    -> na main -> amostra as linhas

  -----------------  -----------------  -----------------  -----------------  -----------------
2 DIA:
    -> uso de uma struct para o mapa:
            -> no mapa , temos a grind (meu mapa -> memoria);
                -> h -> altura,  l->largura
    -> a ideia e entender quantas linhas o mapa tem
                -> passar depois para a memoria.

        # criacao de 3 funcoes + uso da struct -> mapa;

                -> int ft_linew(char *fd_name); --> lew da primeira linha;
                -> int ft_alocmpa(t_map *map); --> alocar o mapa ja na memoria;
                -> fdpars ... abre o fd ->entede o numero (recebe o ficheiro + struct)
        
## MAIN 1:
        (modularizada :v)

int main(int ac, char **av)
{
    if(ac == 1)
    {
        printf("error\n");
        return 0;
    }
    t_map map; // inicializacao da var -> struct.
    if(ft_fdpars(av[1], &map) || ft_alocmpa(&map))
    {
        printf("Error\n");
        return 0;
    }
    return 0;
}
## MAIN MODULAR


        -> criacao da funcao -> ft_fillmap
                -> allocmap -> cria a matriz;
                -> fillmap -> prenche a matriz linha por linha com a GNL;
        -> criacao de printmap (DEBBUG) + freemap(evitar leaks);
                        ....
        int ft_alocmap(t_map *map); // cria a matriz
        int ft_fillmap(t_map *map, char *file_name); // prenche ela.
        void ft_printmap(t_map *map); // debug
        void ft_freempa(t_map *map); // free ... o mapa 


## MAIN MODULAR 2:

int main(int ac, char **av)
{
    if(ac == 1)
    {
        printf("error\n");
        return 0;
    }
    t_map map; // inicializacao da var -> struct.
    if(ft_fdpars(av[1], &map) || ft_alocmap(&map)|| ft_fillmap(&map, av[1]))
    {
        printf("Error\n");
        return 0;
    }
    ft_printmap(&map);
    ft_freempa(&map);
    return 0;
}
## MAIN MODULAR 2/
  -----------------  -----------------  -----------------  -----------------  -----------------
3 DIA:
ja temos:        
    leitura do ficheiro por argv -> int ft_countlines(int fd);
    contagem de linhas -> util para dar malloc na grind.-> int ft_fdpars(char *file_name,t_map *map);
    alocação da grid -> checked. -> int ft_alocmap(t_map *map); // cria a matriz
    preenchimento com GNL -> int ft_fillmap(t_map *map, char *file_name);
    impressão do mapa ->  void ft_printmap(t_map *map); 


objetivo para hoje:
        -> validar o mapa -> tem de ser retangular.
        -> depois validar paredes.
        -> validar P,E C;

-> ...novo ficheiro src_map2...
    -> aqui verificamos o tamanho do map e ja guardamos valor ao map->w (linhas todas iguais)
        ->
int ft_mapcheck(t_map *map) // as minhas vars. e o meu 
{
    map->w = ft_linew(map->grid[0]);
    int j = 0;
    
    if (!map || !map->grid || !map->grid[0])
        return (-1);
    while(map->grid[j])
    {
        if(map->w != ft_linew(map->grid[j]))
            return -1;
        j++;
    }
    return 0;
}

-> aproveitamos e ja verificamos se o mapa tem somente 1 no iniico e no fim , e nos inicios-fins das linhas do centro.

int ft_bodercheck(t_map *map)
{
    int x = 0;
    while(x < map->w)
    {
        if(map->grid[0][x] != '1')
            return 1;
        x++;
    }
    x = 0;
    int y = map->h-1;
    while(x < map->w)
    {
        if(map->grid[y][x] != '1')
            return 1;
        x++;
    }
    return 0;
}
## main modular 3:

int main(int ac, char **av)
{
    if(ac == 1)
    {
        printf("error\n");
        return 0;
    }
    t_map map; // inicializacao da var -> struct.
    if(ft_fdpars(av[1], &map) || ft_alocmap(&map)|| ft_fillmap(&map, av[1])) // primeira parte -> tamanho -> alocar (grind)-> prencher
    {
        printf("Error\n");
        return 0;
    }
    if(ft_mapcheck(&map) || ft_bodercheck(&map)) /// segunda parta da validacao .. ->ver se 
    e um retangulo -> ver se as paredes estao bem.
    {
        printf("Error\n");  
    }
    else
        ft_printmap(&map);
    ft_freempa(&map);
    return 0;
}
## main modular 3/
-----------------  -----------------  -----------------  -----------------  -----------------
DAY 4:

## -- resumo.
map->grid[y][x]
isto e o meu mapa;
    -> y - sao as minhas linhas -> vertical -> de cima para baixo.
    (H)
    -> x  - as minhas colunas. ->  horizontal -> esq - dir.
    (W)

map->grind[0][x] -> minha primeira linha;
map->grind[map->h-1][x] -> ultima linha
map->grind[0][map->w-1] -> o meu ulimo digito da primeira linha.

map->grind[y][0]-> minha primeira coluna.
map->grind[y][map->w-1] -> minha ultima coluna.
mao->grind[map->h-1][0] = o meu ultimo digito da ultima linha.
### resumo/

    ->concluido:
        -> pegar o mapa , ler as linhas , criar uma grind, dar fill no mapa.
        -> pegar a grind filed, validar a grind:
            -> ver se e um retangulo
            -> ver parades -> 1 somente na primera / ultima linha
                -> no comeco de cada linha (do meio-- apos a primeira , antes da ultima)
                    -> ter 1 somente nos inicio e no fim.
        -> fiz a minha flood fill ja para o dia a seguir.

por questoes de tamanho de condicoes ...  1 funcao somente valida o processo todo.

int ft_grid_parse(t_map *map)
{
    if(ft_map_check(map))
        return 1;
    if(ft_border_check_extreme(map))
        return 1;
    if(ft_boder_check(map))
        return 1;
    return 0;
}
## MAIN MODULAR 4:

int main(int ac, char **av)
{
    if(ac == 1)
    {
        printf("error\n");
        return 0;
    }
    t_map map; // inicializacao da var -> struct.
    if(ft_fdpars(av[1], &map) || ft_alocmap(&map)|| ft_fillmap(&map, av[1]))
    {
        printf("Error\n");
        ft_freemap(&map);
        return 0;
    }
    if(ft_grid_parse(&map))
    {
        printf("Error\n");
        ft_freemap(&map);
        return 0;
    }
    else
        ft_printmap(&map);
    ft_freemap(&map);
    return 0;
}
## MAIN MODULAR 4/

-----------------  -----------------  -----------------  -----------------  -----------------

# DAY 5:

    -> criacao da FF.
        -> check 
    ## N LEVA EM CONSIDERACAO UM TARGET --> somente begin -> meu P!
            -> fazer uma funcao auxiliar que ajuda me a encontrar o meu P.

    -> criacao de uma funcao que copia o meu mapa -> sempre usar uma copia.
      
      #  usar uma copia para evitar alteracoes no mapa principal.


    -> validar o processo todo --- para comecar a MLX.
        -> apos o FF esta pronto -> a copia do mapa e saber onde o P esta....
            -> saber se existe algum C / E que n consegui se trasformar em F.
                -> se sim --- inv mpa ... se n --- valid map.

    -> concluido:
        -> Criacao do src_itensparse :
                -> a idea e :
                    -> fazer uma copia da minha grid !
                        -> a floodfill para validar , processa todas as dimensoes do mapa --- logo altera.
                            -> preciso de uma funcao  que ajuda me a criar um mapa 
                            (tanto a grid como os elementos la dentro)
                            -> char **ft_mapcopy(t_map *map);
                -> entender e encontrar a posicao do meu player:
                    -> apartir do mapa original percorrer o msm e , encontrar 
                         a CORDENADA de onde o meu player esta;
                            -> nisso percorremos o mapa em ambas as dimensoes (x - h , y - w) - e caso o meu char na posicao grid[y][x] == 'P;
                                retornamos essa posicao em t_point p.x = x | p.y = y , return p; == t_point ft_findplayer(t_map *map);
                    -> apos isso , criar uma funcao que usa a nossa FLoodFill -->
            # esta flood fill so precisa levar em consideracao 2 coisas -- o meu player (cordenadas) + ignnorar '1';(PAREDES);
                    -> int ft_mapflood(t_map *map);
                        -> cria uma copia do meu mapa --- fucnao mapcopy .
                            -> usa dela + a posicao do meu player:

                            t_point player = ft_findplayer(map);
                            t_point size =  {map->w, map->h};
                            char **c_map = ft_mapcopy(map);
                            ft_floodfill(c_map, size, player);
                        -> apos enviar para a floodfill ... percorrer o mapa e ver o que sobrou:
                            -> se sobrou E ou C --- erro 
                                -> se n -- mapa valido e pronto para passar para o MLX.
                            
        -> criacao de uma funcao de parse:
            -> entender se ambas essas funcoes conseguiram comprir o que seu papel para economizar linhas na main:
                
                int ft_itensparse(t_map *map)
                {
                    t_point p = ft_findplayer(map);
                    if(p.x < 0 || p.y < 0)
                    {
                        return 1; 
                    }
                    char **c_map = ft_mapcopy(map);
                    if(!c_map || ft_mapflood(map))
                    {
                        ft_freemapcopy(c_map, map->h);
                        return 1;
                    }
                    ft_freemapcopy(c_map, map->h); 
                    return 0;
                }

# MAIN MODULADA 5:
int main(int ac, char **av)
{
    if(ac == 1)
    {
        printf("error\n");
        return 0;
    }
    t_map map; // inicializacao da var -> struct.
    if(ft_fdpars(av[1], &map) || ft_alocmap(&map)|| ft_fillmap(&map, av[1]))
    {
        printf("Error\n");
        ft_freemap(&map);
        return 0;
    }
    if(ft_grid_parse(&map) || ft_itensparse(&map))
    {
        printf("Error\n");
        ft_freemap(&map);
        return 0;
    }
    ft_printmap(&map);
    ft_freemap(&map);
    return 0;
}
MLX a seguir? kkkk


-----------------  -----------------  -----------------  -----------------  -----------------

Day6:   Debug day + improve

    -> criacao de funcoes auxiliares extras ---- itens (chars dentro do mapa)
        -> fazer o programa entender quais saos e somente chars validos -> C, E , P , 1 ,0; ==> int ft_v_walls_roads(char c) e int ft_v_chars(char c)

        -> ver se apos a leitura do mapa -> se ha chars invalidos ==> int ft_chars_pars(t_map *map)

        -> nova funcao que identifica  , apos a leitura do mapa -- quantos chars VALIDOS estao presentes ==> int ft_count_itens(t_map *map)
            -> muito util para identificar se ha somente um P -> E ou se ha no minimo 1 C.

        -> nova criacao da minha funcao que usa flood fill ==> int ft_mapflood(t_map *map)
            -> usa uma funcao auxilar ==> int ft_run_for_flood(char **c_map, t_map *map)
                -> entende se no fim sobrou algum C ou E ao rodar a minha flood no mapa copia.

        -> NOVO item parse ==> int ft_itens_parse(t_map *map) 
            -> funcao auxiliar que verifica se ... parse foi feito com sucesso kkk

                int ft_itens_parse(t_map *map) // modificar
                {
                    if(ft_chars_pars(map))
                        return 1;
                    if(ft_count_itens(map))
                        return 1;
                    if(ft_mapflood(map))
                        return 1;
                    return 0;
                }
        -> no fim ... fluxo do programa:

            if(ft_fdpars(av[1], &map) || ft_alocmap(&map)|| ft_fillmap(&map, av[1]))
            {
                printf("Error\n");
                ft_freemap(&map);
                return 0;
            }
            if(ft_grid_parse(&map) || ft_itens_parse(&map))
            {
                printf("Error\n");
                ft_freemap(&map);
                return 0;
            }
MLX AMANHA?!?!?!?!!?        
-----------------  -----------------  -----------------  -----------------  -----------------
Day7:
       MLX:
        -> uma biblioteca grafica criada pela 42 que fornece:
            -> criacao de janelas;
            -> imagens
            -> textos e sprits em C etc..



/*
    -> criacao da FF.
        -> check 
    fazer uma funcao auxiliar que ajuda me a encontrar o meu P. 
        -> check
    > criacao de uma funcao que copia o meu mapa -> sempre usar uma copia.
      #  usar uma copia para evitar alteracoes no mapa principal.
        -> check
    -> usar agora a flod fill para verificar o meu mapa -> ver
        -> no fim do mapa processado , ver se existe algum P , E , C  restante.\

        
    -> validar o processo todo --- para comecar a MLX.
        -> apos o FF esta pronto -> a copia do mapa e saber onde o P esta....
            -> saber se existe algum C / E que n consegui se trasformar em F.
                -> se sim --- inv mpa ... se n --- valid map.

-> y -> h -> minhas linhas verticais
-> x -> w -> minhas colunas horizontais.
*/