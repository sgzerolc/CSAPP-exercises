#include <cstring>
#include <cassert>
#include <cstdio>

// 1 arr notation
// char* mystrstr(const char* s1, const char* s2) {
//     // Your code here
//     int i = 0, j = 0;
//     if (s2[0] == '\0'){  // special case
// 	    return (char*)s1;
//     }
//     while (true){
// 	    if (!(s1[i] == s2[j])){
// 		    ++i;
// 	    } else {
// 		    int loc = i;
// 		    while(s1[i] == s2[j]){
// 			    i++;
// 			    j++;
// 			    if (s2[j] == '\0'){
// 				    return (char *)(s1+loc); 
// 			    }
// 		    }
// 		    break; 
// 	    }
//     }
//     return nullptr;
// }

// 2 pointer notation
char* mystrstr(const char* s1, const char* s2){
	if (*s2 == '\0'){  
	// Like in python, in c, emtpy str has a bool value: false.
	// can use in this case too: if(!*s2) 
		return (char*)s1;
	}

	while(true){
		if(!(*s1 == *s2)){
			++s1;
		}else{
			for(char* loc = (char*)s1; *s1 == *s2; s1++, s2++){
				if(*s2 == '\0'){
					return loc;
				}
			}
			break;
		}

	}
	return nullptr;
}

int main(int argc, char* argv[]) {
    assert(argc == 3);
    printf("strstr(\"%s\", \"%s\") = %p\n",
           argv[1], argv[2], strstr(argv[1], argv[2]));
    printf("mystrstr(\"%s\", \"%s\") = %p\n",
           argv[1], argv[2], mystrstr(argv[1], argv[2]));
    assert(strstr(argv[1], argv[2]) == mystrstr(argv[1], argv[2]));
}


// sol 1: use array bracket
// char* mystrstr(const char* s1, const char* s2) {
//     // loop over `s1` (C strings end at the character with value 0)
//     for (size_t i = 0; s1[i] != 0; ++i) {
//         // loop over `s2` until `s2` ends or differs from `s1`
//         size_t j = 0;
//         while (s2[j] != 0 && s2[j] == s1[i + j]) {
//             ++j;
//         }
//         // success if we got to the end of `s2`
//         if (!s2[j]) {
//             return (char*) &s1[i];
//         }
//     }
//     // special case
//     if (!s2[0]) {
//         return (char*) s1;
//     }
//     return nullptr;
// }

//sol2: pointer version
// char* mystrstr(const char* s1, const char* s2) {
//     // loop over `s1`
//     while (*s1) {
//         // loop over `s2` until `s2` ends or differs from `s1`
//         const char* s1try = s1;
//         const char* s2try = s2;
//         while (*s2try && *s2try == *s1try) {
//             ++s2try;
//             ++s1try;
//         }
//         // success if we got to the end of `s2`
//         if (!*s2try) {
//             return (char*) s1;
//         }
//         ++s1;
//     }
//     // special case
//     if (!*s2) {
//         return (char*) s1;
//     }
//     return nullptr;