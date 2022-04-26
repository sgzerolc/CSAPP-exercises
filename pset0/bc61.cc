#include <cstdio>
#include <cstdlib>

int main(){
    int count = 0;
    while (true){
        fgetc(stdin);
        if (feof(stdin))
            break;
        count += 1;
    }
    fprintf(stdout,"%d\n", count);
    exit(0);
}
        
// Solution:
// #include <cstdio>

// int main() {
//     unsigned long n = 0;
//     while (fgetc(stdin) != EOF) {
//         ++n;
//     }
//     fprintf(stdout, "%8lu\n", n);
// }
    
