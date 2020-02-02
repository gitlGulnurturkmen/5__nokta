#include <stdio.h>


int main() {
    struct noktalar{
        int x,y;
    };
    struct noktalar n1,n2,n3,n4,n5;
    float uzaklik1,uzaklik2,uzaklik3,uzaklik4,uzaklik5,uzaklik;
    printf("1. noktanin koordinatlarini giriniz.");
    scanf("%d%d",&n1.x,&n1.y);
    printf("2. noktanin koordinatlarini giriniz.");
    scanf("%d%d",&n2.x,&n2.y);
     printf("3. noktanin koordinatlarini giriniz.");
    scanf("%d%d",&n3.x,&n3.y);
     printf("4. noktanin koordinatlarini giriniz.");
    scanf("%d%d",&n4.x,&n4.y);
     printf("5. noktanin koordinatlarini giriniz.");
    scanf("%d%d",&n5.x,&n5.y);
    uzaklik1=sqrt(pow((n1.x-n2.x),2)+pow((n1.y-n2.y),2));
    uzaklik2=sqrt(pow((n2.x-n3.x),2)+pow((n2.y-n3.y),2));
    uzaklik3=sqrt(pow((n3.x-n4.x),2)+pow((n3.y-n4.y),2));
    uzaklik4=sqrt(pow((n4.x-n5.x),2)+pow((n4.y-n5.y),2));
   uzaklik=uzaklik1+uzaklik2+uzaklik3+uzaklik4;
    printf("Bes nokta arasindaki mesafe %lf'dir.",uzaklik);
	return 0;
}
