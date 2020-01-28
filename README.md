Curso de Maratona de programação: Algoritmos para sua primeira competição
---------
<img src="https://www.alura.com.br/assets/api/cursos/maratona-de-programacao.svg" data-canonical-src="https://www.alura.com.br/assets/api/cursos/maratona-de-programacao.svg" width="250" height="250" />

https://cursos.alura.com.br/course/maratona-de-programacao

## Temas abordados
* Começando o treinamento
* Ordenação
* Recursão
* Busca binária
* Introdução à Programação dinâmica


## Array Subset of another array

https://practice.geeksforgeeks.org/problems/array-subset-of-another-array/0

Given two arrays: arr1[0..m-1] of size m and arr2[0..n-1] of size n. Task is to check whether arr2[] is a subset of arr1[] or not. Both the arrays can be both unsorted or sorted. It may be assumed that elements in both array are distinct.


**Input**

The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an two integers m and n denoting the size of arr1 and arr2 respectively. The following two lines contains the space separated elements of arr1 and arr2 respectively.


**Output**

Print "Yes"(without quotes) if arr2 is subset of arr1.

Print "No"(without quotes) if arr2 is not subset of arr1.


**Constraints**
1 ≤ T ≤ 100

1 ≤ m,n ≤ 105

1 ≤ arr1[i], arr2[j] ≤ 105


**Examples**

```
Input:
3
6 4
11 1 13 21 3 7
11 3 7 1
6 3
1 2 3 4 5 6
1 2 4
5 3
10 5 2 23 19
19 5 3

Output:
Yes
Yes
No
````

**Explanation**
**Testcase 1:** (11, 3, 7, 1) is a subset of first array.
