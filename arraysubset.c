#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//https://github.com/alura-cursos/maratonaprogramacao/blob/aula4-exc/subset.cpp
int test_cases = 0;
int size_arr1 = 0;
int size_arr2 = 0;
int i = 0;
char * pEnd;
char buf[10009];

int compare (const void * a, const void * b) {
	return (*(int *) a - *(int *)b);
}

int buscabin (int ini, int end, int val, int v[]) {
	if (ini == end) return ini;
	if (ini > end) return size_arr1;
	
	int meio = (ini + end) / 2;
	if (v[meio] < val) return buscabin(meio + 1, end, val, v);
	else return buscabin(ini, meio, val, v);
}

int main () {
	
	FILE *fp;
	fp = freopen("input1.txt", "r", stdin);

	if (fp != NULL) {		
		
			fgets(buf, 10009, fp);
			test_cases = strtol(buf, NULL, 10);
			
			while (test_cases--) {
				fgets(buf, 10009, fp);
				sscanf(buf, "%d %d", &size_arr1, &size_arr2);
				
				int arr1[size_arr1];
				int arr2[size_arr2];
				
				fgets(buf, 10009, fp);
				for (i = 0; i < size_arr1; i++) {
					arr1[i] = strtol(buf, &pEnd, 10);
					memcpy(buf, &pEnd[1], strlen(pEnd));
				}
				
				fgets(buf, 10009, fp);		
				pEnd = NULL;
				for (i = 0; i < size_arr2; i++) {
					arr2[i] = strtol(buf, &pEnd, 10);
					memcpy(buf, &pEnd[1], strlen(pEnd));
				}
				
				qsort(arr1, size_arr1, sizeof(int), compare);
				qsort(arr2, size_arr2, sizeof(int), compare);
				
				//for (i = 0; i < size_arr1; i++) printf("%d ", arr1[i]);
				//printf("\n");
				//for (i = 0; i < size_arr2; i++) printf("%d ", arr2[i]);
				//printf("\n");
				
				int result = 1;
				int j = 0;
				for (i = 0; i < size_arr2; i++) {
					int pos = buscabin(j, size_arr1 - 1, arr2[i], arr1);
					if (arr1[pos] != arr2[i]) result = 0;
					j = pos + 1;
				}
				
				if (result) printf("Yes\n");
				else printf("No\n");
			}
	}

	return (0);
}
