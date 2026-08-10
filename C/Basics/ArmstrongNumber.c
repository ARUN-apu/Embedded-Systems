#include <stdio.h>
int main(){
    int n, count = 0, result = 0, mul = 1, rem;
    printf("Please Enter the number: ");
    scanf("%d", &n);

    int q = n;
    while(q != 0){
        q = q/10;
        count++;
    }
  int cnt = count;
  q = n;
        while(q != 0){
            rem = q % 10;
            count = cnt;
            while(count != 0){
                mul *= rem;
                count--;
            }
            result += mul;
            q /= 10;
            mul = 1;
        }
        if(result == n){
            printf("%d is an Armstrong number\n", n);
        }else{
            printf("%d is not an Armstrong number\n", n);
        }
        return 0;
    }
