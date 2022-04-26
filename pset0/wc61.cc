#include <cstdio>
#include <cstdlib>
#include <cctype>

int main(){
	int cc = 0, wc = 0, lc = 0;
	char last = ' ';
	// while ((c = fgetc(stdin)) != EOF){
	while (true){
		char c = fgetc(stdin);
		if (c == EOF){
			break;
		}
		cc += 1;
		// isspace((unsigned char)c) would be better:
		// to avoid unusual value like -2. 
		if (isspace(last) && !isspace(c)){
			// printf("****%c********\n", c);
			wc += 1;
		}
		last = c;
		if (c == '\n')
			lc += 1;
	}
	fprintf(stdout, "%d %d %d\n", lc, wc, cc); // unsigned long?
	exit(0);
}

// int main() {
//     unsigned long nc = 0, nw = 0, nl = 0;
//     bool in_spaces = true;
//     while (true) {
//         int ch = fgetc(stdin);
//         if (ch == EOF) {
//             break;
//         }
//         ++nc;

//         bool this_space = isspace((unsigned char) ch);   // `ch` would be OK too
//         if (in_spaces && !this_space) {
//             ++nw;
//         }
//         in_spaces = this_space;

//         if (ch == '\n') {
//             ++nl;
//         }
//     }
//     fprintf(stdout, "%8lu %7lu %7lu\n", nl, nw, nc);
// }
