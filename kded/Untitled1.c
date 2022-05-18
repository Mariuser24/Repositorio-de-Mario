#include<stdio.h>
void espaciado(char texto[]);
int main()
{
    char texto[] = //Usamos \ para escribir varias lineas
"Lorem ipsum dolor sit amet, consectetur adipiscing elit. Cras euismod\
orci ac porttitor finibus. Curabitur sed tincidunt est, nec mollis\
lorem. Vestibulum facilisis dolor sit amet faucibus ultrices. Sed\
pharetra vel erat et ornare. Duis eu lorem non leo dictum\
egestas. Integer diam arcu, volutpat ut elit vitae, finibus molestie\
risus. Vivamus sagittis commodo risus vel finibus. Vestibulum\
vehicula tortor ut ante tincidunt, non tincidunt turpis sodales. Nam\
orci diam, pulvinar in ante a, dignissim pulvinar magna. Mauris massa\
tortor, fermentum pretium lobortis sed, luctus vitae\
tortor. Suspendisse sagittis augue sit amet risus molestie, sed\
dapibus enim vulputate. Sed tempus risus vel dolor ornare, eget\
imperdiet ligula aliquam. Mauris ac auctor lacus. Quisque suscipit\
interdum rutrum. Sed placerat sit amet urna in vulputate. Nulla\
facilisis mi nisi, vel pulvinar odio auctor posuere.";
espaciado(texto);
return 0;
}
void espaciado(char texto[])
{
    int i=0;
   while(texto[i]!=0)
   {
      if(texto[i-1]==' ')
      {
          texto[i]='+';
      }
      i++;
   }
   printf("%s",texto);
}
