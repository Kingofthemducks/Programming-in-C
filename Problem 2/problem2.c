#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//I created this separate from the main but the string values "Vowelcount" contains are crucial calculating the vowels in the final display of the user input
int Vowelcount(char vowels[], int length){

    if(length <= 0)
        return 0;
    else if (vowels[0] == 'A' || vowels[0] == 'a' || vowels[0] == 'E' || vowels[0] == 'e' || vowels[0] == 'I' || vowels[0] == 'i' || vowels[0] == 'O' || vowels[0] == 'o' || vowels[0] == 'U' || vowels[0] == 'u' || vowels[0] == 'Y' || vowels[0] == 'y')
        return 1 + Vowelcount(vowels + 1, length - 1);
    else
        return Vowelcount(vowels + 1, length - 1);




}





int main()
{
    //First I instructed the user to put in 10 values of the list provided so I could assign/store the value in the 10 empty strings below
    printf("Type in 10 of the following countries; Argentina, Australia, Brazil, Canada, China, France, Germany, India, Indonesia, Italy, Japan, Republic-of-Korea, Mexico, Russia, Saudi-Arabia, South-Africa, Turkey, UK, USA : \n");
    char a[15] = "";
    char b[15] = "";
    char c[15] = "";
    char d[15] = "";
    char e[15] = "";
    char f[15] = "";
    char g[15] = "";
    char h[15] = "";
    char i[15] = "";
    char j[15] = "";


    //Scanf allows the user to input their values and & means I store/assign the value of the user input to the empty strings above
    scanf("%s",&a);
    scanf("%s",&b);
    scanf("%s",&c);
    scanf("%s",&d);
    scanf("%s",&e);
    scanf("%s",&f);
    scanf("%s",&g);
    scanf("%s",&h);
    scanf("%s",&i);
    scanf("%s",&j);

    //I used strlen to calculate the number of characters there are in each user input and I assigned/stored the results in the len integers
    int len1 = strlen(a);
    int len2 = strlen(b);
    int len3 = strlen(c);
    int len4 = strlen(d);
    int len5 = strlen(e);
    int len6 = strlen(f);
    int len7 = strlen(g);
    int len8 = strlen(h);
    int len9 = strlen(i);
    int len10 = strlen(j);

    //I created num_vowels to store the calculated number of integers using the formula above with the 10 separate inputs and their calculated length
    int num_vowels1 = Vowelcount(a, len1);
    int num_vowels2 = Vowelcount(b, len2);
    int num_vowels3 = Vowelcount(c, len3);
    int num_vowels4 = Vowelcount(d, len4);
    int num_vowels5 = Vowelcount(e, len5);
    int num_vowels6 = Vowelcount(f, len6);
    int num_vowels7 = Vowelcount(g, len7);
    int num_vowels8 = Vowelcount(h, len8);
    int num_vowels9 = Vowelcount(i, len9);
    int num_vowels10 = Vowelcount(j, len10);





    //This is the main part of the program as I set the values so any of the scenarios could happen in case the length of the input was more than or equal to any other scenarios
    if(len1>=len2 && len1>=len3 && len1>=len4 && len1>=len5 && len1>=len6 && len1>=len7 && len1>=len8 && len1>=len9 && len1>=len10)
        printf("The largest word provided is %s and the number of vowels is %d\n",a,num_vowels1);

    else
        if(len2>=len1 && len2>=len3 && len2>=len4 && len2>=len5 && len2>=len6 && len2>=len7 && len2>=len8 && len2>=len9 && len2>=len10)
        printf("The largest word provided is %s and the number of vowels is %d\n",b,num_vowels2);

    else
        if(len3>=len2 && len3>=len1 && len3>=len4 && len3>=len5 && len3>=len6 && len3>=len7 && len3>=len8 && len3>=len9 && len3>=len10)
        printf("The largest word provided is %s and the number of vowels is %d\n",c,num_vowels3);

    else
        if(len4>=len1 && len4>=len2 && len4>=len3 && len4>=len5 && len4>=len6 && len4>=len7 && len4>=len8 && len4>=len9 && len4>=len10)
        printf("The largest word provided is %s and the number of vowels is %d\n",d,num_vowels4);

    else
        if(len5>=len1 && len5>=len2 && len5>=len3 && len5>=len4 && len5>=len6 && len5>=len7 && len5>=len8 && len5>=len9 && len5>=len10)
        printf("The largest word provided is %s and the number of vowels is %d\n",e,num_vowels5);

    else
        if(len6>=len1 && len6>=len2 && len6>=len3 && len6>=len4 && len6>=len5 && len6>=len7 && len6>=len8 && len6>=len9 && len6>=len10)
        printf("The largest word provided is %s and the number of vowels is %d\n",f,num_vowels6);

    else
        if(len7>=len1 && len7>=len2 && len7>=len3 && len7>=len4 && len7>=len5 && len7>=len6 && len7>=len8 && len7>=len9 && len7>=len10)
        printf("The largest word provided is %s and the number of vowels is %d\n",g,num_vowels7);

    else
        if(len8>=len1 && len8>=len2 && len8>=len3 && len8>=len4 && len8>=len5 && len8>=len6 && len8>=len7 && len8>=len9 && len8>=len10)
        printf("The largest word provided is %s and the number of vowels is %d\n",h,num_vowels8);

    else
        if(len9>=len1 && len9>=len2 && len9>=len3 && len9>=len4 && len9>=len5 && len9>=len6 && len9>=len7 && len9>=len8 && len9>=len10)
        printf("The largest word provided is %s and the number of vowels is %d\n",i,num_vowels9);

    else
        if(len10>=len1 && len10>=len2 && len10>=len3 && len10>=len4 && len10>=len5 && len10>=len6 && len10>=len7 && len10>=len8 && len10>=len9)
        printf("The largest word provided is %s and the number of vowels is %d\n",j,num_vowels10);


//I have done the same but to find the lowest one and each scenario is linked to condition of the shortest length as well as I included the number of vowels to display alongside of the results
if(len1<=len2 && len1<=len3 && len1<=len4 && len1<=len5 && len1<=len6 && len1<=len7 && len1<=len8 && len1<=len9 && len1<=len10)
        printf("The smallest word provided is %s and the number of vowels is %d\n",a,num_vowels1);

    else
        if(len2<=len1 && len2<=len3 && len2<=len4 && len2<=len5 && len2<=len6 && len2<=len7 && len2<=len8 && len2<=len9 && len2<=len10)
        printf("The smallest word provided is %s and the number of vowels is %d\n",b,num_vowels2);

    else
        if(len3<=len2 && len3<=len1 && len3<=len4 && len3<=len5 && len3<=len6 && len3<=len7 && len3<=len8 && len3<=len9 && len3<=len10)
        printf("The smallest word provided is %s and the number of vowels is %d\n",c,num_vowels3);

    else
        if(len4<=len1 && len4<=len2 && len4<=len3 && len4<=len5 && len4<=len6 && len4<=len7 && len4<=len8 && len4<=len9 && len4<=len10)
        printf("The smallest word provided is %s and the number of vowels is %d\n",d,num_vowels4);

    else
        if(len5<=len1 && len5<=len2 && len5<=len3 && len5<=len4 && len5<=len6 && len5<=len7 && len5<=len8 && len5<=len9 && len5<=len10)
        printf("The smallest word provided is %s and the number of vowels is %d\n",e,num_vowels5);

    else
        if(len6<=len1 && len6<=len2 && len6<=len3 && len6<=len4 && len6<=len5 && len6<=len7 && len6<=len8 && len6<=len9 && len6<=len10)
        printf("The smallest word provided is %s and the number of vowels is %d\n",f,num_vowels6);

    else
        if(len7<=len1 && len7<=len2 && len7<=len3 && len7<=len4 && len7<=len5 && len7<=len6 && len7<=len8 && len7<=len9 && len7<=len10)
        printf("The smallest word provided is %s and the number of vowels is %d\n",g,num_vowels7);

    else
        if(len8<=len1 && len8<=len2 && len8<=len3 && len8<=len4 && len8<=len5 && len8<=len6 && len8<=len7 && len8<=len9 && len8<=len10)
        printf("The smallest word provided is %s and the number of vowels is %d\n",h,num_vowels8);

    else
        if(len9<=len1 && len9<=len2 && len9<=len3 && len9<=len4 && len9<=len5 && len9<=len6 && len9<=len7 && len9<=len8 && len9<=len10)
        printf("The smallest word provided is %s and the number of vowels is %d\n",i,num_vowels9);

    else
        if(len10<=len1 && len10<=len2 && len10<=len3 && len10<=len4 && len10<=len5 && len10<=len6 && len10<=len7 && len10<=len8 && len10<=len9)
        printf("The smallest word provided is %s and the number of vowels is %d\n",j,num_vowels10);

    return 0;

}
