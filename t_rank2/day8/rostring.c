int ft_space(char c)
{
    return(c == ' ' || c == '\t');    
}
int main(int ac, char **av)
{
    if(ac < 2)
        write(1, "\n", 1);
    else
    {
        int i = 0;
        int j = 0;
        char *str = av[1];
        int f = 0;
        
        while(ft_space(str[i])) // inicio da primeira palavra.
            i++;
        // estado salvo.
        int start = i;
        while(!ft_space(str[i]))
            i++;
        int end = i;
        // estado do fim da palavra.

        //impriir o resto.!
        while(str[i])
        {
            if(!ft_space(str[i]))
            {
                write(1, &str[i], 1); 
                f = 1;   
            }  
            else if(f)
            {
                write(1, " " , 1);
                f = 0;   
            }
            i++;
        }
        if(end > start) 
            write(1, " ", 1);
        while(start < end)
            write(1, &str[start++], 1);
        write(1, "\n", 1);
    }
    return 0;
}
