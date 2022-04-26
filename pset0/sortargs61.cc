#include <cstdio>
#include <cstring>

void insertion_sort(int num, char* arr[]){
	for (int i = 2; i < num; i++){
		int pointer = i;
		// ignore first element in argv
		while (pointer > 1 && strcmp(arr[pointer], arr[pointer-1]) < 0){
			printf("before: %s****%s\n", arr[pointer-1],arr[pointer]);
			char* temp = arr[pointer];
			arr[pointer] = arr[pointer-1];
			arr[pointer - 1] = temp;
			printf("after: %s****%s\n", arr[pointer-1],arr[pointer]);
			pointer -= 1;
		}
	}
	for (int j = 1; j < num; j++){
		fprintf(stdout, "%s\n", arr[j]);
		// printf("%s\n", arr[j]);  
	}
}

int main(int argc, char* argv[]){
	insertion_sort(argc, argv);
	return 0;
}


// solution

// #include <cstring>
// #include <cstdio>

// int main(int argc, char* argv[]) {
//     // insertion sort
//     for (int i = 2; i < argc; ++i) {
//         char* x = argv[i];
//         int j = i - 1;
//         while (j >= 0 && strcmp(argv[j], x) > 0) {
//             argv[j + 1] = argv[j];
//             --j;
//         }
//         argv[j + 1] = x;
//     }

//     for (int i = 1; i < argc; ++i) {
//         fprintf(stdout, "%s\n", argv[i]);
//     }
// }