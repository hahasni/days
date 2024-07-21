# include <unistd.h>
ft_putchar(char c){
 write(1,&c,1);

}

void ft_putnbr(int nb){
  if(nb >= 0 && nb < 10){
  
   ft_putchar(nb + 48);

  
  }else if(nb >=10 ){
    ft_putnbr(a /10)

  }else{
	  while(nb != strlength(nb))
   ft_putnbr(nb /10 + 48);
   ft_putnbr(nb % 10 +48);
   
   
  }

}
int main(){
  ft_putnbr();

}


