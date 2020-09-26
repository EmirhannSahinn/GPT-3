#include <stdio.h>
#include <cs50.h>
#include <unistd.h>

int get_gunepuan (void);
int get_dayvoit (void);
int main (void)
{
        char cevap = get_char ("Bir dil seçin.\nSelect a language. (T or E): ");
        if (cevap == 'T' || cevap == 't')
        {
            printf("Merhaba, ben GPT-3!\n");
            printf("yazıyor...\n");
            sleep (1);
            string ad = get_string ("Adınız nedir?\n");
            printf ("Tanıştığımıza memnun oldum %s!\n",ad);
            printf("yazıyor...\n");
            sleep (1);
            int yaş = get_int ("Kaç yaşındasın?\n");
            printf ("%i yaşında olmana çok sevindim.\n", yaş);
            printf("yazıyor...\n");
            sleep (1);
            char soru = get_char ("Benimle ilgili daha fazla bilgi almak ister misin? (E ya da H)\n");
            if (soru == 'E' || soru == 'e')
            {
                printf("yazıyor...\n");
                sleep (2);
                printf ("Generative Pre-trained Transformer 3 (Türkçe: Üretken Ön İşlemeli Dönüştürücü 3) kısaca GPT-3, insanların yazdığı metinlere benzer içerik üretmek için\nderin öğrenmeyi kullanan özbağlanımlı dil modelidir. GPT-n serisindeki üçüncü nesil dil tahmin modeli olan GPT-3, San Francisco merkezli yapay zeka\naraştırma laboratuvarı OpenAI tarafından geliştirilmiştir.\n");
                printf("yazıyor...\n");
                sleep (1);
                printf ("Benimle ilgili daha fazla bilgi almak istersen tarayıcıdan ismimi aratabilirsin.\n");

            }

            else 
            {
                 printf ("İlgin için teşekkür ederim.\n");
            }
            printf("yazıyor...\n");
            sleep (2);
            printf ("Umarım günün güzel geçiyordur.\n");
            int puan = get_gunepuan();
            if (puan==1 || puan==2 || puan==3)
            {
                printf ("Seni mutlu edecek aktiviteler yaparak gününü daha iyi geçirebilirsin.\n");
            }
            else
            {
                printf("Süper! Buna çok sevindim.\n");
            } 
            printf("yazıyor...\n");
            sleep (1);
            printf ("Benim için çok güzel bir sohbetti. Umarım senin için de öyledir. Görüşmek üzere!\n");          
        }
        else
        {
        
            printf("Hi, I’m GPT-3!\n");
            printf("typing...\n");
            sleep (1);
            string name = get_string ("What’s your name?\n");
            printf ("Nice to meet you %s!\n",name);
            printf("typing...\n");
            sleep (1);
            int old = get_int ("How old are you?\n");
            printf ("I’m glad you’re %i.\n", old);
            printf("typing...\n");
            sleep (1);
            char question = get_char ("Would you like to have some information about me? (Y or N)\n");
            if (question == 'Y' || question == 'y')
            {
                printf("typing...\n");
                sleep (2);
                printf ("Briefly, GPT-3 is a self-dependent language model that uses deep learning to produce content similar to text that people write. GPT-3, the third generation language prediction model in the GPT-n series, was developed by the San Francisco-based artificial intelligence research laboratory OpenAI.\n");
                printf("typing...\n");
                sleep (1);
                printf ("If you want to know more about me, you can search for my name in the browser.\n");
            }
            else 
            {
                printf ("Thank you for your interest.\n");
            }
            printf("typing...\n");
            sleep (2);
            printf ("I hope you have a nice day.");
            int voit = get_dayvoit();
            if (voit==1 || voit==2 || voit==3)
            {
                printf ("You can spend your day better by doing activities that will make you happy.\n");
            }
            else
            {
                printf("Great! I’m happy to hear that.\n");
            }
            printf("typing...\n");
            sleep (1);
            printf ("It was a very nice conversation for me. I hope it is for you too. See you later!\n");           
        }
}

int get_gunepuan (void)
{
    int n;
    do
    {
        n = get_int ("Güne kaç puan verirsin? (1 ile 5 arasında)\n");
    }
    while (n<1 || n>5);
    return n;
}

int get_dayvoit (void)
{
    int n;
    do
    {
        n = get_int ("How many points do you have a day? (Between 1 and 5)\n");
    }
    while (n<1 || n>5);
    return n;
}
